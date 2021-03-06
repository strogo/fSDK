// Created file "Lib\src\Uuid\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IInitializeWithPropertyFactory, 0xcb6d939d, 0x7dfe, 0x4e1e, 0xaa, 0x08, 0xd3, 0xbe, 0xc4, 0xa0, 0xf1, 0xc6);

