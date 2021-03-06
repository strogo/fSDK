// Created file "Lib\src\MMC\ndmgriid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_ComCacheCleanup, 0xf7a4f1da, 0x96c3, 0x4bcf, 0xbe, 0xb3, 0x1d, 0x9f, 0xfd, 0xe8, 0x9e, 0xe9);

