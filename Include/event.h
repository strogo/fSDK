/*+@@file@@----------------------------------------------------------------*//*!
 \file		event.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 21:08:03 2016
 \date		Modified on Sat Jul  9 21:08:03 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __event_h__
#define __event_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSEventNotificationPlugin_FWD_DEFINED__
#define __IWMSEventNotificationPlugin_FWD_DEFINED__
typedef interface IWMSEventNotificationPlugin IWMSEventNotificationPlugin;
#endif
#ifndef __IWMSEventAuthorizationPlugin_FWD_DEFINED__
#define __IWMSEventAuthorizationPlugin_FWD_DEFINED__
typedef interface IWMSEventAuthorizationPlugin IWMSEventAuthorizationPlugin;
#endif
#ifndef __IWMSEventAuthorizationCallback_FWD_DEFINED__
#define __IWMSEventAuthorizationCallback_FWD_DEFINED__
typedef interface IWMSEventAuthorizationCallback IWMSEventAuthorizationCallback;
#endif
#include "oaidl.h"
#include "WMSContext.h"
#include "WMSEvent.h"
#if _MSC_VER > 1000
#pragma once
#endif
EXTERN_GUID(IID_IWMSEventNotificationPlugin, 0xBE185FF0, 0x6932, 0x11d2, 0x8B, 0x3B, 0x00, 0x60, 0x97, 0xB0, 0x12, 0x06);
EXTERN_GUID(IID_IWMSEventAuthorizationPlugin, 0xBE185FF1, 0x6932, 0x11d2, 0x8B, 0x3B, 0x00, 0x60, 0x97, 0xB0, 0x12, 0x06);
EXTERN_GUID(IID_IWMSEventAuthorizationCallback, 0xBE185FF2, 0x6932, 0x11d2, 0x8B, 0x3B, 0x00, 0x60, 0x97, 0xB0, 0x12, 0x06);
EXTERN_GUID(IID_IWMSCustomEventCallback, 0x8fbd4d04, 0x970d, 0x4d37, 0xbb, 0xc6, 0x6f, 0xbb, 0xb7, 0x4e, 0xac, 0x9d);
typedef enum WMS_SERVER_EVENT_TYPE
{
	 WMS_EVENT_SERVER_ONLINE = 0,
	WMS_EVENT_SERVER_OFFLINE = 1,
	WMS_EVENT_SERVER_CRITICAL_ERROR = 2,
	WMS_EVENT_SERVER_PROPERTY_CHANGE = 3,
	WMS_EVENT_SERVER_ALLOW_CLIENTS_TO_CONNECT_CHANGE = 4,
	WMS_EVENT_SERVER_PLUGIN_LOAD_TYPE_CHANGE = 5,
	WMS_EVENT_SERVER_REVERSE_PROXY_MODE_CHANGE = 6,
	WMS_EVENT_SERVER_DOWNLOAD_START = 7,
	WMS_EVENT_SERVER_DOWNLOAD_COMPLETE = 8,
	WMS_NUM_SERVER_EVENTS = 9
} WMS_SERVER_EVENT_TYPE;
typedef enum WMS_PUBLISHING_POINT_EVENT_TYPE
{
	 WMS_EVENT_PUBLISHING_POINT_ADD = 0,
	WMS_EVENT_PUBLISHING_POINT_REMOVE = 1,
	WMS_EVENT_PUBLISHING_POINT_ALLOW_CLIENTS_TO_CONNECT_CHANGE = 2,
	WMS_EVENT_PUBLISHING_POINT_START_WITHOUT_DATA = 3,
	WMS_EVENT_PUBLISHING_POINT_START = 4,
	WMS_EVENT_PUBLISHING_POINT_STOP = 5,
	WMS_EVENT_PUBLISHING_POINT_START_ARCHIVE = 6,
	WMS_EVENT_PUBLISHING_POINT_STOP_ARCHIVE = 7,
	WMS_EVENT_PUBLISHING_POINT_NAME_CHANGE = 8,
	WMS_EVENT_PUBLISHING_POINT_PATH_CHANGE = 9,
	WMS_EVENT_PUBLISHING_POINT_ALLOW_CLIENT_TO_START_AND_STOP_CHANGE = 10,
	WMS_EVENT_PUBLISHING_POINT_PROPERTY_CHANGE = 11,
	WMS_EVENT_PUBLISHING_POINT_WRAPPER_PATH_CHANGE = 12,
	WMS_EVENT_PUBLISHING_POINT_ENABLE_WRAPPER_PATH_CHANGE = 13,
	WMS_EVENT_PUBLISHING_POINT_ALLOW_CONTENT_CACHING_CHANGE = 14,
	WMS_EVENT_PUBLISHING_POINT_STREAM_END = 15,
	WMS_EVENT_PUBLISHING_POINT_CRITICAL_ERROR = 16,
	WMS_EVENT_PUBLISHING_POINT_ENABLE_CLIENT_WILDCARD_DIRECTORY_ACCESS_CHANGE = 17,
	WMS_EVENT_PUBLISHING_POINT_DISTRIBUTION_USER_NAME_CHANGE = 18,
	WMS_EVENT_PUBLISHING_POINT_DISTRIBUTION_PASSWORD_CHANGE = 19,
	WMS_EVENT_PUBLISHING_POINT_ALLOW_PLAYER_SIDE_DISK_CACHING_CHANGE = 20,
	WMS_EVENT_PUBLISHING_POINT_BUFFER_SETTING_CHANGE = 21,
	WMS_EVENT_PUBLISHING_POINT_ENABLE_FEC_CHANGE = 22,
	WMS_EVENT_PUBLISHING_POINT_ENABLE_STARTUPPROFILE_CHANGE = 23,
	WMS_EVENT_PUBLISHING_POINT_ENABLE_VROOT_START_CHANGE = 24,
	WMS_NUM_PUBLISHINGPOINT_EVENTS = 25
} WMS_PUBLISHING_POINT_EVENT_TYPE;
typedef enum WMS_LIMIT_CHANGE_EVENT_TYPE
{
	 WMS_EVENT_LIMIT_CHANGE_CONNECTED_PLAYERS = 0,
	WMS_EVENT_LIMIT_CHANGE_PLAYER_BANDWIDTH = 1,
	WMS_EVENT_LIMIT_CHANGE_PLAYER_CONNECTION_BANDWIDTH = 2,
	WMS_EVENT_LIMIT_CHANGE_DISTRIBUTION_CONNECTIONS = 3,
	WMS_EVENT_LIMIT_CHANGE_PLAYER_INACTIVITY_TIMEOUT = 4,
	WMS_EVENT_LIMIT_CHANGE_PLAYER_ACKNOWLEDGEMENT_TIMEOUT = 5,
	WMS_EVENT_LIMIT_CHANGE_CONNECTION_RATE = 6,
	WMS_EVENT_LIMIT_CHANGE_CPU_UTILIZATION_DURING_CONNECTION = 7,
	WMS_EVENT_LIMIT_CHANGE_DISTRIBUTION_BANDWIDTH = 8,
	WMS_EVENT_LIMIT_CHANGE_DISTRIBUTION_CONNECTION_BANDWIDTH = 9,
	WMS_EVENT_LIMIT_CHANGE_DIAGNOSTIC_EVENTS = 10,
	WMS_EVENT_LIMIT_CHANGE_PLAYER_CACHE_DELIVERY_RATE = 11,
	WMS_EVENT_LIMIT_CHANGE_FEC_PACKET_SPAN = 12,
	WMS_EVENT_LIMIT_CHANGE_INCOMING_BANDWIDTH = 13,
	WMS_NUM_LIMIT_CHANGE_EVENTS = 14
} WMS_LIMIT_CHANGE_EVENT_TYPE;
typedef enum WMS_LIMIT_HIT_EVENT_TYPE
{
	 WMS_EVENT_LIMIT_HIT_CONNECTED_PLAYERS = 0,
	WMS_EVENT_LIMIT_HIT_PLAYER_BANDWIDTH = 1,
	WMS_EVENT_LIMIT_HIT_PLAYER_CONNECTION_BANDWIDTH = 2,
	WMS_EVENT_LIMIT_HIT_DISTRIBUTION_CONNECTIONS = 3,
	WMS_EVENT_LIMIT_HIT_PLAYER_INACTIVITY_TIMEOUT = 4,
	WMS_EVENT_LIMIT_HIT_PLAYER_ACKNOWLEDGEMENT_TIMEOUT = 5,
	WMS_EVENT_LIMIT_HIT_CONNECTION_RATE = 6,
	WMS_EVENT_LIMIT_HIT_CPU_UTILIZATION_DURING_CONNECTION = 7,
	WMS_EVENT_LIMIT_HIT_DISTRIBUTION_BANDWIDTH = 8,
	WMS_EVENT_LIMIT_HIT_DISTRIBUTION_CONNECTION_BANDWIDTH = 9,
	WMS_EVENT_LIMIT_HIT_INCOMING_BANDWIDTH = 10,
	WMS_NUM_LIMIT_HIT_EVENTS = 11
} WMS_LIMIT_HIT_EVENT_TYPE;
typedef enum WMS_PLUGIN_EVENT_TYPE
{
	 WMS_EVENT_PLUGIN_ADD = 0,
	WMS_EVENT_PLUGIN_REMOVE = 1,
	WMS_EVENT_PLUGIN_ENABLE = 2,
	WMS_EVENT_PLUGIN_DISABLE = 3,
	WMS_EVENT_PLUGIN_PROPERTY_CHANGE = 4,
	WMS_EVENT_PLUGIN_ERROR = 5,
	WMS_EVENT_PLUGIN_NAME_CHANGE = 6,
	WMS_EVENT_PLUGIN_LOAD_TYPE_CHANGE = 7,
	WMS_EVENT_PLUGIN_SELECTION_ORDER_CHANGE = 8,
	WMS_NUM_PLUGIN_EVENTS = 9
} WMS_PLUGIN_EVENT_TYPE;
typedef enum WMS_CACHE_EVENT_TYPE
{
	 WMS_EVENT_CACHE_HIT = 0,
	WMS_EVENT_CACHE_MISS = 1,
	WMS_EVENT_CACHE_DOWNLOAD_START = 2,
	WMS_EVENT_CACHE_DOWNLOAD_COMPLETE = 3,
	WMS_EVENT_CACHE_REDIRECT = 4,
	WMS_EVENT_CACHE_REDIRECT_TO_PROXY = 5,
	WMS_EVENT_CACHE_PRESTUFF_COMPLETE = 6,
	WMS_NUM_CACHE_EVENTS = 7
} WMS_CACHE_EVENT_TYPE;
typedef enum WMS_PLAYLIST_EVENT_TYPE
{
	 WMS_EVENT_PLAYLIST_SWITCH = 0,
	WMS_EVENT_PLAYLIST_CUE = 1,
	WMS_EVENT_PLAYLIST_MODIFY = 2,
	WMS_EVENT_PLAYLIST_FAILOVER = 3,
	WMS_NUM_PLAYLIST_EVENTS = 4
} WMS_PLAYLIST_EVENT_TYPE;
typedef enum WMS_RECORD_PROGRESS_OPCODE
{
	 WMS_RECORD_PROGRESS_ARCHIVE_STARTED = 0,
	WMS_RECORD_PROGRESS_ARCHIVE_FINISHED = 1
} WMS_RECORD_PROGRESS_OPCODE;
extern RPC_IF_HANDLE __MIDL_itf_event_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_event_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSEventNotificationPlugin_INTERFACE_DEFINED__
#define __IWMSEventNotificationPlugin_INTERFACE_DEFINED__
extern const IID IID_IWMSEventNotificationPlugin;
typedef struct IWMSEventNotificationPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSEventNotificationPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSEventNotificationPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSEventNotificationPlugin * This);
	HRESULT(STDMETHODCALLTYPE * GetHandledEvents) (IWMSEventNotificationPlugin * This, VARIANT * pvarEvents);
	HRESULT(STDMETHODCALLTYPE * OnEvent) (IWMSEventNotificationPlugin * This, WMS_EVENT * pEvent, IWMSContext * pUserCtx, IWMSContext * pPresentationCtx, IWMSCommandContext * pCommandCtx);
	END_INTERFACE
}  IWMSEventNotificationPluginVtbl;
interface IWMSEventNotificationPlugin
{
	CONST_VTBL struct IWMSEventNotificationPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSEventNotificationPlugin_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSEventNotificationPlugin_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSEventNotificationPlugin_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSEventNotificationPlugin_GetHandledEvents(This,pvarEvents)( (This)->lpVtbl -> GetHandledEvents(This,pvarEvents) )
#define IWMSEventNotificationPlugin_OnEvent(This,pEvent,pUserCtx,pPresentationCtx,pCommandCtx)( (This)->lpVtbl -> OnEvent(This,pEvent,pUserCtx,pPresentationCtx,pCommandCtx) )
#endif
#endif
#ifndef __IWMSEventAuthorizationPlugin_INTERFACE_DEFINED__
#define __IWMSEventAuthorizationPlugin_INTERFACE_DEFINED__
extern const IID IID_IWMSEventAuthorizationPlugin;
typedef struct IWMSEventAuthorizationPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSEventAuthorizationPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSEventAuthorizationPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSEventAuthorizationPlugin * This);
	HRESULT(STDMETHODCALLTYPE * GetAuthorizedEvents) (IWMSEventAuthorizationPlugin * This, VARIANT * pvarEvents);
	HRESULT(STDMETHODCALLTYPE * AuthorizeEvent) (IWMSEventAuthorizationPlugin * This, WMS_EVENT * pEvent, IWMSContext * pUserCtx, IWMSContext * pPresentationCtx, IWMSCommandContext * pCommandCtx, IWMSEventAuthorizationCallback * pCallback, VARIANT Context);
	END_INTERFACE
}  IWMSEventAuthorizationPluginVtbl;
interface IWMSEventAuthorizationPlugin
{
	CONST_VTBL struct IWMSEventAuthorizationPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSEventAuthorizationPlugin_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSEventAuthorizationPlugin_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSEventAuthorizationPlugin_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSEventAuthorizationPlugin_GetAuthorizedEvents(This,pvarEvents)( (This)->lpVtbl -> GetAuthorizedEvents(This,pvarEvents) )
#define IWMSEventAuthorizationPlugin_AuthorizeEvent(This,pEvent,pUserCtx,pPresentationCtx,pCommandCtx,pCallback,Context)( (This)->lpVtbl -> AuthorizeEvent(This,pEvent,pUserCtx,pPresentationCtx,pCommandCtx,pCallback,Context) )
#endif
#endif
#ifndef __IWMSEventAuthorizationCallback_INTERFACE_DEFINED__
#define __IWMSEventAuthorizationCallback_INTERFACE_DEFINED__
extern const IID IID_IWMSEventAuthorizationCallback;
typedef struct IWMSEventAuthorizationCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSEventAuthorizationCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSEventAuthorizationCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSEventAuthorizationCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnAuthorizeEvent) (IWMSEventAuthorizationCallback * This, long hr, VARIANT Context);
	END_INTERFACE
}  IWMSEventAuthorizationCallbackVtbl;
interface IWMSEventAuthorizationCallback
{
	CONST_VTBL struct IWMSEventAuthorizationCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSEventAuthorizationCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSEventAuthorizationCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSEventAuthorizationCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSEventAuthorizationCallback_OnAuthorizeEvent(This,hr,Context)( (This)->lpVtbl -> OnAuthorizeEvent(This,hr,Context) )
#endif
#endif
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif