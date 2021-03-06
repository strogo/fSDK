// Created file "Lib\src\Uuid\X64\upnpp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUPnPDeviceHostICSSupport, 0x3ffc5ae5, 0xa66b, 0x499c, 0xa1, 0x80, 0xc7, 0x39, 0x3d, 0xb6, 0xba, 0x8d);

