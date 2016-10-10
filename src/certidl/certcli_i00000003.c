// Created file "Lib\src\certidl\certcli_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICertGetConfig, 0xc7ea09c0, 0xce17, 0x11d0, 0x88, 0x33, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);

DEFINE_GUID(IID_ICertConfig, 0x372fce34, 0x4324, 0x11d0, 0x88, 0x10, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);

DEFINE_GUID(IID_ICertConfig2, 0x7a18edde, 0x7e78, 0x4163, 0x8d, 0xed, 0x78, 0xe2, 0xc9, 0xce, 0xe9, 0x24);

DEFINE_GUID(IID_ICertRequest, 0x014e4840, 0x5523, 0x11d0, 0x88, 0x12, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);

DEFINE_GUID(IID_ICertRequest2, 0xa4772988, 0x4a85, 0x4fa9, 0x82, 0x4e, 0xb5, 0xcf, 0x5c, 0x16, 0x40, 0x5a);

DEFINE_GUID(IID_ICertRequest3, 0xafc8f92b, 0x33a2, 0x4861, 0xbf, 0x36, 0x29, 0x33, 0xb7, 0xcd, 0x67, 0xb3);

DEFINE_GUID(LIBID_CERTCLIENTLib, 0x372fce32, 0x4324, 0x11d0, 0x88, 0x10, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);

DEFINE_GUID(CLSID_CCertGetConfig, 0xc6cc49b0, 0xce17, 0x11d0, 0x88, 0x33, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);

DEFINE_GUID(CLSID_CCertConfig, 0x372fce38, 0x4324, 0x11d0, 0x88, 0x10, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);

DEFINE_GUID(CLSID_CCertRequest, 0x98aff3f0, 0x5524, 0x11d0, 0x88, 0x12, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);

DEFINE_GUID(CLSID_CCertServerPolicy, 0xaa000926, 0xffbe, 0x11cf, 0x88, 0x00, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);

DEFINE_GUID(CLSID_CCertServerExit, 0x4c4a5e40, 0x732c, 0x11d0, 0x88, 0x16, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);
