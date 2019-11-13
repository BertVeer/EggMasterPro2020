//----------------------------------------------------------------------------
// EGG MASTER PRO 2020 
// (c) 2019 Bert vt Veer
//----------------------------------------------------------------------------

typedef const uint8_t PROGMEM t_bitmap;
typedef const uint8_t* t_bitmaplist;
typedef const uint16_t PROGMEM t_sound;


//----------------------------------------------------------------------------
// Hocus Pocus logo
//----------------------------------------------------------------------------

t_bitmap img_hocuspocus[] = {
    23, 29,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0xbc, 0xc0, 0x80, 0x80, 0x80, 0xc0, 0xbc, 0x1e, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x40, 0x40, 0x40, 0x30, 0x30, 0x47, 0x49, 
    0x5f, 0x57, 0x47, 0x57, 0x5f, 0x49, 0x47, 0x30, 0x30, 0x40, 0x40, 0x40, 0x40, 0xc0, 0xff, 0x00,
    0xdf, 0x44, 0xdf, 0x00, 0xdf, 0x51, 0xdf, 0x00, 0xdf, 0x51, 0x51, 0x00, 0xdf, 0x10, 0xdf, 0x00,
    0xd7, 0x55, 0x5d, 0x00, 0xff, 0x1f, 0x10, 0x17, 0x11, 0x11, 0x10, 0x17, 0x14, 0x17, 0x10, 0x17, 
    0x14, 0x14, 0x10, 0x17, 0x14, 0x17, 0x10, 0x15, 0x15, 0x17, 0x10, 0x1f
};

//----------------------------------------------------------------------------
// Large eggs
//----------------------------------------------------------------------------

t_bitmap img_egg0[] = {
    35, 45,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x18, 0x0c, 0x0c, 0x06, 0x06, 0x03, 0x03, 
    0x03, 0x03, 0x03, 0x03, 0x03, 0x06, 0x06, 0x0c, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x7c, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x0f, 0x7c, 0xf0, 0x80, 0x00, 0xfc, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xa0, 0x08, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x08, 0xa0, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x08, 0x02, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 0x00, 0x03, 0x0f, 0x3c, 
    0x70, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x70, 0x3c, 0x0f, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x0c, 0x0c, 0x0c, 0x18, 0x18, 0x18, 0x18, 
    0x18, 0x18, 0x18, 0x18, 0x18, 0x0c, 0x0c, 0x0c, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00
};

t_bitmap img_egg1[] = {
    35, 45,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x98, 0x4c, 0xac, 0x56, 0x26, 0x13, 0x0b,
    0x13, 0x0b, 0x13, 0x0b, 0x13, 0x26, 0x56, 0xac, 0x4c, 0x98, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x7c, 0x0f, 0xa3, 0x54, 0x0a, 0x05, 0x02, 0x01, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x05, 0x0a, 0x54, 
    0xa3, 0x0f, 0x7c, 0xf0, 0x80, 0x00, 0xfc, 0xff, 0x03, 0xa8, 0x55, 0x02, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xa0, 0x08, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x08, 0xa0, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x02, 0x55, 0xa8, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0x80, 0x2a, 0x55, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x08, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x55, 0x2a, 0x80, 0xff, 0x7f, 0x00, 0x03, 0x0f, 0x3c,
    0x71, 0xca, 0x94, 0x28, 0x50, 0xa0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x80, 0x40, 0xa0, 0x50, 0x28, 0x94, 0xca, 0x71, 0x3c, 0x0f, 0x03, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x0d, 0x0c, 0x0d, 0x1a, 0x19, 0x1a, 0x19,
    0x1a, 0x19, 0x1a, 0x19, 0x1a, 0x0d, 0x0c, 0x0d, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00
};

