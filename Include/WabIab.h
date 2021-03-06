/*+@@file@@----------------------------------------------------------------*//*!
 \file		WabIab.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 18 23:55:19 2016
 \date		Modified on Sun Sep 18 23:55:19 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef WABIAB_H
#define WABIAB_H
#if __POCC__ >= 500
#pragma once
#endif
#define WAB_RESOLVE_LOCAL_ONLY              ((ULONG) 0x80000000) 
#define WAB_RESOLVE_ALL_EMAILS              ((ULONG) 0x40000000)
#define WAB_RESOLVE_NO_ONE_OFFS             ((ULONG) 0x20000000)
#define WAB_RESOLVE_NEED_CERT               ((ULONG) 0x10000000)
#define WAB_RESOLVE_NO_NOT_FOUND_UI         ((ULONG) 0x08000000)
#define WAB_RESOLVE_USE_CURRENT_PROFILE     ((ULONG) 0x04000000)
#define WAB_RESOLVE_FIRST_MATCH             ((ULONG) 0x02000000)
#define WAB_RESOLVE_UNICODE                 ((ULONG) 0x01000000)
#ifndef MAPIX_H
#define MAPI_IADDRBOOK_METHODS(IPURE)									\
	MAPIMETHOD(OpenEntry)(THIS_ ULONG cbEntryID, LPENTRYID lpEntryID, LPCIID lpInterface, ULONG ulFlags, ULONG FAR * lpulObjType, LPUNKNOWN FAR * lppUnk);          	\
	MAPIMETHOD(CompareEntryIDs)(THIS_ ULONG cbEntryID1, LPENTRYID	 lpEntryID1, ULONG	 cbEntryID2, LPENTRYID lpEntryID2, ULONG ulFlags, ULONG FAR * lpulResult);			\
	MAPIMETHOD(Advise)(THIS_ ULONG cbEntryID, LPENTRYID lpEntryID, ULONG ulEventMask, LPMAPIADVISESINK lpAdviseSink, ULONG FAR * lpulConnection);		\
	MAPIMETHOD(Unadvise)(THIS_ ULONG ulConnection);		\
	MAPIMETHOD(CreateOneOff)(THIS_ LPTSTR lpszName, LPTSTR lpszAdrType, LPTSTR lpszAddress, ULONG ulFlags, ULONG FAR * lpcbEntryID, LPENTRYID FAR * lppEntryID);			\
	MAPIMETHOD(NewEntry)(THIS_ ULONG ulUIParam, ULONG ulFlags, ULONG cbEIDContainer, LPENTRYID lpEIDContainer, ULONG cbEIDNewEntryTpl, LPENTRYID lpEIDNewEntryTpl, ULONG FAR * lpcbEIDNewEntry, LPENTRYID FAR * lppEIDNewEntry);		\
	MAPIMETHOD(ResolveName) (THIS_ ULONG_PTR ulUIParam, ULONG ulFlags, LPTSTR lpszNewEntryTitle, LPADRLIST lpAdrList);			\
	MAPIMETHOD(Address)(THIS_ ULONG FAR * lpulUIParam, LPADRPARM lpAdrParms, LPADRLIST FAR * lppAdrList);			\
	MAPIMETHOD(Details)(THIS_ ULONG_PTR FAR * lpulUIParam, LPFNDISMISS lpfnDismiss, LPVOID lpvDismissContext, ULONG cbEntryID, LPENTRYID lpEntryID, LPFNBUTTON lpfButtonCallback, LPVOID lpvButtonContext, LPTSTR lpszButtonText, ULONG ulFlags);				\
	MAPIMETHOD(RecipOptions)(THIS_ ULONG ulUIParam, ULONG ulFlags, LPADRENTRY lpRecip);				\
	MAPIMETHOD(QueryDefaultRecipOpt)(THIS_ LPTSTR lpszAdrType, ULONG ulFlags, ULONG FAR * lpcValues, LPSPropValue FAR * lppOptions);			\
	MAPIMETHOD(GetPAB) (THIS_ ULONG FAR * lpcbEntryID, LPENTRYID FAR * lppEntryID);			\
	MAPIMETHOD(SetPAB)(THIS_ ULONG cbEntryID, LPENTRYID lpEntryID);			\
	MAPIMETHOD(GetDefaultDir)(THIS_ ULONG FAR * lpcbEntryID, LPENTRYID FAR * lppEntryID);			\
	MAPIMETHOD(SetDefaultDir)(THIS_ ULONG cbEntryID, LPENTRYID lpEntryID);			\
	MAPIMETHOD(GetSearchPath)(THIS_ ULONG ulFlags, LPSRowSet FAR *lppSearchPath);		\
	MAPIMETHOD(SetSearchPath)(THIS_ ULONG ulFlags, LPSRowSet lpSearchPath);		\
	MAPIMETHOD(PrepareRecips)(THIS_ ULONG ulFlags, LPSPropTagArray lpPropTagArray, LPADRLIST lpRecipList);
#undef		 INTERFACE
#define		 INTERFACE  IAddrBook
DECLARE_MAPI_INTERFACE_(IAddrBook, IMAPIProp)
{
	BEGIN_INTERFACE	
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IMAPIPROP_METHODS(PURE)
	MAPI_IADDRBOOK_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_PTR(IAddrBook, LPADRBOOK);
#endif
#endif
