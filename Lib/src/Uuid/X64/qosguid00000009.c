// Created file "Lib\src\Uuid\X64\qosguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_QOS_STATISTICS_BUFFER, 0xbb2c0980, 0xe900, 0x11d1, 0xb0, 0x7e, 0x00, 0x80, 0xc7, 0x13, 0x82, 0xbf);