t_bitmap img_egg2[] = {
    35, 45,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x98, 0x4c, 0xac, 0x56, 0xa6, 0x53, 0xab,
    0x53, 0xab, 0x53, 0xab, 0x53, 0xa6, 0x56, 0xac, 0x4c, 0x98, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x7c, 0x0f, 0xa3, 0x54, 0xaa, 0x55, 0x0a, 0x05, 0x02, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x05, 0x0a, 0x55, 0xaa, 0x54,
    0xa3, 0x0f, 0x7c, 0xf0, 0x80, 0x00, 0xfc, 0xff, 0x03, 0xa8, 0x55, 0xaa, 0x55, 0x02, 0x00, 0x00, 
    0x00, 0x00, 0xa0, 0x08, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x08, 0xa0, 0x00, 0x00, 0x00, 
    0x00, 0x02, 0x55, 0xaa, 0x55, 0xa8, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0x80, 0x2a, 0x55, 0xaa, 0x55,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x08, 0x02, 
    0x00, 0x00, 0x00, 0x00, 0x80, 0x55, 0xaa, 0x55, 0x2a, 0x80, 0xff, 0x7f, 0x00, 0x03, 0x0f, 0x3c, 
    0x71, 0xca, 0x95, 0x2a, 0x54, 0xa8, 0x50, 0xa0, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 
    0x40, 0x80, 0x40, 0xa0, 0x50, 0xa8, 0x54, 0x2a, 0x95, 0xca, 0x71, 0x3c, 0x0f, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x0d, 0x0c, 0x0d, 0x1a, 0x19, 0x1a, 0x19,
    0x1a, 0x19, 0x1a, 0x19, 0x1a, 0x0d, 0x0c, 0x0d, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00
};

t_bitmap img_egg3[] = {
    35, 45,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x98, 0x4c, 0xac, 0x56, 0xa6, 0x53, 0xab, 
    0x53, 0xab, 0x53, 0xab, 0x53, 0xa6, 0x56, 0xac, 0x4c, 0x98, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x7c, 0x0f, 0xa3, 0x54, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x15,
    0x2a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x2a, 0x15, 0x2a, 0x55, 0xaa, 0x55, 0xaa, 0x54, 
    0xa3, 0x0f, 0x7c, 0xf0, 0x80, 0x00, 0xfc, 0xff, 0x03, 0xa8, 0x55, 0xaa, 0x55, 0xaa, 0x05, 0x00, 
    0x00, 0x00, 0xa0, 0x08, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x08, 0xa0, 0x00, 0x00, 0x00, 
    0x05, 0xaa, 0x55, 0xaa, 0x55, 0xa8, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0x80, 0x2a, 0x55, 0xaa, 0x55,
    0xaa, 0x50, 0x80, 0x00, 0x00, 0x02, 0x08, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x08, 0x02,
    0x00, 0x00, 0x80, 0x50, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x80, 0xff, 0x7f, 0x00, 0x03, 0x0f, 0x3c,
    0x71, 0xca, 0x95, 0x2a, 0x55, 0xaa, 0x55, 0xaa, 0x54, 0xaa, 0x54, 0xa8, 0x54, 0xa8, 0x54, 0xa8, 
    0x54, 0xaa, 0x54, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x95, 0xca, 0x71, 0x3c, 0x0f, 0x03, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x0d, 0x0c, 0x0d, 0x1a, 0x19, 0x1a, 0x19,
    0x1a, 0x19, 0x1a, 0x19, 0x1a, 0x0d, 0x0c, 0x0d, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00
};

t_bitmap img_egg4[] = {
    35, 45,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x98, 0x4c, 0xac, 0x56, 0xa6, 0x53, 0xab, 
    0x53, 0xab, 0x53, 0xab, 0x53, 0xa6, 0x56, 0xac, 0x4c, 0x98, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x7c, 0x0f, 0xa3, 0x54, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 
    0xaa, 0x55, 0x2a, 0x55, 0x2a, 0x55, 0x2a, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x54, 
    0xa3, 0x0f, 0x7c, 0xf0, 0x80, 0x00, 0xfc, 0xff, 0x03, 0xa8, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 
    0x05, 0x02, 0xa1, 0x08, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x08, 0xa1, 0x02, 0x05, 0xaa,
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xa8, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0x80, 0x2a, 0x55, 0xaa, 0x55, 
    0xaa, 0x55, 0xaa, 0x50, 0xa0, 0x42, 0x88, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x88, 0x42, 
    0xa0, 0x50, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x80, 0xff, 0x7f, 0x00, 0x03, 0x0f, 0x3c, 
    0x71, 0xca, 0x95, 0x2a, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa,
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x95, 0xca, 0x71, 0x3c, 0x0f, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x0d, 0x0c, 0x0d, 0x1a, 0x19, 0x1a, 0x19, 
    0x1a, 0x19, 0x1a, 0x19, 0x1a, 0x0d, 0x0c, 0x0d, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00
};

