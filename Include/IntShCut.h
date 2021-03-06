/*+@@file@@----------------------------------------------------------------*//*!
 \file		IntShCut.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 01:16:38 2016
 \date		Modified on Sun Jul 17 01:16:38 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __INTSHCUT_H__
#define __INTSHCUT_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <isguids.h>
#ifdef _INTSHCUT_
#define INTSHCUTAPI
#else
#define INTSHCUTAPI                 DECLSPEC_IMPORT
#endif
#define E_FLAGS                     MAKE_SCODE(SEVERITY_ERROR, FACILITY_ITF, 0x1000)
#define IS_E_EXEC_FAILED            MAKE_SCODE(SEVERITY_ERROR, FACILITY_ITF, 0x2002)
#define URL_E_INVALID_SYNTAX        MAKE_SCODE(SEVERITY_ERROR, FACILITY_ITF, 0x1001)
#define URL_E_UNREGISTERED_PROTOCOL MAKE_SCODE(SEVERITY_ERROR, FACILITY_ITF, 0x1002)
typedef enum iurl_seturl_flags
{
   IURL_SETURL_FL_GUESS_PROTOCOL        = 0x0001,
   IURL_SETURL_FL_USE_DEFAULT_PROTOCOL  = 0x0002,
} IURL_SETURL_FLAGS;
typedef enum iurl_invokecommand_flags
{
   IURL_INVOKECOMMAND_FL_ALLOW_UI                  = 0x0001,
   IURL_INVOKECOMMAND_FL_USE_DEFAULT_VERB          = 0x0002,
   IURL_INVOKECOMMAND_FL_DDEWAIT                   = 0x0004,
   IURL_INVOKECOMMAND_FL_ASYNCOK                   = 0x0008,
} IURL_INVOKECOMMAND_FLAGS;
typedef struct urlinvokecommandinfoA
{
   DWORD  dwcbSize;
   DWORD  dwFlags;
   HWND   hwndParent;
   LPCSTR pcszVerb;
} URLINVOKECOMMANDINFOA;
typedef URLINVOKECOMMANDINFOA *PURLINVOKECOMMANDINFOA;
typedef const URLINVOKECOMMANDINFOA CURLINVOKECOMMANDINFOA;
typedef const URLINVOKECOMMANDINFOA *PCURLINVOKECOMMANDINFOA;
typedef struct urlinvokecommandinfoW
{
   DWORD   dwcbSize;
   DWORD   dwFlags;
   HWND    hwndParent;
   LPCWSTR pcszVerb;
} URLINVOKECOMMANDINFOW;
typedef URLINVOKECOMMANDINFOW *PURLINVOKECOMMANDINFOW;
typedef const URLINVOKECOMMANDINFOW CURLINVOKECOMMANDINFOW;
typedef const URLINVOKECOMMANDINFOW *PCURLINVOKECOMMANDINFOW;
#ifdef UNICODE
#define URLINVOKECOMMANDINFO            URLINVOKECOMMANDINFOW
#define PURLINVOKECOMMANDINFO           PURLINVOKECOMMANDINFOW
#define CURLINVOKECOMMANDINFO           CURLINVOKECOMMANDINFOW
#define PCURLINVOKECOMMANDINFO          PCURLINVOKECOMMANDINFOW
#else
#define URLINVOKECOMMANDINFO            URLINVOKECOMMANDINFOA
#define PURLINVOKECOMMANDINFO           PURLINVOKECOMMANDINFOA
#define CURLINVOKECOMMANDINFO           CURLINVOKECOMMANDINFOA
#define PCURLINVOKECOMMANDINFO          PCURLINVOKECOMMANDINFOA
#endif
#undef  INTERFACE
#define INTERFACE IUniformResourceLocatorA
DECLARE_INTERFACE_IID_(IUniformResourceLocatorA, IUnknown, "fbf23b80-e3f0-101b-8488-00aa003e56f8")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, PVOID * ppvObject);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(SetURL) (THIS_ LPCSTR pcszURL, DWORD dwInFlags);
	STDMETHOD(GetURL) (THIS_ LPSTR * ppszURL);
	STDMETHOD(InvokeCommand) (THIS_ PURLINVOKECOMMANDINFOA purlici);
};
#undef  INTERFACE
#define INTERFACE IUniformResourceLocatorW
DECLARE_INTERFACE_IID_(IUniformResourceLocatorW, IUnknown, "cabb0da0-da57-11cf-9974-0020afd79762")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, PVOID * ppvObject);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(SetURL) (THIS_ LPCWSTR pcszURL, DWORD dwInFlags);
	STDMETHOD(GetURL) (THIS_ LPWSTR * ppszURL);
	STDMETHOD(InvokeCommand) (THIS_ PURLINVOKECOMMANDINFOW purlici);
};
#ifdef UNICODE
#define IUniformResourceLocator         IUniformResourceLocatorW
#define IUniformResourceLocatorVtbl     IUniformResourceLocatorWVtbl
#else
#define IUniformResourceLocator         IUniformResourceLocatorA
#define IUniformResourceLocatorVtbl     IUniformResourceLocatorAVtbl
#endif
typedef IUniformResourceLocator *PIUniformResourceLocator;
typedef const IUniformResourceLocator CIUniformResourceLocator;
typedef const IUniformResourceLocator *PCIUniformResourceLocator;
typedef enum translateurl_in_flags
{
   TRANSLATEURL_FL_GUESS_PROTOCOL         = 0x0001,
   TRANSLATEURL_FL_USE_DEFAULT_PROTOCOL   = 0x0002,
} TRANSLATEURL_IN_FLAGS;
INTSHCUTAPI HRESULT WINAPI TranslateURLA(PCSTR pcszURL, DWORD dwInFlags, PSTR *ppszTranslatedURL);
INTSHCUTAPI HRESULT WINAPI TranslateURLW(PCWSTR pcszURL, DWORD dwInFlags, PWSTR UNALIGNED *ppszTranslatedURL);
#ifdef UNICODE
#define TranslateURL             TranslateURLW
#else
#define TranslateURL             TranslateURLA
#endif
typedef enum urlassociationdialog_in_flags
{
   URLASSOCDLG_FL_USE_DEFAULT_NAME        = 0x0001,
   URLASSOCDLG_FL_REGISTER_ASSOC          = 0x0002
} URLASSOCIATIONDIALOG_IN_FLAGS;
INTSHCUTAPI HRESULT WINAPI URLAssociationDialogA(HWND hwndParent, DWORD dwInFlags, PCSTR pcszFile, PCSTR pcszURL, PSTR pszAppBuf, UINT ucAppBufLen);
INTSHCUTAPI HRESULT WINAPI URLAssociationDialogW(HWND hwndParent, DWORD dwInFlags, PCWSTR pcszFile, PCWSTR pcszURL, PWSTR pszAppBuf, UINT ucAppBufLen);
#ifdef UNICODE
#define URLAssociationDialog     URLAssociationDialogW
#else
#define URLAssociationDialog     URLAssociationDialogA
#endif
typedef enum mimeassociationdialog_in_flags
{
   MIMEASSOCDLG_FL_REGISTER_ASSOC         = 0x0001
} MIMEASSOCIATIONDIALOG_IN_FLAGS;
INTSHCUTAPI HRESULT WINAPI MIMEAssociationDialogA(HWND hwndParent, DWORD dwInFlags, PCSTR pcszFile, PCSTR pcszMIMEContentType, PSTR pszAppBuf, UINT ucAppBufLen);
INTSHCUTAPI HRESULT WINAPI MIMEAssociationDialogW(HWND hwndParent, DWORD dwInFlags, PCWSTR pcszFile, PCWSTR pcszMIMEContentType, PWSTR pszAppBuf, UINT ucAppBufLen);
#ifdef UNICODE
#define MIMEAssociationDialog    MIMEAssociationDialogW
#else
#define MIMEAssociationDialog    MIMEAssociationDialogA
#endif
INTSHCUTAPI BOOL WINAPI InetIsOffline(DWORD dwFlags);
#endif
