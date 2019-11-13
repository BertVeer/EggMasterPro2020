//----------------------------------------------------------------------------
// EGG MASTER PRO 2020 
// (c) 2019 Bert vt Veer
//----------------------------------------------------------------------------

#include <Arduboy2.h>
#include <ArduboyTones.h>
#include "data.h"


// Constants

const char* TUNE_NAME[] = { "BEEP", "RING", "MELODY", "SIREN" };
const char* VOLUME_NAME[] = { "OFF", "NORMAL", "LOUD" };
const char* TIME_NAME[] = { "5 SEC", "1 MIN", "10 MIN", "FOREVER" };
const uint16_t TIME_LIST[] = { 5, 60, 600, 0 };
const uint16_t SPLASH_DURATION = 50; // frames
const uint16_t DEFAULT_TIMEOUT = 7; // frames
const uint8_t LED_FLASH_RATE = 16;
const uint8_t STORE_COOKIE = 72;
const uint16_t STORE_INIT = 433;
const uint16_t STORE_ALARMLED = 434;
const uint16_t STORE_ALARMVOLUME = 435;
const uint16_t STORE_ALARMTUNE = 436;
const uint16_t STORE_ALARMTIME = 437;
const uint16_t STORE_TIMETABLE = 438;


enum e_sound {
    SND_NONE, SND_CLICK, SND_SELECT, SND_BACK, SND_TICTOC
};

enum e_state { 
    STATE_OPTIONS, STATE_SETTIMES, STATE_SPLASH, STATE_SIZE, STATE_PREFERENCE,
    STATE_PREPARE, STATE_RUN, STATE_DONE, STATE_END 
} state = STATE_SPLASH;


// Globals

// Clocks & timers
struct Clock {
    uint32_t begin = 0;
    uint32_t now = 0;
    uint16_t timer = 0;  // seconds
    uint16_t elapsed = 0;  // seconds
    uint32_t alarm = 0; // seconds
    uint16_t wait = SPLASH_DURATION;  // frames
} clock;

// Arduboy libaries
Arduboy2 ardu;
ArduboyTones sound(ardu.audio.enabled);

// UI
bool resetState = false, blankState = false;
uint8_t indexSize = 1, indexPref = 1;
uint8_t cursorX = 0, cursorY = 0;
bool editMode = false;
uint16_t editValue = 0;


// Dynamic data

// Settings
uint8_t alarmTune = 0;
uint8_t alarmVolume = 1;
uint8_t alarmTime = 1;
bool alarmLed = true;

// Boiling time table
uint16_t timeTable[3][3] = {
    600, 450, 360, // large
    540, 420, 330, // medium 
    480, 390, 300  // small
//  hard med soft 
};


//----------------------------------------------------------------------------
// Misc
//----------------------------------------------------------------------------

void setBlankMode(bool blank = true, uint8_t timeout = DEFAULT_TIMEOUT)
{
    blankState = blank;
    clock.wait = blank ? timeout : 0;
}


void playSound(e_sound snd) {
    if (alarmVolume == 0) return;
    sound.volumeMode(alarmVolume == 1 ? VOLUME_ALWAYS_NORMAL : VOLUME_ALWAYS_HIGH);
    switch (snd) {
        case SND_NONE: break;
        case SND_CLICK: sound.tones(sfx_click); break;
        case SND_SELECT: sound.tones(sfx_select); break;
        case SND_BACK: sound.tones(sfx_back); break;
        case SND_TICTOC: sound.tones(sfx_tictoc); break;
    }
}


void playAlarm() {
    if (alarmVolume == 0) return;
    clock.alarm = clock.now + TIME_LIST[alarmTime]*1000;
    switch (alarmTune) {
        case 0: sound.tones(sfx_alarm_beep); break;
        case 1: sound.tones(sfx_alarm_ring); break;
        case 2: sound.tones(sfx_alarm_melody); break;
        case 3: sound.tones(sfx_alarm_siren); break;
    }
}


void handleTimeout()
{
    if (clock.wait>0 && --clock.wait==0) {
        if (state == STATE_SPLASH) {
            state = STATE_SIZE;
            setBlankMode();
        }
        else setBlankMode(false);
    }    
}


void updateClock() 
{
    clock.now = millis();
    clock.elapsed = (clock.now - clock.begin)/1000;

    // Alarm is sounding
    if (TIME_LIST[alarmTime]>0 && clock.alarm>0 && clock.now > clock.alarm) {
        sound.noTone();
        clock.alarm = 0;
    }
    
    // Main clock is running
    if (clock.begin > 0) {     
        if (clock.timer - clock.elapsed == 0) {
            clock.begin = 0;
            resetState = false;
            state = STATE_DONE;
            playAlarm();
        }
        if (ardu.frameCount%15 == 0) {
            playSound(SND_TICTOC);
        }
    }  
}