t_bitmap img_egg5[] = {
    35, 45,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x98, 0x4c, 0xac, 0x56, 0xa6, 0x53, 0xab, 
    0x53, 0xab, 0x53, 0xab, 0x53, 0xa6, 0x56, 0xac, 0x4c, 0x98, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x7c, 0x0f, 0xa3, 0x54, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x54, 
    0xa3, 0x0f, 0x7c, 0xf0, 0x80, 0x00, 0xfc, 0xff, 0x03, 0xa8, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa,
    0x55, 0xaa, 0xf5, 0x0a, 0x05, 0x02, 0x03, 0x02, 0x03, 0x02, 0x05, 0x0a, 0xf5, 0xaa, 0x55, 0xaa, 
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xa8, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0x80, 0x2a, 0x55, 0xaa, 0x55, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x57, 0xa8, 0x50, 0xa0, 0x60, 0xa0, 0x60, 0xa0, 0x50, 0xa8, 0x57, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x80, 0xff, 0x7f, 0x00, 0x03, 0x0f, 0x3c, 
    0x71, 0xca, 0x95, 0x2a, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa,
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x95, 0xca, 0x71, 0x3c, 0x0f, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x0d, 0x0c, 0x0d, 0x1a, 0x19, 0x1a, 0x19,
    0x1a, 0x19, 0x1a, 0x19, 0x1a, 0x0d, 0x0c, 0x0d, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00
};

t_bitmap img_egg6[] = {
    35, 45,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x98, 0x4c, 0xac, 0x56, 0xa6, 0x53, 0xab,
    0x53, 0xab, 0x53, 0xab, 0x53, 0xa6, 0x56, 0xac, 0x4c, 0x98, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x7c, 0x0f, 0xa3, 0x54, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55,
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x54,
    0xa3, 0x0f, 0x7c, 0xf0, 0x80, 0x00, 0xfc, 0xff, 0x03, 0xa8, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa,
    0x55, 0xaa, 0xf5, 0xfa, 0x1d, 0x0e, 0x07, 0x06, 0x07, 0x0e, 0x1d, 0xfa, 0xf5, 0xaa, 0x55, 0xaa,
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xa8, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0x80, 0x2a, 0x55, 0xaa, 0x55, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x57, 0xaf, 0x5c, 0xb8, 0x70, 0xb0, 0x70, 0xb8, 0x5c, 0xaf, 0x57, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x80, 0xff, 0x7f, 0x00, 0x03, 0x0f, 0x3c, 
    0x71, 0xca, 0x95, 0x2a, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x95, 0xca, 0x71, 0x3c, 0x0f, 0x03, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x0d, 0x0c, 0x0d, 0x1a, 0x19, 0x1a, 0x19,
    0x1a, 0x19, 0x1a, 0x19, 0x1a, 0x0d, 0x0c, 0x0d, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00
};

t_bitmap img_egg7[] = {
    35, 45,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x98, 0x4c, 0xac, 0x56, 0xa6, 0x53, 0xab,
    0x53, 0xab, 0x53, 0xab, 0x53, 0xa6, 0x56, 0xac, 0x4c, 0x98, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x7c, 0x0f, 0xa3, 0x54, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x54, 
    0xa3, 0x0f, 0x7c, 0xf0, 0x80, 0x00, 0xfc, 0xff, 0x03, 0xa8, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa,
    0x55, 0xaa, 0xf5, 0xfa, 0xfd, 0x1e, 0x0f, 0x0e, 0x0f, 0x1e, 0xfd, 0xfa, 0xf5, 0xaa, 0x55, 0xaa, 
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xa8, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0x80, 0x2a, 0x55, 0xaa, 0x55,
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x57, 0xaf, 0x5f, 0xbc, 0x78, 0xb8, 0x78, 0xbc, 0x5f, 0xaf, 0x57, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x80, 0xff, 0x7f, 0x00, 0x03, 0x0f, 0x3c,
    0x71, 0xca, 0x95, 0x2a, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa,
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x95, 0xca, 0x71, 0x3c, 0x0f, 0x03, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x0d, 0x0c, 0x0d, 0x1a, 0x19, 0x1a, 0x19, 
    0x1a, 0x19, 0x1a, 0x19, 0x1a, 0x0d, 0x0c, 0x0d, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00
};

