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

DEFINE_GUID(ME_PRESENTATION_NEW_STREAM, 0x9a0d6e4f, 0x2760, 0x49f1, 0xb5, 0xba, 0xcd, 0x45, 0xb7, 0x0e, 0x1b, 0x79);