//----------------------------------------------------------------------------
// Drawing
//----------------------------------------------------------------------------

template <typename T> void drawText(uint8_t x, uint8_t y, T src, bool invert = false) {
    ardu.setTextBackground(invert ? WHITE : BLACK);
    ardu.setTextColor(invert ? BLACK : WHITE);
    ardu.setCursor(x,y); 
    ardu.print(src);
}


void drawTitle(const uint8_t* title) 
{
    Sprites::drawOverwrite(1,0, title, 0);
    for (int x=0; x<128; x+=2) { ardu.drawPixel(x,8); }
}


void drawClock(unsigned long stamp)
{
    uint8_t secs = stamp % 10;
    uint8_t secs10 = (stamp/10) % 6;
    uint8_t minutes = (stamp/60) % 10;
    uint8_t minutes10 = (stamp/600) % 10;
    
    if (minutes10) Sprites::drawOverwrite(65,12, digits[minutes10], 0);
    Sprites::drawOverwrite(75,12, digits[minutes], 0); 
    Sprites::drawOverwrite(91,12, digits[secs10], 0);
    Sprites::drawOverwrite(101,12, digits[secs], 0);
    Sprites::drawOverwrite(86,18, img_digit_dots, 0);
}


void drawProgram()
{
    static uint8_t offs_size[] = { 2, 0, 2 };
    static uint8_t offs_pref[] = { 4, 0, 5 };
        
    uint8_t offs = offs_size[indexSize];
    uint8_t len = 27-offs + 3;
    int8_t left = 92 - (len+13)/2;
    Sprites::drawOverwrite(left, 42, menu_size[indexSize], 0);
    Sprites::drawOverwrite(left+len, 42, text_egg, 0);
    
    offs = offs_pref[indexPref];
    len = 27-offs + 3; 
    left = 92 - (len+24)/2;
    Sprites::drawOverwrite(left, 51, menu_pref[indexPref], 0);  
    Sprites::drawOverwrite(left+len, 51, text_boiled, 0);    
}


void drawMenu(t_bitmaplist menu[], int len, uint8_t select_index)
{
    if (blankState) return;
    Sprites::drawOverwrite(21,48-select_index*13, img_selection, 0);
    for (int i=0; i<len; i++) {
        Sprites::drawSelfMasked(24, 50-i*13, menu[i], 0); 
    }
}


void drawFrame() 
{
    ardu.fillScreen(BLACK);
    switch (state) {
         case STATE_SPLASH: {
            Sprites::drawOverwrite(54,3, img_hocuspocus, 0);
            drawText(36,40, "EGG"); drawText(57,40, "MASTER");
            drawText(42,52, "PRO"); drawText(63,52, "2020"); 
            break;
        }
        case STATE_OPTIONS: {
            drawTitle(img_title_options);
            if (!blankState) {
                drawText(4,16, "Alarm"); drawText(58,16, TUNE_NAME[alarmTune]);
                drawText(4,28, "Volume"); drawText(58,28, VOLUME_NAME[alarmVolume]);
                drawText(4,40, "Time"); drawText(58,40, TIME_NAME[alarmTime]);
                drawText(4,52, "Led"); drawText(58,52, alarmLed ? "ON" : "OFF");
                drawText(51, 16+cursorY*12, '\x010');
            }
            break;
        }
        case STATE_SETTIMES: {
            drawTitle(img_title_options);
            if (!blankState) {
                drawText(60,15, "S   M   L");
                drawText(4,27, "Soft");
                drawText(4,39, "Medium");
                drawText(4,51, "Hard"); 
                if (!editMode) drawText(48+cursorX*24, 27+cursorY*12, '\x010');
                for (int y=0; y<3; y++) {
                    for (int x=0; x<3; x++) {                    
                        drawText(53+x*24, 27+y*12, timeTable[2-x][2-y]);
                    }
                }
                // Draw cursor reverse in edit mode
                if (editMode) {
                    uint16_t ypos = 27+cursorY*12;
                    ardu.fillRect(51+cursorX*24, ypos-2, 22, 11);
                    drawText(53+cursorX*24, ypos, editValue, true); 
                }
            }        
            break;
        }
        case STATE_SIZE: {
            Sprites::drawOverwrite(75,22, egg_sizes[indexSize], 0);
            Sprites::drawOverwrite(102,27, img_measure, 0);
            drawTitle(img_title_size);
            drawMenu(menu_size, 3, indexSize);
            break;
        }
        case STATE_PREFERENCE: {
            Sprites::drawOverwrite(77,23, egg_prefs[indexPref], 0);
            drawTitle(img_title_prefs);
            drawMenu(menu_pref, 3, indexPref);
            break;
        }
        case STATE_PREPARE: {       
            Sprites::drawOverwrite(20,8, img_boil, 0);  
            drawMenu(menu_start, 1, 0);
            break;
        }
        case STATE_RUN: {  
            if (!blankState && clock.timer>0) {
                uint8_t egg_index = 1+min((uint8_t)(clock.elapsed / (float)clock.timer * (10-indexPref*2)), 9);     
                if (ardu.frameCount%53 > 10) Sprites::drawOverwrite(21,10, egg_large[egg_index], 0);
                else Sprites::drawOverwrite(21,10, egg_large[0], 0);
            }
            break;
        }
        case STATE_DONE: {
            Sprites::drawOverwrite(20,10, img_rinse, 0);       
            drawMenu(menu_done, 1, 0); 
            break;     
        }
        case STATE_END: {
            Sprites::drawOverwrite(24,8, img_finish, 0);
            if (!blankState) Sprites::drawOverwrite(19,49, img_newegg, 0);
            break;
        }
    }
    // Draw clock and program
    if (state >= STATE_PREPARE) {
        if (!(state == STATE_DONE && ardu.frameCount%30 < 4)) {
            if (state == STATE_RUN) drawClock(clock.timer-clock.elapsed);
            else if (state==STATE_DONE) drawClock(0);
            else drawClock(clock.timer);
        }
        drawProgram();  
    }
    // Flash RESET text in reset mode
    if (resetState && ardu.frameCount%12 > 5) drawText(98,0, "RESET");
}