t_bitmap img_egg8[] = {
    35, 45,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x98, 0x4c, 0xac, 0x56, 0xa6, 0x53, 0xab,
    0x53, 0xab, 0x53, 0xab, 0x53, 0xa6, 0x56, 0xac, 0x4c, 0x98, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x7c, 0x0f, 0xa3, 0x54, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x54,
    0xa3, 0x0f, 0x7c, 0xf0, 0x80, 0x00, 0xfc, 0xff, 0x03, 0xa8, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 
    0x55, 0xaa, 0xf5, 0xfa, 0xfd, 0xfe, 0x3f, 0x3e, 0x3f, 0xfe, 0xfd, 0xfa, 0xf5, 0xaa, 0x55, 0xaa, 
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xa8, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0x80, 0x2a, 0x55, 0xaa, 0x55, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x57, 0xaf, 0x5f, 0xbf, 0x7e, 0xbe, 0x7e, 0xbf, 0x5f, 0xaf, 0x57, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x80, 0xff, 0x7f, 0x00, 0x03, 0x0f, 0x3c, 
    0x71, 0xca, 0x95, 0x2a, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x95, 0xca, 0x71, 0x3c, 0x0f, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x0d, 0x0c, 0x0d, 0x1a, 0x19, 0x1a, 0x19, 
    0x1a, 0x19, 0x1a, 0x19, 0x1a, 0x0d, 0x0c, 0x0d, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00
};

t_bitmap img_egg9[] = {
    35, 45,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x98, 0x4c, 0xac, 0x56, 0xa6, 0x53, 0xab, 
    0x53, 0xab, 0x53, 0xab, 0x53, 0xa6, 0x56, 0xac, 0x4c, 0x98, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x7c, 0x0f, 0xa3, 0x54, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x54, 
    0xa3, 0x0f, 0x7c, 0xf0, 0x80, 0x00, 0xfc, 0xff, 0x03, 0xa8, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 
    0x55, 0xaa, 0xf5, 0xfa, 0xfd, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xfd, 0xfa, 0xf5, 0xaa, 0x55, 0xaa, 
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xa8, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0x80, 0x2a, 0x55, 0xaa, 0x55, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x57, 0xaf, 0x5f, 0xbf, 0x7f, 0xbf, 0x7f, 0xbf, 0x5f, 0xaf, 0x57, 
    0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x80, 0xff, 0x7f, 0x00, 0x03, 0x0f, 0x3c, 
    0x71, 0xca, 0x95, 0x2a, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 
    0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0x2a, 0x95, 0xca, 0x71, 0x3c, 0x0f, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x0d, 0x0c, 0x0d, 0x1a, 0x19, 0x1a, 0x19,
    0x1a, 0x19, 0x1a, 0x19, 0x1a, 0x0d, 0x0c, 0x0d, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00
};

t_bitmaplist egg_large[] = {
    img_egg0, img_egg1, img_egg2, img_egg3, img_egg4, img_egg5, img_egg6, img_egg6, img_egg7, 
    img_egg8, img_egg9
};


//----------------------------------------------------------------------------
// Egg sizes
//----------------------------------------------------------------------------

t_bitmap img_size0[] = {
    25, 32,
    0x00, 0x00, 0x00, 0x80, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
    0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0x80, 0x00, 0x00, 0x00, 0xc0, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
    0xf8, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x01, 0x07, 0x0f, 0x1f, 
    0x3f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x6f, 0x77, 0x77, 0x3b, 0x1e, 
    0x0f, 0x07, 0x01, 0x00  
};

t_bitmap img_size1[] = {
    25, 32,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 
    0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xf8, 0xfe, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 
    0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 
    0x1f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xdf, 0x6f, 0x77, 0x3f, 0x1f, 
    0x0f, 0x03, 0x00, 0x00
};

t_bitmap img_size2[] = {
    25, 32,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf0, 
    0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 
    0x1f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xdf, 0x6f, 0x7f, 0x3f, 0x1f, 0x0f, 
    0x03, 0x00, 0x00, 0x00
};

t_bitmaplist egg_sizes[] = {
    img_size0, img_size1, img_size2
};

