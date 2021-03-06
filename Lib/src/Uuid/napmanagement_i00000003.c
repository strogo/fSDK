// Created file "Lib\src\Uuid\napmanagement_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapClientManagement, 0x432a1da5, 0x3888, 0x4b9a, 0xa7, 0x34, 0xcf, 0xf1, 0xe4, 0x48, 0xc5, 0xb9);

