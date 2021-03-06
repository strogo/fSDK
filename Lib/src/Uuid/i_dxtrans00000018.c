// Created file "Lib\src\Uuid\i_dxtrans"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IObjectWithBehaviorSite, 0xb03dcbe3, 0xdddb, 0x48cc, 0x99, 0x61, 0x74, 0xdc, 0xa6, 0x93, 0xbf, 0xb2);