t_bitmap img_measure[] = {
  5, 27,
    0x01, 0x01, 0x55, 0x01, 0x01, 0x00, 0x01, 0x55, 0x00, 0x00, 0x00, 0x04, 0x55, 0x00, 0x00, 
    0x04, 0x04, 0x05, 0x04, 0x04  
};


//----------------------------------------------------------------------------
// Egg preferences
//----------------------------------------------------------------------------

t_bitmap img_pref0[] = {
    25, 32,
    0x00, 0x00, 0x00, 0xc0, 0x20, 0x10, 0x08, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02,
    0x02, 0x04, 0x08, 0x10, 0x20, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x03, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
    0x1c, 0xe0, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 
    0x3f, 0x1f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x01, 0x06, 0x08, 0x10, 
    0x20, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x10, 
    0x08, 0x06, 0x01, 0x00
};

t_bitmap img_pref1[] = {
    25, 32,
    0x00, 0x00, 0x00, 0xc0, 0x20, 0x10, 0x08, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 
    0x02, 0x04, 0x08, 0x10, 0x20, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x03, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x80, 0x40, 0xa0, 0x40, 0xa0, 0x40, 0xa0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
    0x1c, 0xe0, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x15, 0x2a, 0x17, 0x2f, 0x17, 
    0x2a, 0x15, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x01, 0x06, 0x08, 0x10, 
    0x20, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x10,
    0x08, 0x06, 0x01, 0x00
};

t_bitmap img_pref2[] = {
    25, 32,
    0x00, 0x00, 0x00, 0xc0, 0x20, 0x10, 0x08, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 
    0x02, 0x04, 0x08, 0x10, 0x20, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x03, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
    0x1c, 0xe0, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x22, 0x08, 0x22, 0x08, 
    0x22, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x01, 0x06, 0x08, 0x10,
    0x20, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x10, 
    0x08, 0x06, 0x01, 0x00   
};

t_bitmaplist egg_prefs[] = {
    img_pref0, img_pref1, img_pref2
};


//----------------------------------------------------------------------------
// Icons boil / rinse
//----------------------------------------------------------------------------

t_bitmap img_boil[] = {
    35, 32,
    0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0xcf,
    0xff, 0xff, 0x37, 0xcf, 0xff, 0xff, 0x37, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xfe, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xaf, 0x57, 0xaf, 
    0x57, 0xaf, 0x57, 0xaf, 0x57, 0xaf, 0x57, 0xaf, 0x57, 0xaf, 0x57, 0xaf, 0xff, 0x01, 0x00, 0xfe, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 
    0xf1, 0xf3, 0xf2, 0xf3, 0xf2, 0xf3, 0xf2, 0xf3, 0xf2, 0xf3, 0xf2, 0x73, 0xf2, 0xf3, 0xf1, 0xf8, 
    0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xf6, 0xf0, 0xf7, 0xff, 0xf0, 0xf6, 0xf0, 0xff, 0xf0, 0xf6, 0xf0, 0xff, 0xfe, 0xff, 
    0xf0, 0xf6, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f    
};

t_bitmap img_rinse[] = {
    35, 32,
    0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0x0f, 
    0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 
    0xff, 0xfe, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
    0xf8, 0x48, 0xf8, 0x48, 0xf8, 0x48, 0xf8, 0xf8, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf2, 0xff, 0xf2, 0xff, 0xf2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0xff, 0xf0, 0xf6, 0xf0, 0xff, 0xff, 0xf4, 0xf2, 0xff, 0xf0, 0xf4, 0xff, 
    0xf0, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f 
};

t_bitmap img_finish[] = {
    27, 29,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3c, 0x03, 0xf0, 0x8c, 0x10, 0x10, 0xe0, 0xe0, 0xc0, 0xc0, 
    0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3c, 
    0x03, 0xe0, 0x9e, 0x07, 0x0f, 0xef, 0xe1, 0xc1, 0xc3, 0x63, 0x79, 0xf8, 0xf0, 0x11, 0x1e, 0x3e, 
    0x3c, 0x9c, 0x88, 0x10, 0xd0, 0x20, 0x00, 0xc0, 0x3c, 0x03, 0x08, 0x0e, 0x0f, 0x1f, 0x2f, 0x21,
    0x41, 0x43, 0xe3, 0xf9, 0xf8, 0xf0, 0x10, 0x1e, 0x3e, 0x3c, 0x9c, 0x86, 0x07, 0xef, 0x1f, 0x01, 
    0x00, 0x1c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
    0x02, 0x02, 0x04, 0x04, 0x0e, 0x0f, 0x1f, 0x07, 0x01, 0x00, 0x00, 0x00 
};

