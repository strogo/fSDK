// Created file "Lib\src\Uuid\i_iesettingsbroker"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISettingsBroker, 0xea77e0bc, 0x3ce7, 0x4cc1, 0x92, 0x8f, 0x6f, 0x50, 0xa0, 0xce, 0x54, 0x87);