//----------------------------------------------------------------------------
// Input
//----------------------------------------------------------------------------

void handleInput()
{
    e_sound snd = SND_NONE;
    bool key_up = ardu.justPressed(UP_BUTTON);
    bool key_down = ardu.justPressed(DOWN_BUTTON);
    bool key_left = ardu.justPressed(LEFT_BUTTON);
    bool key_right = ardu.justPressed(RIGHT_BUTTON);
    bool key_a = ardu.justPressed(A_BUTTON);
    bool key_b = ardu.justPressed(B_BUTTON);

    // Options on LEFT + B
    if (key_b && ardu.pressed(LEFT_BUTTON)) {
        if (state == STATE_OPTIONS) {
            state = STATE_SETTIMES;
            cursorX = cursorY = 0;
            editMode = false;           
        }
        else {
            state = STATE_OPTIONS;
            clock.begin = 0;
            resetState = false;
        }
        setBlankMode();
        playSound(SND_SELECT); 
        return;
    }

    // Handle cursor keys in options mode
    if (state < STATE_SPLASH) {
        uint8_t maxx = state == STATE_OPTIONS ? 0 : 2;
        uint8_t maxy = state == STATE_OPTIONS ? 3 : 2;
        if (key_up) { 
            if (editMode) editValue = min(900, editValue + 10);
            else cursorY = cursorY>0 ? cursorY-1 : maxy; 
            snd = SND_CLICK;
        }
        if (key_down) { 
            if (editMode) editValue = max(10, editValue-10);
            else cursorY = cursorY<maxy ? cursorY+1 : 0; 
            snd = SND_CLICK;
        }
        if (!editMode && key_left) { 
            cursorX = cursorX>0 ? cursorX-1 : maxx; 
            if (state != STATE_OPTIONS) snd = SND_CLICK;
        }
        if (!editMode && key_right) { 
            cursorX = cursorX<maxx ? cursorX+1 : 0; 
            if (state != STATE_OPTIONS) snd = SND_CLICK; 
        }
    } 
    else {
        // Menu selection up
        if (key_up) {
            if (state == STATE_SIZE) {
                indexSize = (indexSize+1)%3;
                snd = SND_CLICK;
            }
            else if (state == STATE_PREFERENCE) { 
                indexPref = (indexPref+1)%3; 
                snd = SND_CLICK; 
            }        
        }
        // ... down
        if (key_down) {
            if (state == STATE_SIZE) { 
                indexSize = indexSize>0 ? indexSize-1 : 2;
                snd = SND_CLICK;
            }
            else if (state == STATE_PREFERENCE) { 
                indexPref = indexPref>0 ? indexPref-1 : 2; 
                snd = SND_CLICK; 
            }    
        }
    }
    
    // Handle A button
    if (key_a) {
        // Reset running clock
        if (resetState) {
            resetState = false;
            state = STATE_PREFERENCE; // fall through to PREPARE below
        }

        // Select option
        if (state == STATE_OPTIONS) {
            if (cursorY==3) { alarmLed = !alarmLed; EEPROM.put(STORE_ALARMLED, alarmLed); }
            else if (cursorY==2) { alarmTime = (alarmTime+1)%4; EEPROM.put(STORE_ALARMTIME, alarmTime); }
            else if (cursorY==1) { alarmVolume = (alarmVolume+1)%3; EEPROM.put(STORE_ALARMVOLUME, alarmVolume); }
            else if (cursorY==0) { alarmTune = (alarmTune+1)%4; playAlarm(); EEPROM.put(STORE_ALARMTUNE, alarmTune); }
            if (cursorY!=0) snd = SND_SELECT; // don't play when testing tune
        }   
        // Toggle edit mode
        else if (state == STATE_SETTIMES) {
            editMode = !editMode;
            if (editMode) editValue = timeTable[2-cursorX][2-cursorY];
            else {
                // Save value on leaving edit mode
                timeTable[2-cursorX][2-cursorY] = editValue;
                EEPROM.put(STORE_TIMETABLE+((2-cursorX)*3 + (2-cursorY))*2, editValue);
            }
            snd = SND_SELECT;
        }          
        // Stop alarm
        else if (state == STATE_DONE) {
            resetState = false;
            state = STATE_END;
            sound.noTone();
            ardu.digitalWriteRGB(RED_LED, RGB_OFF);
            setBlankMode(); 
            snd = SND_SELECT;
        }
        // Return for new egg
        else if (state == STATE_END) {
            state = STATE_SIZE;
            setBlankMode(); 
            snd = SND_SELECT;
        }    
        // Accept choice, next screen
        else if (state > STATE_SPLASH && state < STATE_RUN) {
            state = (e_state)(state+1);
            // Prepare timer
            if (state == STATE_PREPARE) {
                clock.begin = 0;
                clock.timer = timeTable[indexSize][indexPref]; 
            }   
            // Start running
            if (state == STATE_RUN) {
                clock.now = millis(); 
                clock.begin = clock.now-1;
                clock.elapsed = 0;
            }
            snd = SND_SELECT;  
            setBlankMode();  
        }
    }
    
    // Handle B button
    if (key_b) {
        // Return to splash from options
        if (state == STATE_OPTIONS) {
            state = STATE_SPLASH;
            setBlankMode(true, SPLASH_DURATION);
            snd = SND_BACK;
        }
        // Toggle time table edit mode
        else if (state == STATE_SETTIMES) {
            if (editMode) {
                editMode = false;
            }
            else {
                state = STATE_OPTIONS;
                cursorX = 0; cursorY = 3;
                setBlankMode();
            }
            snd = SND_BACK;
        }
        // Toggle reset mode during run
        else if (state == STATE_RUN) { 
            resetState = !resetState; 
            snd = resetState ? SND_BACK : SND_CLICK; 
        }
        // Previous screen
        else if (state > STATE_SIZE && state < STATE_DONE) { 
            state = (e_state)(state-1); 
            snd = SND_BACK;
            setBlankMode();  
        }
    }
    // Play sound if any was set
    playSound(snd);
}