//----------------------------------------------------------------------------
// Titles
//----------------------------------------------------------------------------

t_bitmap img_title_size[] = { 
    36, 6,
    0x3f, 0x3f, 0x25, 0x21, 0x00, 0x1e, 0x3f, 0x21, 0x29, 0x38, 0x00, 0x1e, 0x3f, 0x21, 0x29, 0x38, 
    0x00, 0x00, 0x00, 0x26, 0x2f, 0x3d, 0x19, 0x00, 0x3f, 0x3f, 0x00, 0x39, 0x3d, 0x27, 0x23, 0x00, 
    0x3f, 0x3f, 0x25, 0x21
};

t_bitmap img_title_prefs[] = { 
    53, 6,
    0x3f, 0x3f, 0x09, 0x0f, 0x06, 0x00, 0x3f, 0x3f, 0x09, 0x3f, 0x26, 0x00, 0x3f, 0x3f, 0x25, 0x21, 
    0x00, 0x3f, 0x3f, 0x05, 0x01, 0x00, 0x3f, 0x3f, 0x25, 0x21, 0x00, 0x3f, 0x3f, 0x09, 0x3f, 0x26,
    0x00, 0x3f, 0x3f, 0x25, 0x21, 0x00, 0x3f, 0x3f, 0x01, 0x3f, 0x3e, 0x00, 0x1e, 0x3f, 0x21, 0x21, 
    0x00, 0x3f, 0x3f, 0x25, 0x21
};

t_bitmap img_title_options[] =
{
    36, 6,
    0x1e, 0x3f, 0x21, 0x3f, 0x1e, 0x00, 0x3f, 0x3f, 0x09, 0x0f, 0x06, 0x00, 0x01, 0x3f, 0x3f, 0x01,
    0x00, 0x3f, 0x3f, 0x00, 0x1e, 0x3f, 0x21, 0x3f, 0x1e, 0x00, 0x3f, 0x3f, 0x01, 0x3f, 0x3e, 0x00, 
    0x26, 0x2f, 0x3d, 0x19
};

//----------------------------------------------------------------------------
// Text labels
//----------------------------------------------------------------------------

t_bitmap text_boiled[] = {
    24, 5,
    0x1f, 0x15, 0x17, 0x1c, 0x00, 0x1f, 0x11, 0x11, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x10, 0x10, 0x00, 
    0x1f, 0x15, 0x11, 0x00, 0x1f, 0x11, 0x11, 0x0e
};

t_bitmap text_done[] = { 
    27, 5,
    0x00, 0x00, 0x00, 0x00, 0x1f, 0x11, 0x11, 0x0e, 0x00, 0x1f, 0x11, 0x11, 0x1f, 0x00, 0x1f, 0x01, 
    0x01, 0x1f, 0x00, 0x1f, 0x15, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00
};

t_bitmap text_egg[] = { 
    13, 5,
    0x1f, 0x15, 0x11, 0x00, 0x1f, 0x11, 0x15, 0x1c, 0x00, 0x1f, 0x11, 0x15, 0x1c 
};

t_bitmap text_hard[] = { 
    27, 5,
    0x00, 0x00, 0x00, 0x00, 0x1f, 0x04, 0x04, 0x1f, 0x00, 0x1f, 0x05, 0x05, 0x1f, 0x00, 0x1f, 0x05, 
    0x1d, 0x17, 0x00, 0x1f, 0x11, 0x11, 0x0e, 0x00, 0x00, 0x00, 0x00
};

t_bitmap text_large[] = { 
    27, 5,
    0x00, 0x00, 0x1f, 0x10, 0x10, 0x00, 0x1f, 0x05, 0x05, 0x1f, 0x00, 0x1f, 0x05, 0x1d, 0x17, 0x00, 
    0x1f, 0x11, 0x15, 0x1d, 0x00, 0x1f, 0x15, 0x11, 0x00, 0x00, 0x00
};

