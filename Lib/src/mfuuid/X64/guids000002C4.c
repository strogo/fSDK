// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MF_TOPONODE_INTERNAL_WORKQUEUE_ID, 0x6d7e1a30, 0x106c, 0x43b9, 0xac, 0xce, 0xad, 0xba, 0x94, 0x3f, 0x42, 0xec);