//----------------------------------------------------------------------------
// Boot code
//----------------------------------------------------------------------------

void setup() 
{
    ardu.begin();
    ardu.setFrameRate(30);
    ardu.audio.on();
    sound.volumeMode(VOLUME_ALWAYS_NORMAL);

    // Read/init EEPROM store
    if (EEPROM.read(STORE_INIT) == STORE_COOKIE) {    
        EEPROM.get(STORE_ALARMLED, alarmLed);
        EEPROM.get(STORE_ALARMVOLUME, alarmVolume);
        EEPROM.get(STORE_ALARMTUNE, alarmTune);
        EEPROM.get(STORE_ALARMTIME, alarmTime);
        EEPROM.get(STORE_TIMETABLE, timeTable);
    }
    else {
        EEPROM.put(STORE_INIT, STORE_COOKIE);
        EEPROM.put(STORE_ALARMLED, alarmLed);
        EEPROM.put(STORE_ALARMVOLUME, alarmVolume);
        EEPROM.put(STORE_ALARMTUNE, alarmTune);
        EEPROM.put(STORE_ALARMTIME, alarmTime);
        EEPROM.put(STORE_TIMETABLE, timeTable);
    } 
}


void loop() 
{
    if (ardu.nextFrame()) {
        ardu.pollButtons();
        updateClock();
        handleInput();
        handleTimeout();
        drawFrame();
        ardu.display();
        
        // Flash LED
        if (alarmLed && state == STATE_DONE) {
            ardu.digitalWriteRGB(RED_LED, ardu.frameCount%LED_FLASH_RATE < LED_FLASH_RATE/2 ? RGB_ON : RGB_OFF);
        } 
    }    
}
