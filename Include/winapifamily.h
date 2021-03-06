#ifndef _INC_WINAPIFAMILY
#define _INC_WINAPIFAMILY
#if __POCC__ >= 500
#pragma once
#endif
#define WINAPI_PARTITION_DESKTOP   0x00000001
#define WINAPI_PARTITION_APP       0x00000002    
#define WINAPI_FAMILY_APP          WINAPI_PARTITION_APP
#define WINAPI_FAMILY_DESKTOP_APP  (WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_APP)    
#ifndef WINAPI_FAMILY
#define WINAPI_FAMILY WINAPI_FAMILY_DESKTOP_APP
#endif
#define WINAPI_FAMILY_PARTITION(Partition)	((WINAPI_FAMILY & Partition) == Partition)
#define WINAPI_FAMILY_ONE_PARTITION(PartitionSet, Partition) ((WINAPI_FAMILY & PartitionSet) == Partition)
#endif
