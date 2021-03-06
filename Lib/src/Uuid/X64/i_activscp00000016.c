// Created file "Lib\src\Uuid\X64\i_activscp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IActiveScriptProperty, 0x4954e0d0, 0xfbc7, 0x11d1, 0x84, 0x10, 0x00, 0x60, 0x08, 0xc3, 0xfb, 0xfc);

