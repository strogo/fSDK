// Created file "Lib\src\SearchSDK\X64\idl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUrlAccessor, 0x0b63e318, 0x9ccc, 0x11d0, 0xbc, 0xdb, 0x00, 0x80, 0x5f, 0xcc, 0xce, 0x04);

DEFINE_GUID(IID_IUrlAccessor2, 0xc7310734, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x4f);

DEFINE_GUID(IID_IUrlAccessor3, 0x6fbc7005, 0x0455, 0x4874, 0xb8, 0xff, 0x74, 0x39, 0x45, 0x02, 0x41, 0xa3);

DEFINE_GUID(IID_IUrlAccessor4, 0x5cc51041, 0xc8d2, 0x41d7, 0xbc, 0xa3, 0x9e, 0x9e, 0x28, 0x62, 0x97, 0xdc);

DEFINE_GUID(IID_IOpLockStatus, 0xc731065d, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x4f);

DEFINE_GUID(IID_ISearchProtocolThreadContext, 0xc73106e1, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x4f);

DEFINE_GUID(IID_ISearchProtocol, 0xc73106ba, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x4f);

DEFINE_GUID(IID_ISearchProtocol2, 0x7789f0b2, 0xb5b2, 0x4722, 0x8b, 0x65, 0x5d, 0xbd, 0x15, 0x06, 0x97, 0xa9);

DEFINE_GUID(IID_IProtocolHandlerSite, 0x0b63e385, 0x9ccc, 0x11d0, 0xbc, 0xdb, 0x00, 0x80, 0x5f, 0xcc, 0xce, 0x04);

DEFINE_GUID(IID_ISearchRoot, 0x04c18ccf, 0x1f57, 0x4cbd, 0x88, 0xcc, 0x39, 0x00, 0xf5, 0x19, 0x5c, 0xe3);

DEFINE_GUID(IID_IEnumSearchRoots, 0xab310581, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x52);

DEFINE_GUID(IID_ISearchScopeRule, 0xab310581, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x53);

DEFINE_GUID(IID_IEnumSearchScopeRules, 0xab310581, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x54);

DEFINE_GUID(IID_ISearchCrawlScopeManager, 0xab310581, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x55);

DEFINE_GUID(IID_ISearchCrawlScopeManager2, 0x6292f7ad, 0x4e19, 0x4717, 0xa5, 0x34, 0x8f, 0xc2, 0x2b, 0xcd, 0x5c, 0xcd);

DEFINE_GUID(IID_ISearchItemsChangedSink, 0xab310581, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x58);

DEFINE_GUID(IID_ISearchPersistentItemsChangedSink, 0xa2ffdf9b, 0x4758, 0x4f84, 0xb7, 0x29, 0xdf, 0x81, 0xa1, 0xa0, 0x61, 0x2f);

DEFINE_GUID(IID_ISearchViewChangedSink, 0xab310581, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x65);

DEFINE_GUID(IID_IGatherNotifyInline, 0x7900f4f4, 0xba3f, 0x4d53, 0x87, 0x44, 0x51, 0x62, 0x65, 0x42, 0x35, 0x1a);

DEFINE_GUID(IID_ISearchNotifyInlineSite, 0xb5702e61, 0xe75c, 0x4b64, 0x82, 0xa1, 0x6c, 0xb4, 0xf8, 0x32, 0xfc, 0xcf);

DEFINE_GUID(IID_IGatherNotifyInlineInternal, 0x2e5c2ec6, 0x4ff9, 0x44b7, 0x98, 0x69, 0x6a, 0xf9, 0xa8, 0xd3, 0xfd, 0x67);

DEFINE_GUID(IID_IGatherInlineStatus, 0x2137b63b, 0xbbb0, 0x4bee, 0x94, 0xb3, 0x46, 0x91, 0xcc, 0xef, 0x38, 0x9a);

DEFINE_GUID(IID_ISearchCatalogManager, 0xab310581, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x50);

DEFINE_GUID(IID_ISearchCatalogManager2, 0x7ac3286d, 0x4d1d, 0x4817, 0x84, 0xfc, 0xc1, 0xc8, 0x5e, 0x3a, 0xf0, 0xd9);

DEFINE_GUID(IID_ISearchQueryHelper, 0xab310581, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x63);

DEFINE_GUID(IID_IRowsetPrioritization, 0x42811652, 0x079d, 0x481b, 0x87, 0xa2, 0x09, 0xa6, 0x9e, 0xcc, 0x5f, 0x44);

DEFINE_GUID(IID_IRowsetEvents, 0x1551aea5, 0x5d66, 0x4b11, 0x86, 0xf5, 0xd5, 0x63, 0x4c, 0xb2, 0x11, 0xb9);

DEFINE_GUID(IID_ISearchManager, 0xab310581, 0xac80, 0x11d1, 0x8d, 0xf3, 0x00, 0xc0, 0x4f, 0xb6, 0xef, 0x69);

DEFINE_GUID(IID_ISearchLanguageSupport, 0x24c3cbaa, 0xebc1, 0x491a, 0x9e, 0xf1, 0x9f, 0x6d, 0x8d, 0xeb, 0x1b, 0x8f);

DEFINE_GUID(LIBID_SearchAPILib, 0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

DEFINE_GUID(CLSID_CSearchManager, 0x7d096c5f, 0xac08, 0x4f1f, 0xbe, 0xb7, 0x5c, 0x22, 0xc5, 0x17, 0xce, 0x39);

DEFINE_GUID(CLSID_CSearchRoot, 0x30766bd2, 0xea1c, 0x4f28, 0xbf, 0x27, 0x0b, 0x44, 0xe2, 0xf6, 0x8d, 0xb7);

DEFINE_GUID(CLSID_CSearchScopeRule, 0xe63de750, 0x3bd7, 0x4be5, 0x9c, 0x84, 0x6b, 0x42, 0x81, 0x98, 0x8c, 0x44);

DEFINE_GUID(CLSID_FilterRegistration, 0x9e175b8d, 0xf52a, 0x11d8, 0xb9, 0xa5, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30);

