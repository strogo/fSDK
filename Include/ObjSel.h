/*+@@file@@----------------------------------------------------------------*//*!
 \file		ObjSel.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 23:34:51 2016
 \date		Modified on Sun Sep 11 23:34:51 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __OBJSEL_H_
#define __OBJSEL_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef DECLSPEC_SELECTANY
#if (__POCC__ >= 1100)
#define DECLSPEC_SELECTANY  __declspec(selectany)
#else
#define DECLSPEC_SELECTANY
#endif
#endif
DEFINE_GUID(CLSID_DsObjectPicker, 0x17d6ccd8,0x3b7b,0x11d2,0xb9, 0xe0, 0x00, 0xc0, 0x4f, 0xd8, 0xdb, 0xf7);
DEFINE_GUID(IID_IDsObjectPicker, 0x0c87e64e,0x3b7a,0x11d2,0xb9,0xe0,0x00,0xc0,0x4f,0xd8,0xdb,0xf7);
DEFINE_GUID(IID_IDsObjectPickerCredentials, 0xe2d3ec9b,0xd041,0x445a,0x8f,0x16,0x47,0x48,0xde,0x8f,0xb1,0xcf);
#define CFSTR_DSOP_DS_SELECTION_LIST    TEXT("CFSTR_DSOP_DS_SELECTION_LIST")
#define DSOP_SCOPE_TYPE_TARGET_COMPUTER                 0x00000001
#define DSOP_SCOPE_TYPE_UPLEVEL_JOINED_DOMAIN           0x00000002
#define DSOP_SCOPE_TYPE_DOWNLEVEL_JOINED_DOMAIN         0x00000004
#define DSOP_SCOPE_TYPE_ENTERPRISE_DOMAIN               0x00000008
#define DSOP_SCOPE_TYPE_GLOBAL_CATALOG                  0x00000010
#define DSOP_SCOPE_TYPE_EXTERNAL_UPLEVEL_DOMAIN         0x00000020
#define DSOP_SCOPE_TYPE_EXTERNAL_DOWNLEVEL_DOMAIN       0x00000040
#define DSOP_SCOPE_TYPE_WORKGROUP                       0x00000080
#define DSOP_SCOPE_TYPE_USER_ENTERED_UPLEVEL_SCOPE      0x00000100
#define DSOP_SCOPE_TYPE_USER_ENTERED_DOWNLEVEL_SCOPE    0x00000200
#define DSOP_SCOPE_FLAG_STARTING_SCOPE              0x00000001
#define DSOP_SCOPE_FLAG_WANT_PROVIDER_WINNT         0x00000002
#define DSOP_SCOPE_FLAG_WANT_PROVIDER_LDAP          0x00000004
#define DSOP_SCOPE_FLAG_WANT_PROVIDER_GC            0x00000008
#define DSOP_SCOPE_FLAG_WANT_SID_PATH               0x00000010
#define DSOP_SCOPE_FLAG_WANT_DOWNLEVEL_BUILTIN_PATH 0x00000020
#define DSOP_SCOPE_FLAG_DEFAULT_FILTER_USERS        0x00000040
#define DSOP_SCOPE_FLAG_DEFAULT_FILTER_GROUPS       0x00000080
#define DSOP_SCOPE_FLAG_DEFAULT_FILTER_COMPUTERS    0x00000100
#define DSOP_SCOPE_FLAG_DEFAULT_FILTER_CONTACTS     0x00000200
#define DSOP_SCOPE_FLAG_DEFAULT_FILTER_SERVICE_ACCOUNTS     0x00000400
#define DSOP_FILTER_INCLUDE_ADVANCED_VIEW   0x00000001
#define DSOP_FILTER_USERS                   0x00000002
#define DSOP_FILTER_BUILTIN_GROUPS          0x00000004
#define DSOP_FILTER_WELL_KNOWN_PRINCIPALS   0x00000008
#define DSOP_FILTER_UNIVERSAL_GROUPS_DL     0x00000010
#define DSOP_FILTER_UNIVERSAL_GROUPS_SE     0x00000020
#define DSOP_FILTER_GLOBAL_GROUPS_DL        0x00000040
#define DSOP_FILTER_GLOBAL_GROUPS_SE        0x00000080
#define DSOP_FILTER_DOMAIN_LOCAL_GROUPS_DL  0x00000100
#define DSOP_FILTER_DOMAIN_LOCAL_GROUPS_SE  0x00000200
#define DSOP_FILTER_CONTACTS                0x00000400
#define DSOP_FILTER_COMPUTERS               0x00000800
#define DSOP_FILTER_SERVICE_ACCOUNTS               0x00001000
#define DSOP_DOWNLEVEL_FILTER_USERS                   0x80000001
#define DSOP_DOWNLEVEL_FILTER_LOCAL_GROUPS            0x80000002
#define DSOP_DOWNLEVEL_FILTER_GLOBAL_GROUPS           0x80000004
#define DSOP_DOWNLEVEL_FILTER_COMPUTERS               0x80000008
#define DSOP_DOWNLEVEL_FILTER_WORLD                   0x80000010
#define DSOP_DOWNLEVEL_FILTER_AUTHENTICATED_USER      0x80000020
#define DSOP_DOWNLEVEL_FILTER_ANONYMOUS               0x80000040
#define DSOP_DOWNLEVEL_FILTER_BATCH                   0x80000080
#define DSOP_DOWNLEVEL_FILTER_CREATOR_OWNER           0x80000100
#define DSOP_DOWNLEVEL_FILTER_CREATOR_GROUP           0x80000200
#define DSOP_DOWNLEVEL_FILTER_DIALUP                  0x80000400
#define DSOP_DOWNLEVEL_FILTER_INTERACTIVE             0x80000800
#define DSOP_DOWNLEVEL_FILTER_NETWORK                 0x80001000
#define DSOP_DOWNLEVEL_FILTER_SERVICE                 0x80002000
#define DSOP_DOWNLEVEL_FILTER_SYSTEM                  0x80004000
#define DSOP_DOWNLEVEL_FILTER_EXCLUDE_BUILTIN_GROUPS  0x80008000
#define DSOP_DOWNLEVEL_FILTER_TERMINAL_SERVER         0x80010000
#define DSOP_DOWNLEVEL_FILTER_ALL_WELLKNOWN_SIDS      0x80020000
#define DSOP_DOWNLEVEL_FILTER_LOCAL_SERVICE           0x80040000
#define DSOP_DOWNLEVEL_FILTER_NETWORK_SERVICE         0x80080000
#define DSOP_DOWNLEVEL_FILTER_REMOTE_LOGON            0x80100000
#define DSOP_DOWNLEVEL_FILTER_INTERNET_USER           0x80200000
#define DSOP_DOWNLEVEL_FILTER_OWNER_RIGHTS            0x80400000
#define DSOP_DOWNLEVEL_FILTER_SERVICES                0x80800000
#define DSOP_DOWNLEVEL_FILTER_LOCAL_LOGON             0x81000000
#define DSOP_DOWNLEVEL_FILTER_THIS_ORG_CERT           0x82000000
#define DSOP_DOWNLEVEL_FILTER_IIS_APP_POOL		0x84000000
typedef struct _DSOP_UPLEVEL_FILTER_FLAGS
{
    ULONG       flBothModes;
    ULONG       flMixedModeOnly;
    ULONG       flNativeModeOnly;
} DSOP_UPLEVEL_FILTER_FLAGS;
typedef struct _DSOP_FILTER_FLAGS
{
    DSOP_UPLEVEL_FILTER_FLAGS   Uplevel;
    ULONG                       flDownlevel;
} DSOP_FILTER_FLAGS;
typedef struct _DSOP_SCOPE_INIT_INFO
{
    ULONG               cbSize;
    ULONG               flType;
    ULONG               flScope;
    DSOP_FILTER_FLAGS   FilterFlags;
    PCWSTR              pwzDcName;
    PCWSTR              pwzADsPath;
    HRESULT             hr;
} DSOP_SCOPE_INIT_INFO, *PDSOP_SCOPE_INIT_INFO;
typedef const DSOP_SCOPE_INIT_INFO *PCDSOP_SCOPE_INIT_INFO;
#define DSOP_FLAG_MULTISELECT                    0x00000001
#define DSOP_FLAG_SKIP_TARGET_COMPUTER_DC_CHECK  0x00000002
typedef struct _DSOP_INIT_INFO
{
    ULONG                       cbSize;
    PCWSTR                      pwzTargetComputer;
    ULONG                       cDsScopeInfos;
    PDSOP_SCOPE_INIT_INFO       aDsScopeInfos;
    ULONG                       flOptions;
    ULONG                       cAttributesToFetch;
    PCWSTR                     *apwzAttributeNames;
} DSOP_INIT_INFO, *PDSOP_INIT_INFO;
typedef const DSOP_INIT_INFO *PCDSOP_INIT_INFO;
typedef struct _DS_SELECTION
{
    PWSTR      pwzName;
    PWSTR      pwzADsPath;
    PWSTR      pwzClass;
    PWSTR      pwzUPN;
    VARIANT   *pvarFetchedAttributes;
    ULONG      flScopeType;
} DS_SELECTION, *PDS_SELECTION;
typedef struct _DS_SELECTION_LIST
{
    ULONG           cItems;
    ULONG           cFetchedAttributes;
    DS_SELECTION    aDsSelection[ANYSIZE_ARRAY];
} DS_SELECTION_LIST, *PDS_SELECTION_LIST;
#undef INTERFACE
#define INTERFACE IDsObjectPicker
DECLARE_INTERFACE_(IDsObjectPicker, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, PVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Initialize) (THIS_ PDSOP_INIT_INFO pInitInfo);
	STDMETHOD(InvokeDialog) (THIS_ HWND hwndParent, IDataObject ** ppdoSelections);
};
DECLARE_INTERFACE_(IDsObjectPickerCredentials, IDsObjectPicker)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, PVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(SetCredentials) (THIS_ LPCWSTR szUserName, LPCWSTR szPassword);
};
#endif
