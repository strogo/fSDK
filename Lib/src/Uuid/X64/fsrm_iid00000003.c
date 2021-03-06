// Created file "Lib\src\Uuid\X64\fsrm_iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFsrmObject, 0x22bcef93, 0x4a3f, 0x4183, 0x89, 0xf9, 0x2f, 0x8b, 0x8a, 0x62, 0x8a, 0xee);

DEFINE_GUID(IID_IFsrmCollection, 0xf76fbf3b, 0x8ddd, 0x4b42, 0xb0, 0x5a, 0xcb, 0x1c, 0x3f, 0xf1, 0xfe, 0xe8);

DEFINE_GUID(IID_IFsrmMutableCollection, 0x1bb617b8, 0x3886, 0x49dc, 0xaf, 0x82, 0xa6, 0xc9, 0x0f, 0xa3, 0x5d, 0xda);

DEFINE_GUID(IID_IFsrmCommittableCollection, 0x96deb3b5, 0x8b91, 0x4a2a, 0x9d, 0x93, 0x80, 0xa3, 0x5d, 0x8a, 0xa8, 0x47);

DEFINE_GUID(IID_IFsrmAction, 0x6cd6408a, 0xae60, 0x463b, 0x9e, 0xf1, 0xe1, 0x17, 0x53, 0x4d, 0x69, 0xdc);

DEFINE_GUID(IID_IFsrmActionEmail, 0xd646567d, 0x26ae, 0x4caa, 0x9f, 0x84, 0x4e, 0x0a, 0xad, 0x20, 0x7f, 0xca);

DEFINE_GUID(IID_IFsrmActionEmail2, 0x8276702f, 0x2532, 0x4839, 0x89, 0xbf, 0x48, 0x72, 0x60, 0x9a, 0x2e, 0xa4);

DEFINE_GUID(IID_IFsrmActionReport, 0x2dbe63c4, 0xb340, 0x48a0, 0xa5, 0xb0, 0x15, 0x8e, 0x07, 0xfc, 0x56, 0x7e);

DEFINE_GUID(IID_IFsrmActionEventLog, 0x4c8f96c3, 0x5d94, 0x4f37, 0xa4, 0xf4, 0xf5, 0x6a, 0xb4, 0x63, 0x54, 0x6f);

DEFINE_GUID(IID_IFsrmActionCommand, 0x12937789, 0xe247, 0x4917, 0x9c, 0x20, 0xf3, 0xee, 0x9c, 0x7e, 0xe7, 0x83);

DEFINE_GUID(IID_IFsrmSetting, 0xf411d4fd, 0x14be, 0x4260, 0x8c, 0x40, 0x03, 0xb7, 0xc9, 0x5e, 0x60, 0x8a);

DEFINE_GUID(IID_IFsrmPathMapper, 0x6f4dbfff, 0x6920, 0x4821, 0xa6, 0xc3, 0xb7, 0xe9, 0x4c, 0x1f, 0xd6, 0x0c);

DEFINE_GUID(IID_IFsrmExportImport, 0xefcb0ab1, 0x16c4, 0x4a79, 0x81, 0x2c, 0x72, 0x56, 0x14, 0xc3, 0x30, 0x6b);

DEFINE_GUID(IID_IFsrmDerivedObjectsResult, 0x39322a2d, 0x38ee, 0x4d0d, 0x80, 0x95, 0x42, 0x1a, 0x80, 0x84, 0x9a, 0x82);

