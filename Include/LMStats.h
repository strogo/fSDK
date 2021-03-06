/*+@@file@@----------------------------------------------------------------*//*!
 \file		LMStats.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 23:29:14 2016
 \date		Modified on Sun Jul 17 23:29:14 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _LMSTATS_
#define _LMSTATS_
#if __POCC__ >= 500
#pragma once
#endif
#include <lmcons.h>
NET_API_STATUS NET_API_FUNCTION NetStatisticsGet(LPTSTR ServerName, LPTSTR Service, DWORD Level, DWORD Options, LPBYTE *Buffer);
#ifdef LM20_WORKSTATION_STATISTICS
typedef struct _STAT_WORKSTATION_0
{
     DWORD          stw0_start;
     DWORD          stw0_numNCB_r;
     DWORD          stw0_numNCB_s;
     DWORD          stw0_numNCB_a;
     DWORD          stw0_fiNCB_r;
     DWORD          stw0_fiNCB_s;
     DWORD          stw0_fiNCB_a;
     DWORD          stw0_fcNCB_r;
     DWORD          stw0_fcNCB_s;
     DWORD          stw0_fcNCB_a;
     DWORD          stw0_sesstart;
     DWORD          stw0_sessfailcon;
     DWORD          stw0_sessbroke;
     DWORD          stw0_uses;
     DWORD          stw0_usefail;
     DWORD          stw0_autorec;
     DWORD          stw0_bytessent_r_lo;
     DWORD          stw0_bytessent_r_hi;
     DWORD          stw0_bytesrcvd_r_lo;
     DWORD          stw0_bytesrcvd_r_hi;
     DWORD          stw0_bytessent_s_lo;
     DWORD          stw0_bytessent_s_hi;
     DWORD          stw0_bytesrcvd_s_lo;
     DWORD          stw0_bytesrcvd_s_hi;
     DWORD          stw0_bytessent_a_lo;
     DWORD          stw0_bytessent_a_hi;
     DWORD          stw0_bytesrcvd_a_lo;
     DWORD          stw0_bytesrcvd_a_hi;
     DWORD          stw0_reqbufneed;
     DWORD          stw0_bigbufneed;
} STAT_WORKSTATION_0, *PSTAT_WORKSTATION_0, *LPSTAT_WORKSTATION_0;
#else
typedef struct _STAT_WORKSTATION_0
{
    LARGE_INTEGER   StatisticsStartTime;
    LARGE_INTEGER   BytesReceived;
    LARGE_INTEGER   SmbsReceived;
    LARGE_INTEGER   PagingReadBytesRequested;
    LARGE_INTEGER   NonPagingReadBytesRequested;
    LARGE_INTEGER   CacheReadBytesRequested;
    LARGE_INTEGER   NetworkReadBytesRequested;
    LARGE_INTEGER   BytesTransmitted;
    LARGE_INTEGER   SmbsTransmitted;
    LARGE_INTEGER   PagingWriteBytesRequested;
    LARGE_INTEGER   NonPagingWriteBytesRequested;
    LARGE_INTEGER   CacheWriteBytesRequested;
    LARGE_INTEGER   NetworkWriteBytesRequested;
    DWORD           InitiallyFailedOperations;
    DWORD           FailedCompletionOperations;
    DWORD           ReadOperations;
    DWORD           RandomReadOperations;
    DWORD           ReadSmbs;
    DWORD           LargeReadSmbs;
    DWORD           SmallReadSmbs;
    DWORD           WriteOperations;
    DWORD           RandomWriteOperations;
    DWORD           WriteSmbs;
    DWORD           LargeWriteSmbs;
    DWORD           SmallWriteSmbs;
    DWORD           RawReadsDenied;
    DWORD           RawWritesDenied;
    DWORD           NetworkErrors;
    DWORD           Sessions;
    DWORD           FailedSessions;
    DWORD           Reconnects;
    DWORD           CoreConnects;
    DWORD           Lanman20Connects;
    DWORD           Lanman21Connects;
    DWORD           LanmanNtConnects;
    DWORD           ServerDisconnects;
    DWORD           HungSessions;
    DWORD           UseCount;
    DWORD           FailedUseCount;
    DWORD           CurrentCommands;
} STAT_WORKSTATION_0, *PSTAT_WORKSTATION_0, *LPSTAT_WORKSTATION_0;
#endif
typedef struct _STAT_SERVER_0
{
     DWORD          sts0_start;
     DWORD          sts0_fopens;
     DWORD          sts0_devopens;
     DWORD          sts0_jobsqueued;
     DWORD          sts0_sopens;
     DWORD          sts0_stimedout;
     DWORD          sts0_serrorout;
     DWORD          sts0_pwerrors;
     DWORD          sts0_permerrors;
     DWORD          sts0_syserrors;
     DWORD          sts0_bytessent_low;
     DWORD          sts0_bytessent_high;
     DWORD          sts0_bytesrcvd_low;
     DWORD          sts0_bytesrcvd_high;
     DWORD          sts0_avresponse;
     DWORD          sts0_reqbufneed;
     DWORD          sts0_bigbufneed;
} STAT_SERVER_0, *PSTAT_SERVER_0, *LPSTAT_SERVER_0;
#define STATSOPT_CLR    1
#define STATS_NO_VALUE  ((unsigned long) -1L)
#define STATS_OVERFLOW  ((unsigned long) -2L)
#endif
