// Created file "Lib\src\Uuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_EVENT_OPTION_IS_BROADCAST_EVENT, 0xb3d8dad7, 0xa361, 0x4b83, 0x8a, 0x48, 0x5b, 0x02, 0xce, 0x10, 0x71, 0x3b);