t_bitmap text_medium[] = { 
    27, 5,
    0x1f, 0x01, 0x0f, 0x01, 0x1f, 0x00, 0x1f, 0x15, 0x11, 0x00, 0x1f, 0x11, 0x11, 0x0e, 0x00, 0x1f, 
    0x00, 0x1f, 0x10, 0x10, 0x1f, 0x00, 0x1f, 0x01, 0x1f, 0x01, 0x1f
};

t_bitmap text_small[] = { 
    27, 5,
    0x00, 0x00, 0x17, 0x15, 0x15, 0x1d, 0x00, 0x1f, 0x01, 0x1f, 0x01, 0x1f, 0x00, 0x1f, 0x05, 0x05, 
    0x1f, 0x00, 0x1f, 0x10, 0x10, 0x00, 0x1f, 0x10, 0x10, 0x00, 0x00
};

t_bitmap text_soft[] = { 
    27, 5,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x15, 0x15, 0x1d, 0x00, 0x1f, 0x11, 0x11, 0x1f, 0x00, 0x1f,
    0x05, 0x05, 0x00, 0x01, 0x1f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
};

t_bitmap text_start[] = { 
    27, 5,
    0x17, 0x15, 0x15, 0x1d, 0x00, 0x01, 0x01, 0x1f, 0x01, 0x01, 0x00, 0x1f, 0x05, 0x05, 0x1f, 0x00,
    0x1f, 0x05, 0x1d, 0x17, 0x00, 0x01, 0x01, 0x1f, 0x01, 0x01, 0x00
};

t_bitmap img_newegg[] = {
    37, 9,
    0x55, 0x00, 0x01, 0x00, 0x7d, 0x04, 0x05, 0x7c, 0x01, 0x7c, 0x55, 0x44, 0x01, 0x7c, 0x41, 0x78, 
    0x41, 0x7c, 0x01, 0x00, 0x7d, 0x54, 0x45, 0x00, 0x7d, 0x44, 0x55, 0x70, 0x01, 0x7c, 0x45, 0x54, 
    0x71, 0x00, 0x01, 0x00, 0x55, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
    0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01,
    0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01
};

t_bitmaplist menu_size[] = { text_large, text_medium, text_small };
t_bitmaplist menu_pref[] = { text_hard, text_medium, text_soft };
t_bitmaplist menu_start[] = { text_start };
t_bitmaplist menu_done[] = { text_done };


//----------------------------------------------------------------------------
// Large digits
//----------------------------------------------------------------------------

t_bitmap img_digit0[] = { 
    8, 21,
    0xfc, 0xfe, 0x07, 0x03, 0x03, 0x07, 0xfe, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
    0x07, 0x0f, 0x1c, 0x18, 0x18, 0x1c, 0x0f, 0x07
};

t_bitmap img_digit1[] = { 
    8, 21,
    0x00, 0x02, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
    0x00, 0x18, 0x18, 0x1f, 0x1f, 0x18, 0x18, 0x00
};

t_bitmap img_digit2[] = { 
    8, 21,
    0x3c, 0x3e, 0x07, 0x03, 0x03, 0x87, 0xfe, 0xfc, 0x80, 0xf0, 0x7c, 0x0e, 0x07, 0x03, 0x01, 0x00, 
    0x1f, 0x1f, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18
};

t_bitmap img_digit3[] = {
    8, 21,
    0x1c, 0x1e, 0x07, 0x03, 0x03, 0x87, 0xfe, 0xfc, 0x00, 0x00, 0x00, 0x06, 0x0f, 0x1f, 0xf9, 0xf0, 
    0x07, 0x0f, 0x1c, 0x18, 0x18, 0x1c, 0x0f, 0x07
};

t_bitmap img_digit4[] = { 
    8, 21,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x07, 0x0f, 0x0c, 0x0c, 0x0c, 0x0c, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f 
};

t_bitmap img_digit5[] = {
    8, 21,
    0xff, 0xff, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x0e, 0xfc, 0xf8, 
    0x07, 0x0f, 0x1c, 0x18, 0x18, 0x1c, 0x0f, 0x07
};

