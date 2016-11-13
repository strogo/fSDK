// Created file "Lib\src\dxguid\X64\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DSFX_STANDARD_COMPRESSOR, 0xef011f79, 0x4000, 0x406d, 0x87, 0xaf, 0xbf, 0xfb, 0x3f, 0xc3, 0x9d, 0x57);

