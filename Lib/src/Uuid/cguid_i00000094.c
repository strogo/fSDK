// Created file "Lib\src\Uuid\cguid_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DEVCLASS_PROCESSOR, 0x50127dc3, 0x0f36, 0x415e, 0xa6, 0xcc, 0x4c, 0xb3, 0xbe, 0x91, 0x0b, 0x65);

