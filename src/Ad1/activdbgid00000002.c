// Created file "Lib\src\Ad1\activdbgid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DefaultDebugSessionProvider, 0x834128a2, 0x51f4, 0x11d0, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);

DEFINE_GUID(CLSID_MachineDebugManager, 0x0c0a3666, 0x30c9, 0x11d0, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);

DEFINE_GUID(CLSID_CDebugDocumentHelper, 0x83b8bca6, 0x687c, 0x11d0, 0xa4, 0x05, 0x00, 0xaa, 0x00, 0x60, 0x27, 0x5c);

DEFINE_GUID(CLSID_DebugHelper, 0x0bfcc060, 0x8c1d, 0x11d0, 0xac, 0xcd, 0x00, 0xaa, 0x00, 0x60, 0x27, 0x5c);

DEFINE_GUID(CLSID_ProcessDebugManager, 0x78a51822, 0x51f4, 0x11d0, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);

DEFINE_GUID(LIBID_ProcessDebugManagerLib, 0x78a51821, 0x51f4, 0x11d0, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);

DEFINE_GUID(IID_IProvideExpressionContexts, 0x51973c41, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IEnumDebugExpressionContexts, 0x51973c40, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugHelper, 0x51973c3f, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_ISimpleConnectionPoint, 0x51973c3e, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugFormatter, 0x51973c05, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IEnumRemoteDebugApplicationThreads, 0x51973c3c, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IEnumRemoteDebugApplications, 0x51973c3b, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IEnumDebugApplicationNodes, 0x51973c3a, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugCookie, 0x51973c39, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugApplicationThread, 0x51973c38, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IRemoteDebugApplicationThread, 0x51973c37, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugThreadCall, 0x51973c36, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugApplicationNodeEvents, 0x51973c35, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugApplicationNode, 0x51973c34, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IRemoteDebugApplicationEvents, 0x51973c33, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugApplication, 0x51973c32, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IRemoteDebugApplication, 0x51973c30, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IProcessDebugManager, 0x51973c2f, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IMachineDebugManagerEvents, 0x51973c2e, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IMachineDebugManagerCookie, 0x51973c2d, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IMachineDebugManager, 0x51973c2c, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IApplicationDebuggerUI, 0x51973c2b, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IApplicationDebugger, 0x51973c2a, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugSessionProvider, 0x51973c29, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugDocumentContext, 0x51973c28, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugDocumentHost, 0x51973c27, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugDocumentHelper, 0x51973c26, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugDocumentTextExternalAuthor, 0x51973c25, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugDocumentTextAuthor, 0x51973c24, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugDocumentTextEvents, 0x51973c23, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugDocumentText, 0x51973c22, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugDocument, 0x51973c21, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugDocumentProvider, 0x51973c20, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugDocumentInfo, 0x51973c1f, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IEnumDebugStackFrames, 0x51973c1e, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IEnumDebugCodeContexts, 0x51973c1d, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugAsyncOperationCallBack, 0x51973c1c, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugAsyncOperation, 0x51973c1b, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugSyncOperation, 0x51973c1a, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugStackFrameSnifferEx, 0x51973c19, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugStackFrameSniffer, 0x51973c18, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugStackFrame, 0x51973c17, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugExpressionCallBack, 0x51973c16, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugExpressionContext, 0x51973c15, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugExpression, 0x51973c14, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IDebugCodeContext, 0x51973c13, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IActiveScriptErrorDebug, 0x51973c12, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IActiveScriptSiteDebug, 0x51973c11, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

DEFINE_GUID(IID_IActiveScriptDebug, 0x51973c10, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