t_bitmap img_digit6[] = {
    8, 21,
    0xfc, 0xfe, 0x07, 0x03, 0x03, 0x07, 0x0e, 0x0c, 0xff, 0xff, 0x0e, 0x06, 0x06, 0x0e, 0xfc, 0xf8, 
    0x07, 0x0f, 0x1c, 0x18, 0x18, 0x1c, 0x0f, 0x07
};

t_bitmap img_digit7[] = {
    8, 21,
    0x03, 0x03, 0x03, 0x03, 0x03, 0xc3, 0xff, 0x7f, 0x00, 0x00, 0xf8, 0xfe, 0x0f, 0x03, 0x01, 0x00, 
    0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00
};

t_bitmap img_digit8[] = {
    8, 21,
    0xfc, 0xfe, 0x87, 0x03, 0x03, 0x87, 0xfe, 0xfc, 0xf0, 0xf9, 0x1f, 0x0f, 0x0f, 0x1f, 0xf9, 0xf0, 
    0x07, 0x0f, 0x1c, 0x18, 0x18, 0x1c, 0x0f, 0x07
};

t_bitmap img_digit9[] = {
    8, 21,
    0xfc, 0xfe, 0x07, 0x03, 0x03, 0x07, 0xfe, 0xfc, 0x01, 0x03, 0x07, 0x06, 0x06, 0x07, 0xff, 0xff, 
    0x06, 0x0e, 0x1c, 0x18, 0x18, 0x1c, 0x0f, 0x07
};

t_bitmap img_digit_dots[] = {
    2, 8,
    0xc3, 0xc3
};

t_bitmaplist digits[] = {
    img_digit0, img_digit1, img_digit2, img_digit3, img_digit4, img_digit5, img_digit6, img_digit7, 
    img_digit8, img_digit9, img_digit_dots
};


//----------------------------------------------------------------------------
// Selection rectangle
//----------------------------------------------------------------------------

t_bitmap img_selection[] = { 
    33, 9,
    0x55, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 
    0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 
    0x55, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
    0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
    0x00, 0x01  
};



//----------------------------------------------------------------------------
// Sounds
//----------------------------------------------------------------------------

t_sound sfx_click[] = { 
    550,2, 770,5, TONES_END 
};

t_sound sfx_select[] = { 
    550,10, 660,15, 770,20, TONES_END 
};

t_sound sfx_back[] = { 
    430,10, 530,5, 460,5, 560,5, 490,5, 590,10, TONES_END 
};

t_sound sfx_tictoc[] = {
    660,2, NOTE_REST,240, 300,5, TONES_END
};

t_sound sfx_alarm_beep[] = {
    770,150, NOTE_REST,100, 770,150, NOTE_REST,100, 770,150, NOTE_REST,800, TONES_REPEAT
};

t_sound sfx_alarm_ring[] = {
    1100,20, NOTE_REST,10, 1300,20, NOTE_REST,10, TONES_REPEAT
};

t_sound sfx_alarm_melody[] = {
    NOTE_C5,100, NOTE_REST,50, NOTE_C5,100, NOTE_REST,50, NOTE_C5,100, NOTE_REST,50,     NOTE_F5,400, NOTE_REST,100,  NOTE_A5,200, NOTE_REST,100,
    NOTE_C5,100, NOTE_REST,50, NOTE_C5,100, NOTE_REST,50, NOTE_C5,100, NOTE_REST,50,     NOTE_F5,400, NOTE_REST,100,  NOTE_A5,200, NOTE_REST,300,
    NOTE_F5,100, NOTE_REST,50, NOTE_F5,100, NOTE_REST,50,   NOTE_E5,100, NOTE_REST,50, NOTE_E5,100, NOTE_REST,50,   NOTE_D5,100, NOTE_REST,50, NOTE_D5,100, NOTE_REST,50, NOTE_C5,200,
    NOTE_REST,1000, TONES_REPEAT
};

t_sound sfx_alarm_siren[] = {
    660,15, 670,15, 680,15, 690,15, 700,15, 710,15, 720,15, 730,15, 740,15, 750,15, 760,15, 770,15, 780,15, 790,15,
    800,15, 810,15, 820,15, 810,15, 800,15, 790,15, 780,15, 770,15, 760,15, 750,15, 740,15, 730,15, 720,15, 710,15,
    700,15, 690,15, 680,15, 670,15, TONES_REPEAT
};
