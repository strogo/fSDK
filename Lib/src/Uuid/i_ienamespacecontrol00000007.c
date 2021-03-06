// Created file "Lib\src\Uuid\i_ienamespacecontrol"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IShellFolderSearchable, 0x4e1ae66c, 0x204b, 0x11d2, 0x8d, 0xb3, 0x00, 0x00, 0xf8, 0x7a, 0x55, 0x6c);

