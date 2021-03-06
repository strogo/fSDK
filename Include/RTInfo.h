/*+@@file@@----------------------------------------------------------------*//*!
 \file		RTInfo.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 20:47:42 2016
 \date		Modified on Fri Sep 16 20:47:42 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __ROUTING_RTINFO_H__
#define __ROUTING_RTINFO_H__
#if __POCC__ >= 500
#pragma once
#endif
#define ALIGN_SIZE      0x00000008
#define ALIGN_SHIFT     (ALIGN_SIZE - 0x00000001)
#define ALIGN_MASK_POINTER  (~(UINT_PTR)ALIGN_SHIFT)
#define ALIGN_MASK_LENGTH   (~ALIGN_SHIFT)
#define ALIGN_MASK          (~ALIGN_SHIFT)
	#define ALIGN_POINTER(ptr)	{                                    							\
								    (ptr) = (PVOID)((DWORD_PTR)(ptr) + ALIGN_SHIFT);            \
								    (ptr) = (PVOID)((DWORD_PTR)(ptr) & ALIGN_MASK_POINTER);     \
								}
#define ALIGN_LENGTH(length)	{                               								\
								    (length) = (DWORD)((length) + ALIGN_SHIFT);                 \
								    (length) = (DWORD)((length) & ALIGN_MASK_LENGTH);           \
								}
#define IS_ALIGNED(ptr)  (((UINT_PTR)(ptr) & ALIGN_SHIFT) == 0x00000000)
typedef struct _RTR_TOC_ENTRY
{
    ULONG	    InfoType;
    ULONG	    InfoSize;
    ULONG	    Count;
    ULONG	    Offset;
}RTR_TOC_ENTRY, *PRTR_TOC_ENTRY;
#define RTR_INFO_BLOCK_VERSION	1
typedef struct _RTR_INFO_BLOCK_HEADER
{
    ULONG			Version;
    ULONG			Size;
    ULONG			TocEntriesCount;
    RTR_TOC_ENTRY   TocEntry[1];
} RTR_INFO_BLOCK_HEADER, *PRTR_INFO_BLOCK_HEADER;
#define GetInfoFromTocEntry(hdr,toc)	(((toc)->Offset < (hdr)->Size) ? ((PVOID)(((PBYTE)(hdr)) + (toc)->Offset)) : NULL)
#endif
