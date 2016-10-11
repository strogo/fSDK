/*+@@file@@----------------------------------------------------------------*//*!
 \file		imapi2error.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 21:23:11 2016
 \date		Modified on Sat Jul 16 21:23:11 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _IMAPI2ERROR_
#define _IMAPI2ERROR_
#if __POCC__ >= 500
#pragma once
#endif
#define E_IMAPI_REQUEST_CANCELLED        ((HRESULT)0xC0AA0002L)
#define E_IMAPI_RECORDER_REQUIRED        ((HRESULT)0xC0AA0003L)
#define S_IMAPI_SPEEDADJUSTED            ((HRESULT)0x00AA0004L)
#define S_IMAPI_ROTATIONADJUSTED         ((HRESULT)0x00AA0005L)
#define S_IMAPI_BOTHADJUSTED             ((HRESULT)0x00AA0006L)
#define E_IMAPI_BURN_VERIFICATION_FAILED ((HRESULT)0xC0AA0007L)
#define S_IMAPI_COMMAND_HAS_SENSE_DATA   ((HRESULT)0x00AA0200L)
#define E_IMAPI_RECORDER_NO_SUCH_MODE_PAGE ((HRESULT)0xC0AA0201L)
#define E_IMAPI_RECORDER_MEDIA_NO_MEDIA  ((HRESULT)0xC0AA0202L)
#define E_IMAPI_RECORDER_MEDIA_INCOMPATIBLE ((HRESULT)0xC0AA0203L)
#define E_IMAPI_RECORDER_MEDIA_UPSIDE_DOWN ((HRESULT)0xC0AA0204L)
#define E_IMAPI_RECORDER_MEDIA_BECOMING_READY ((HRESULT)0xC0AA0205L)
#define E_IMAPI_RECORDER_MEDIA_FORMAT_IN_PROGRESS ((HRESULT)0xC0AA0206L)
#define E_IMAPI_RECORDER_MEDIA_BUSY      ((HRESULT)0xC0AA0207L)
#define E_IMAPI_RECORDER_INVALID_MODE_PARAMETERS ((HRESULT)0xC0AA0208L)
#define E_IMAPI_RECORDER_MEDIA_WRITE_PROTECTED ((HRESULT)0xC0AA0209L)
#define E_IMAPI_RECORDER_NO_SUCH_FEATURE ((HRESULT)0xC0AA020AL)
#define E_IMAPI_RECORDER_FEATURE_IS_NOT_CURRENT ((HRESULT)0xC0AA020BL)
#define E_IMAPI_RECORDER_GET_CONFIGURATION_NOT_SUPPORTED ((HRESULT)0xC0AA020CL)
#define E_IMAPI_RECORDER_COMMAND_TIMEOUT ((HRESULT)0xC0AA020DL)
#define E_IMAPI_RECORDER_DVD_STRUCTURE_NOT_PRESENT ((HRESULT)0xC0AA020EL)
#define E_IMAPI_RECORDER_MEDIA_SPEED_MISMATCH ((HRESULT)0xC0AA020FL)
#define E_IMAPI_RECORDER_LOCKED          ((HRESULT)0xC0AA0210L)
#define E_IMAPI_RECORDER_CLIENT_NAME_IS_NOT_VALID ((HRESULT)0xC0AA0211L)
#define E_IMAPI_RECORDER_MEDIA_NOT_FORMATTED ((HRESULT)0xC0AA0212L)
#define E_IMAPI_RECORDER_INVALID_RESPONSE_FROM_DEVICE ((HRESULT)0xC0AA02FFL)
#define E_IMAPI_LOSS_OF_STREAMING        ((HRESULT)0xC0AA0300L)
#define E_IMAPI_UNEXPECTED_RESPONSE_FROM_DEVICE ((HRESULT)0xC0AA0301L)
#define S_IMAPI_WRITE_NOT_IN_PROGRESS    ((HRESULT)0x00AA0302L)
#define E_IMAPI_DF2DATA_WRITE_IN_PROGRESS ((HRESULT)0xC0AA0400L)
#define E_IMAPI_DF2DATA_WRITE_NOT_IN_PROGRESS ((HRESULT)0xC0AA0401L)
#define E_IMAPI_DF2DATA_INVALID_MEDIA_STATE ((HRESULT)0xC0AA0402L)
#define E_IMAPI_DF2DATA_STREAM_NOT_SUPPORTED ((HRESULT)0xC0AA0403L)
#define E_IMAPI_DF2DATA_STREAM_TOO_LARGE_FOR_CURRENT_MEDIA ((HRESULT)0xC0AA0404L)
#define E_IMAPI_DF2DATA_MEDIA_NOT_BLANK  ((HRESULT)0xC0AA0405L)
#define E_IMAPI_DF2DATA_MEDIA_IS_NOT_SUPPORTED ((HRESULT)0xC0AA0406L)
#define E_IMAPI_DF2DATA_RECORDER_NOT_SUPPORTED ((HRESULT)0xC0AA0407L)
#define E_IMAPI_DF2DATA_CLIENT_NAME_IS_NOT_VALID ((HRESULT)0xC0AA0408L)
#define E_IMAPI_DF2TAO_WRITE_IN_PROGRESS ((HRESULT)0xC0AA0500L)
#define E_IMAPI_DF2TAO_WRITE_NOT_IN_PROGRESS ((HRESULT)0xC0AA0501L)
#define E_IMAPI_DF2TAO_MEDIA_IS_NOT_PREPARED ((HRESULT)0xC0AA0502L)
#define E_IMAPI_DF2TAO_MEDIA_IS_PREPARED ((HRESULT)0xC0AA0503L)
#define E_IMAPI_DF2TAO_PROPERTY_FOR_BLANK_MEDIA_ONLY ((HRESULT)0xC0AA0504L)
#define E_IMAPI_DF2TAO_TABLE_OF_CONTENTS_EMPTY_DISC ((HRESULT)0xC0AA0505L)
#define E_IMAPI_DF2TAO_MEDIA_IS_NOT_BLANK ((HRESULT)0xC0AA0506L)
#define E_IMAPI_DF2TAO_MEDIA_IS_NOT_SUPPORTED ((HRESULT)0xC0AA0507L)
#define E_IMAPI_DF2TAO_TRACK_LIMIT_REACHED ((HRESULT)0xC0AA0508L)
#define E_IMAPI_DF2TAO_NOT_ENOUGH_SPACE  ((HRESULT)0xC0AA0509L)
#define E_IMAPI_DF2TAO_NO_RECORDER_SPECIFIED ((HRESULT)0xC0AA050AL)
#define E_IMAPI_DF2TAO_INVALID_ISRC      ((HRESULT)0xC0AA050BL)
#define E_IMAPI_DF2TAO_INVALID_MCN       ((HRESULT)0xC0AA050CL)
#define E_IMAPI_DF2TAO_STREAM_NOT_SUPPORTED ((HRESULT)0xC0AA050DL)
#define E_IMAPI_DF2TAO_RECORDER_NOT_SUPPORTED ((HRESULT)0xC0AA050EL)
#define E_IMAPI_DF2TAO_CLIENT_NAME_IS_NOT_VALID ((HRESULT)0xC0AA050FL)
#define E_IMAPI_DF2RAW_WRITE_IN_PROGRESS ((HRESULT)0xC0AA0600L)
#define E_IMAPI_DF2RAW_WRITE_NOT_IN_PROGRESS ((HRESULT)0xC0AA0601L)
#define E_IMAPI_DF2RAW_MEDIA_IS_NOT_PREPARED ((HRESULT)0xC0AA0602L)
#define E_IMAPI_DF2RAW_MEDIA_IS_PREPARED ((HRESULT)0xC0AA0603L)
#define E_IMAPI_DF2RAW_CLIENT_NAME_IS_NOT_VALID ((HRESULT)0xC0AA0604L)
#define E_IMAPI_DF2RAW_MEDIA_IS_NOT_BLANK ((HRESULT)0xC0AA0606L)
#define E_IMAPI_DF2RAW_MEDIA_IS_NOT_SUPPORTED ((HRESULT)0xC0AA0607L)
#define E_IMAPI_DF2RAW_NOT_ENOUGH_SPACE  ((HRESULT)0xC0AA0609L)
#define E_IMAPI_DF2RAW_NO_RECORDER_SPECIFIED ((HRESULT)0xC0AA060AL)
#define E_IMAPI_DF2RAW_STREAM_NOT_SUPPORTED ((HRESULT)0xC0AA060DL)
#define E_IMAPI_DF2RAW_DATA_BLOCK_TYPE_NOT_SUPPORTED ((HRESULT)0xC0AA060EL)
#define E_IMAPI_DF2RAW_STREAM_LEADIN_TOO_SHORT ((HRESULT)0xC0AA060FL)
#define E_IMAPI_DF2RAW_RECORDER_NOT_SUPPORTED ((HRESULT)0xC0AA0610L)
#define E_IMAPI_ERASE_RECORDER_IN_USE    ((HRESULT)0x80AA0900L)
#define E_IMAPI_ERASE_ONLY_ONE_RECORDER_SUPPORTED ((HRESULT)0x80AA0901L)
#define E_IMAPI_ERASE_DISC_INFORMATION_TOO_SMALL ((HRESULT)0x80AA0902L)
#define E_IMAPI_ERASE_MODE_PAGE_2A_TOO_SMALL ((HRESULT)0x80AA0903L)
#define E_IMAPI_ERASE_MEDIA_IS_NOT_ERASABLE ((HRESULT)0x80AA0904L)
#define E_IMAPI_ERASE_DRIVE_FAILED_ERASE_COMMAND ((HRESULT)0x80AA0905L)
#define E_IMAPI_ERASE_TOOK_LONGER_THAN_ONE_HOUR ((HRESULT)0x80AA0906L)
#define E_IMAPI_ERASE_UNEXPECTED_DRIVE_RESPONSE_DURING_ERASE ((HRESULT)0x80AA0907L)
#define E_IMAPI_ERASE_DRIVE_FAILED_SPINUP_COMMAND ((HRESULT)0x80AA0908L)
#define E_IMAPI_ERASE_MEDIA_IS_NOT_SUPPORTED ((HRESULT)0xC0AA0909L)
#define E_IMAPI_ERASE_RECORDER_NOT_SUPPORTED ((HRESULT)0xC0AA090AL)
#define E_IMAPI_ERASE_CLIENT_NAME_IS_NOT_VALID ((HRESULT)0xC0AA090BL)
#define E_IMAPI_RAW_IMAGE_IS_READ_ONLY   ((HRESULT)0x80AA0A00L)
#define E_IMAPI_RAW_IMAGE_TOO_MANY_TRACKS ((HRESULT)0x80AA0A01L)
#define E_IMAPI_RAW_IMAGE_SECTOR_TYPE_NOT_SUPPORTED ((HRESULT)0x80AA0A02L)
#define E_IMAPI_RAW_IMAGE_NO_TRACKS      ((HRESULT)0x80AA0A03L)
#define E_IMAPI_RAW_IMAGE_TRACKS_ALREADY_ADDED ((HRESULT)0x80AA0A04L)
#define E_IMAPI_RAW_IMAGE_INSUFFICIENT_SPACE ((HRESULT)0x80AA0A05L)
#define E_IMAPI_RAW_IMAGE_TOO_MANY_TRACK_INDEXES ((HRESULT)0x80AA0A06L)
#define E_IMAPI_RAW_IMAGE_TRACK_INDEX_NOT_FOUND ((HRESULT)0x80AA0A07L)
#define S_IMAPI_RAW_IMAGE_TRACK_INDEX_ALREADY_EXISTS ((HRESULT)0x00AA0A08L)
#define E_IMAPI_RAW_IMAGE_TRACK_INDEX_OFFSET_ZERO_CANNOT_BE_CLEARED ((HRESULT)0x80AA0A09L)
#define E_IMAPI_RAW_IMAGE_TRACK_INDEX_TOO_CLOSE_TO_OTHER_INDEX ((HRESULT)0x80AA0A0AL)
#endif