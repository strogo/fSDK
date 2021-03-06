// Created file "Lib\src\Uuid\i_dwnnot"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDownloadNotify, 0xcaeb5d28, 0xae4c, 0x11d1, 0xba, 0x40, 0x00, 0xc0, 0x4f, 0xb9, 0x2d, 0x79);

