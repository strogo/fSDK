// Created file "Lib\src\sensorsapi\sensorsapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SENSOR_TYPE_ENVIRONMENTAL_ATMOSPHERIC_PRESSURE, 0x0e903829, 0xff8a, 0x4a93, 0x97, 0xdf, 0x3d, 0xcb, 0xde, 0x40, 0x22, 0x88);

