// Created file "Lib\src\ADSIid\guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IADsObjOptPrivate, 0x81cbb829, 0x1867, 0x11d2, 0x92, 0x20, 0x00, 0xc0, 0x4f, 0xb6, 0xd0, 0xd1);

