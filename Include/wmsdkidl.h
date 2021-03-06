/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsdkidl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 20 12:25:33 2016
 \date		Modified on Mon Jun 20 12:25:33 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __wmsdkidl_h__
#define __wmsdkidl_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMMediaProps_FWD_DEFINED__
#define __IWMMediaProps_FWD_DEFINED__
typedef interface IWMMediaProps IWMMediaProps;
#endif
#ifndef __IWMVideoMediaProps_FWD_DEFINED__
#define __IWMVideoMediaProps_FWD_DEFINED__
typedef interface IWMVideoMediaProps IWMVideoMediaProps;
#endif
#ifndef __IWMWriter_FWD_DEFINED__
#define __IWMWriter_FWD_DEFINED__
typedef interface IWMWriter IWMWriter;
#endif
#ifndef __IWMDRMWriter_FWD_DEFINED__
#define __IWMDRMWriter_FWD_DEFINED__
typedef interface IWMDRMWriter IWMDRMWriter;
#endif
#ifndef __IWMDRMWriter2_FWD_DEFINED__
#define __IWMDRMWriter2_FWD_DEFINED__
typedef interface IWMDRMWriter2 IWMDRMWriter2;
#endif
#ifndef __IWMDRMWriter3_FWD_DEFINED__
#define __IWMDRMWriter3_FWD_DEFINED__
typedef interface IWMDRMWriter3 IWMDRMWriter3;
#endif
#ifndef __IWMInputMediaProps_FWD_DEFINED__
#define __IWMInputMediaProps_FWD_DEFINED__
typedef interface IWMInputMediaProps IWMInputMediaProps;
#endif
#ifndef __IWMPropertyVault_FWD_DEFINED__
#define __IWMPropertyVault_FWD_DEFINED__
typedef interface IWMPropertyVault IWMPropertyVault;
#endif
#ifndef __IWMIStreamProps_FWD_DEFINED__
#define __IWMIStreamProps_FWD_DEFINED__
typedef interface IWMIStreamProps IWMIStreamProps;
#endif
#ifndef __IWMReader_FWD_DEFINED__
#define __IWMReader_FWD_DEFINED__
typedef interface IWMReader IWMReader;
#endif
#ifndef __IWMSyncReader_FWD_DEFINED__
#define __IWMSyncReader_FWD_DEFINED__
typedef interface IWMSyncReader IWMSyncReader;
#endif
#ifndef __IWMSyncReader2_FWD_DEFINED__
#define __IWMSyncReader2_FWD_DEFINED__
typedef interface IWMSyncReader2 IWMSyncReader2;
#endif
#ifndef __IWMOutputMediaProps_FWD_DEFINED__
#define __IWMOutputMediaProps_FWD_DEFINED__
typedef interface IWMOutputMediaProps IWMOutputMediaProps;
#endif
#ifndef __IWMStatusCallback_FWD_DEFINED__
#define __IWMStatusCallback_FWD_DEFINED__
typedef interface IWMStatusCallback IWMStatusCallback;
#endif
#ifndef __IWMReaderCallback_FWD_DEFINED__
#define __IWMReaderCallback_FWD_DEFINED__
typedef interface IWMReaderCallback IWMReaderCallback;
#endif
#ifndef __IWMCredentialCallback_FWD_DEFINED__
#define __IWMCredentialCallback_FWD_DEFINED__
typedef interface IWMCredentialCallback IWMCredentialCallback;
#endif
#ifndef __IWMMetadataEditor_FWD_DEFINED__
#define __IWMMetadataEditor_FWD_DEFINED__
typedef interface IWMMetadataEditor IWMMetadataEditor;
#endif
#ifndef __IWMMetadataEditor2_FWD_DEFINED__
#define __IWMMetadataEditor2_FWD_DEFINED__
typedef interface IWMMetadataEditor2 IWMMetadataEditor2;
#endif
#ifndef __IWMDRMEditor_FWD_DEFINED__
#define __IWMDRMEditor_FWD_DEFINED__
typedef interface IWMDRMEditor IWMDRMEditor;
#endif
#ifndef __IWMHeaderInfo_FWD_DEFINED__
#define __IWMHeaderInfo_FWD_DEFINED__
typedef interface IWMHeaderInfo IWMHeaderInfo;
#endif
#ifndef __IWMHeaderInfo2_FWD_DEFINED__
#define __IWMHeaderInfo2_FWD_DEFINED__
typedef interface IWMHeaderInfo2 IWMHeaderInfo2;
#endif
#ifndef __IWMHeaderInfo3_FWD_DEFINED__
#define __IWMHeaderInfo3_FWD_DEFINED__
typedef interface IWMHeaderInfo3 IWMHeaderInfo3;
#endif
#ifndef __IWMProfileManager_FWD_DEFINED__
#define __IWMProfileManager_FWD_DEFINED__
typedef interface IWMProfileManager IWMProfileManager;
#endif
#ifndef __IWMProfileManager2_FWD_DEFINED__
#define __IWMProfileManager2_FWD_DEFINED__
typedef interface IWMProfileManager2 IWMProfileManager2;
#endif
#ifndef __IWMProfileManagerLanguage_FWD_DEFINED__
#define __IWMProfileManagerLanguage_FWD_DEFINED__
typedef interface IWMProfileManagerLanguage IWMProfileManagerLanguage;
#endif
#ifndef __IWMProfile_FWD_DEFINED__
#define __IWMProfile_FWD_DEFINED__
typedef interface IWMProfile IWMProfile;
#endif
#ifndef __IWMProfile2_FWD_DEFINED__
#define __IWMProfile2_FWD_DEFINED__
typedef interface IWMProfile2 IWMProfile2;
#endif
#ifndef __IWMProfile3_FWD_DEFINED__
#define __IWMProfile3_FWD_DEFINED__
typedef interface IWMProfile3 IWMProfile3;
#endif
#ifndef __IWMStreamConfig_FWD_DEFINED__
#define __IWMStreamConfig_FWD_DEFINED__
typedef interface IWMStreamConfig IWMStreamConfig;
#endif
#ifndef __IWMStreamConfig2_FWD_DEFINED__
#define __IWMStreamConfig2_FWD_DEFINED__
typedef interface IWMStreamConfig2 IWMStreamConfig2;
#endif
#ifndef __IWMStreamConfig3_FWD_DEFINED__
#define __IWMStreamConfig3_FWD_DEFINED__
typedef interface IWMStreamConfig3 IWMStreamConfig3;
#endif
#ifndef __IWMPacketSize_FWD_DEFINED__
#define __IWMPacketSize_FWD_DEFINED__
typedef interface IWMPacketSize IWMPacketSize;
#endif
#ifndef __IWMPacketSize2_FWD_DEFINED__
#define __IWMPacketSize2_FWD_DEFINED__
typedef interface IWMPacketSize2 IWMPacketSize2;
#endif
#ifndef __IWMStreamList_FWD_DEFINED__
#define __IWMStreamList_FWD_DEFINED__
typedef interface IWMStreamList IWMStreamList;
#endif
#ifndef __IWMMutualExclusion_FWD_DEFINED__
#define __IWMMutualExclusion_FWD_DEFINED__
typedef interface IWMMutualExclusion IWMMutualExclusion;
#endif
#ifndef __IWMMutualExclusion2_FWD_DEFINED__
#define __IWMMutualExclusion2_FWD_DEFINED__
typedef interface IWMMutualExclusion2 IWMMutualExclusion2;
#endif
#ifndef __IWMBandwidthSharing_FWD_DEFINED__
#define __IWMBandwidthSharing_FWD_DEFINED__
typedef interface IWMBandwidthSharing IWMBandwidthSharing;
#endif
#ifndef __IWMStreamPrioritization_FWD_DEFINED__
#define __IWMStreamPrioritization_FWD_DEFINED__
typedef interface IWMStreamPrioritization IWMStreamPrioritization;
#endif
#ifndef __IWMWriterAdvanced_FWD_DEFINED__
#define __IWMWriterAdvanced_FWD_DEFINED__
typedef interface IWMWriterAdvanced IWMWriterAdvanced;
#endif
#ifndef __IWMWriterAdvanced2_FWD_DEFINED__
#define __IWMWriterAdvanced2_FWD_DEFINED__
typedef interface IWMWriterAdvanced2 IWMWriterAdvanced2;
#endif
#ifndef __IWMWriterAdvanced3_FWD_DEFINED__
#define __IWMWriterAdvanced3_FWD_DEFINED__
typedef interface IWMWriterAdvanced3 IWMWriterAdvanced3;
#endif
#ifndef __IWMWriterPreprocess_FWD_DEFINED__
#define __IWMWriterPreprocess_FWD_DEFINED__
typedef interface IWMWriterPreprocess IWMWriterPreprocess;
#endif
#ifndef __IWMWriterPostViewCallback_FWD_DEFINED__
#define __IWMWriterPostViewCallback_FWD_DEFINED__
typedef interface IWMWriterPostViewCallback IWMWriterPostViewCallback;
#endif
#ifndef __IWMWriterPostView_FWD_DEFINED__
#define __IWMWriterPostView_FWD_DEFINED__
typedef interface IWMWriterPostView IWMWriterPostView;
#endif
#ifndef __IWMWriterSink_FWD_DEFINED__
#define __IWMWriterSink_FWD_DEFINED__
typedef interface IWMWriterSink IWMWriterSink;
#endif
#ifndef __IWMRegisterCallback_FWD_DEFINED__
#define __IWMRegisterCallback_FWD_DEFINED__
typedef interface IWMRegisterCallback IWMRegisterCallback;
#endif
#ifndef __IWMWriterFileSink_FWD_DEFINED__
#define __IWMWriterFileSink_FWD_DEFINED__
typedef interface IWMWriterFileSink IWMWriterFileSink;
#endif
#ifndef __IWMWriterFileSink2_FWD_DEFINED__
#define __IWMWriterFileSink2_FWD_DEFINED__
typedef interface IWMWriterFileSink2 IWMWriterFileSink2;
#endif
#ifndef __IWMWriterFileSink3_FWD_DEFINED__
#define __IWMWriterFileSink3_FWD_DEFINED__
typedef interface IWMWriterFileSink3 IWMWriterFileSink3;
#endif
#ifndef __IWMWriterNetworkSink_FWD_DEFINED__
#define __IWMWriterNetworkSink_FWD_DEFINED__
typedef interface IWMWriterNetworkSink IWMWriterNetworkSink;
#endif
#ifndef __IWMClientConnections_FWD_DEFINED__
#define __IWMClientConnections_FWD_DEFINED__
typedef interface IWMClientConnections IWMClientConnections;
#endif
#ifndef __IWMClientConnections2_FWD_DEFINED__
#define __IWMClientConnections2_FWD_DEFINED__
typedef interface IWMClientConnections2 IWMClientConnections2;
#endif
#ifndef __IWMReaderAdvanced_FWD_DEFINED__
#define __IWMReaderAdvanced_FWD_DEFINED__
typedef interface IWMReaderAdvanced IWMReaderAdvanced;
#endif
#ifndef __IWMReaderAdvanced2_FWD_DEFINED__
#define __IWMReaderAdvanced2_FWD_DEFINED__
typedef interface IWMReaderAdvanced2 IWMReaderAdvanced2;
#endif
#ifndef __IWMReaderAdvanced3_FWD_DEFINED__
#define __IWMReaderAdvanced3_FWD_DEFINED__
typedef interface IWMReaderAdvanced3 IWMReaderAdvanced3;
#endif
#ifndef __IWMReaderAdvanced4_FWD_DEFINED__
#define __IWMReaderAdvanced4_FWD_DEFINED__
typedef interface IWMReaderAdvanced4 IWMReaderAdvanced4;
#endif
#ifndef __IWMReaderAdvanced5_FWD_DEFINED__
#define __IWMReaderAdvanced5_FWD_DEFINED__
typedef interface IWMReaderAdvanced5 IWMReaderAdvanced5;
#endif
#ifndef __IWMReaderAdvanced6_FWD_DEFINED__
#define __IWMReaderAdvanced6_FWD_DEFINED__
typedef interface IWMReaderAdvanced6 IWMReaderAdvanced6;
#endif
#ifndef __IWMPlayerHook_FWD_DEFINED__
#define __IWMPlayerHook_FWD_DEFINED__
typedef interface IWMPlayerHook IWMPlayerHook;
#endif
#ifndef __IWMReaderAllocatorEx_FWD_DEFINED__
#define __IWMReaderAllocatorEx_FWD_DEFINED__
typedef interface IWMReaderAllocatorEx IWMReaderAllocatorEx;
#endif
#ifndef __IWMReaderTypeNegotiation_FWD_DEFINED__
#define __IWMReaderTypeNegotiation_FWD_DEFINED__
typedef interface IWMReaderTypeNegotiation IWMReaderTypeNegotiation;
#endif
#ifndef __IWMReaderCallbackAdvanced_FWD_DEFINED__
#define __IWMReaderCallbackAdvanced_FWD_DEFINED__
typedef interface IWMReaderCallbackAdvanced IWMReaderCallbackAdvanced;
#endif
#ifndef __IWMDRMReader_FWD_DEFINED__
#define __IWMDRMReader_FWD_DEFINED__
typedef interface IWMDRMReader IWMDRMReader;
#endif
#ifndef __IWMDRMReader2_FWD_DEFINED__
#define __IWMDRMReader2_FWD_DEFINED__
typedef interface IWMDRMReader2 IWMDRMReader2;
#endif
#ifndef __IWMDRMReader3_FWD_DEFINED__
#define __IWMDRMReader3_FWD_DEFINED__
typedef interface IWMDRMReader3 IWMDRMReader3;
#endif
#ifndef __IWMReaderPlaylistBurn_FWD_DEFINED__
#define __IWMReaderPlaylistBurn_FWD_DEFINED__
typedef interface IWMReaderPlaylistBurn IWMReaderPlaylistBurn;
#endif
#ifndef __IWMReaderNetworkConfig_FWD_DEFINED__
#define __IWMReaderNetworkConfig_FWD_DEFINED__
typedef interface IWMReaderNetworkConfig IWMReaderNetworkConfig;
#endif
#ifndef __IWMReaderNetworkConfig2_FWD_DEFINED__
#define __IWMReaderNetworkConfig2_FWD_DEFINED__
typedef interface IWMReaderNetworkConfig2 IWMReaderNetworkConfig2;
#endif
#ifndef __IWMReaderStreamClock_FWD_DEFINED__
#define __IWMReaderStreamClock_FWD_DEFINED__
typedef interface IWMReaderStreamClock IWMReaderStreamClock;
#endif
#ifndef __IWMIndexer_FWD_DEFINED__
#define __IWMIndexer_FWD_DEFINED__
typedef interface IWMIndexer IWMIndexer;
#endif
#ifndef __IWMIndexer2_FWD_DEFINED__
#define __IWMIndexer2_FWD_DEFINED__
typedef interface IWMIndexer2 IWMIndexer2;
#endif
#ifndef __IWMLicenseBackup_FWD_DEFINED__
#define __IWMLicenseBackup_FWD_DEFINED__
typedef interface IWMLicenseBackup IWMLicenseBackup;
#endif
#ifndef __IWMLicenseRestore_FWD_DEFINED__
#define __IWMLicenseRestore_FWD_DEFINED__
typedef interface IWMLicenseRestore IWMLicenseRestore;
#endif
#ifndef __IWMBackupRestoreProps_FWD_DEFINED__
#define __IWMBackupRestoreProps_FWD_DEFINED__
typedef interface IWMBackupRestoreProps IWMBackupRestoreProps;
#endif
#ifndef __IWMCodecInfo_FWD_DEFINED__
#define __IWMCodecInfo_FWD_DEFINED__
typedef interface IWMCodecInfo IWMCodecInfo;
#endif
#ifndef __IWMCodecInfo2_FWD_DEFINED__
#define __IWMCodecInfo2_FWD_DEFINED__
typedef interface IWMCodecInfo2 IWMCodecInfo2;
#endif
#ifndef __IWMCodecInfo3_FWD_DEFINED__
#define __IWMCodecInfo3_FWD_DEFINED__
typedef interface IWMCodecInfo3 IWMCodecInfo3;
#endif
#ifndef __IWMLanguageList_FWD_DEFINED__
#define __IWMLanguageList_FWD_DEFINED__
typedef interface IWMLanguageList IWMLanguageList;
#endif
#ifndef __IWMWriterPushSink_FWD_DEFINED__
#define __IWMWriterPushSink_FWD_DEFINED__
typedef interface IWMWriterPushSink IWMWriterPushSink;
#endif
#ifndef __IWMDeviceRegistration_FWD_DEFINED__
#define __IWMDeviceRegistration_FWD_DEFINED__
typedef interface IWMDeviceRegistration IWMDeviceRegistration;
#endif
#ifndef __IWMRegisteredDevice_FWD_DEFINED__
#define __IWMRegisteredDevice_FWD_DEFINED__
typedef interface IWMRegisteredDevice IWMRegisteredDevice;
#endif
#ifndef __IWMProximityDetection_FWD_DEFINED__
#define __IWMProximityDetection_FWD_DEFINED__
typedef interface IWMProximityDetection IWMProximityDetection;
#endif
#ifndef __IWMDRMMessageParser_FWD_DEFINED__
#define __IWMDRMMessageParser_FWD_DEFINED__
typedef interface IWMDRMMessageParser IWMDRMMessageParser;
#endif
#ifndef __IWMDRMTranscryptor_FWD_DEFINED__
#define __IWMDRMTranscryptor_FWD_DEFINED__
typedef interface IWMDRMTranscryptor IWMDRMTranscryptor;
#endif
#ifndef __IWMDRMTranscryptor2_FWD_DEFINED__
#define __IWMDRMTranscryptor2_FWD_DEFINED__
typedef interface IWMDRMTranscryptor2 IWMDRMTranscryptor2;
#endif
#ifndef __IWMDRMTranscryptionManager_FWD_DEFINED__
#define __IWMDRMTranscryptionManager_FWD_DEFINED__
typedef interface IWMDRMTranscryptionManager IWMDRMTranscryptionManager;
#endif
#ifndef __IWMWatermarkInfo_FWD_DEFINED__
#define __IWMWatermarkInfo_FWD_DEFINED__
typedef interface IWMWatermarkInfo IWMWatermarkInfo;
#endif
#ifndef __IWMReaderAccelerator_FWD_DEFINED__
#define __IWMReaderAccelerator_FWD_DEFINED__
typedef interface IWMReaderAccelerator IWMReaderAccelerator;
#endif
#ifndef __IWMReaderTimecode_FWD_DEFINED__
#define __IWMReaderTimecode_FWD_DEFINED__
typedef interface IWMReaderTimecode IWMReaderTimecode;
#endif
#ifndef __IWMAddressAccess_FWD_DEFINED__
#define __IWMAddressAccess_FWD_DEFINED__
typedef interface IWMAddressAccess IWMAddressAccess;
#endif
#ifndef __IWMAddressAccess2_FWD_DEFINED__
#define __IWMAddressAccess2_FWD_DEFINED__
typedef interface IWMAddressAccess2 IWMAddressAccess2;
#endif
#ifndef __IWMImageInfo_FWD_DEFINED__
#define __IWMImageInfo_FWD_DEFINED__
typedef interface IWMImageInfo IWMImageInfo;
#endif
#ifndef __IWMLicenseRevocationAgent_FWD_DEFINED__
#define __IWMLicenseRevocationAgent_FWD_DEFINED__
typedef interface IWMLicenseRevocationAgent IWMLicenseRevocationAgent;
#endif
#include <oaidl.h>
#include <wmsbuffer.h>
#include <drmexternals.h>
#ifdef INITGUID
typedef unsigned __int64 QWORD;
static const DWORD g_dwWMSpecialAttributes = 20;
static const WCHAR g_wszWMDuration[] =L"Duration";
static const WCHAR g_wszWMBitrate[] =L"Bitrate";
static const WCHAR g_wszWMSeekable[] =L"Seekable";
static const WCHAR g_wszWMStridable[] =L"Stridable";
static const WCHAR g_wszWMBroadcast[] =L"Broadcast";
static const WCHAR g_wszWMProtected[] =L"Is_Protected";
static const WCHAR g_wszWMTrusted[] =L"Is_Trusted";
static const WCHAR g_wszWMSignature_Name[] =L"Signature_Name";
static const WCHAR g_wszWMHasAudio[] =L"HasAudio";
static const WCHAR g_wszWMHasImage[] =L"HasImage";
static const WCHAR g_wszWMHasScript[] =L"HasScript";
static const WCHAR g_wszWMHasVideo[] =L"HasVideo";
static const WCHAR g_wszWMCurrentBitrate[] =L"CurrentBitrate";
static const WCHAR g_wszWMOptimalBitrate[] =L"OptimalBitrate";
static const WCHAR g_wszWMHasAttachedImages[] =L"HasAttachedImages";
static const WCHAR g_wszWMSkipBackward[] =L"Can_Skip_Backward";
static const WCHAR g_wszWMSkipForward[] =L"Can_Skip_Forward";
static const WCHAR g_wszWMNumberOfFrames[] =L"NumberOfFrames";
static const WCHAR g_wszWMFileSize[] =L"FileSize";
static const WCHAR g_wszWMHasArbitraryDataStream[] =L"HasArbitraryDataStream";
static const WCHAR g_wszWMHasFileTransferStream[] =L"HasFileTransferStream";
static const WCHAR g_wszWMContainerFormat[] =L"WM/ContainerFormat";
static const DWORD g_dwWMContentAttributes = 5;
static const WCHAR g_wszWMTitle[] =L"Title";
static const WCHAR g_wszWMAuthor[] =L"Author";
static const WCHAR g_wszWMDescription[] =L"Description";
static const WCHAR g_wszWMRating[] =L"Rating";
static const WCHAR g_wszWMCopyright[] =L"Copyright";
static const WCHAR g_wszWMUse_DRM[] = L"Use_DRM";
static const WCHAR g_wszWMDRM_Flags[] = L"DRM_Flags";
static const WCHAR g_wszWMDRM_Level[] = L"DRM_Level";
static const WCHAR g_wszWMUse_Advanced_DRM[] = L"Use_Advanced_DRM";
static const WCHAR g_wszWMDRM_KeySeed[] = L"DRM_KeySeed";
static const WCHAR g_wszWMDRM_KeyID[] = L"DRM_KeyID";
static const WCHAR g_wszWMDRM_ContentID[] = L"DRM_ContentID";
static const WCHAR g_wszWMDRM_SourceID[] = L"DRM_SourceID";
static const WCHAR g_wszWMDRM_IndividualizedVersion[] = L"DRM_IndividualizedVersion";
static const WCHAR g_wszWMDRM_LicenseAcqURL[] = L"DRM_LicenseAcqURL";
static const WCHAR g_wszWMDRM_V1LicenseAcqURL[] = L"DRM_V1LicenseAcqURL";
static const WCHAR g_wszWMDRM_HeaderSignPrivKey[] = L"DRM_HeaderSignPrivKey";
static const WCHAR g_wszWMDRM_LASignaturePrivKey[] = L"DRM_LASignaturePrivKey";
static const WCHAR g_wszWMDRM_LASignatureCert[] = L"DRM_LASignatureCert";
static const WCHAR g_wszWMDRM_LASignatureLicSrvCert[] = L"DRM_LASignatureLicSrvCert";
static const WCHAR g_wszWMDRM_LASignatureRootCert[] = L"DRM_LASignatureRootCert";
static const WCHAR g_wszWMAlbumTitle[] =L"WM/AlbumTitle";
static const WCHAR g_wszWMTrack[] =L"WM/Track";
static const WCHAR g_wszWMPromotionURL[] =L"WM/PromotionURL";
static const WCHAR g_wszWMAlbumCoverURL[] =L"WM/AlbumCoverURL";
static const WCHAR g_wszWMGenre[] =L"WM/Genre";
static const WCHAR g_wszWMYear[] =L"WM/Year";
static const WCHAR g_wszWMGenreID[] =L"WM/GenreID";
static const WCHAR g_wszWMMCDI[] =L"WM/MCDI";
static const WCHAR g_wszWMComposer[] =L"WM/Composer";
static const WCHAR g_wszWMLyrics[] =L"WM/Lyrics";
static const WCHAR g_wszWMTrackNumber[] =L"WM/TrackNumber";
static const WCHAR g_wszWMToolName[] =L"WM/ToolName";
static const WCHAR g_wszWMToolVersion[] =L"WM/ToolVersion";
static const WCHAR g_wszWMIsVBR[] =L"IsVBR";
static const WCHAR g_wszWMAlbumArtist[] =L"WM/AlbumArtist";
static const WCHAR g_wszWMBannerImageType[] =L"BannerImageType";
static const WCHAR g_wszWMBannerImageData[] =L"BannerImageData";
static const WCHAR g_wszWMBannerImageURL[] =L"BannerImageURL";
static const WCHAR g_wszWMCopyrightURL[] =L"CopyrightURL";
static const WCHAR g_wszWMAspectRatioX[] =L"AspectRatioX";
static const WCHAR g_wszWMAspectRatioY[] =L"AspectRatioY";
static const WCHAR g_wszASFLeakyBucketPairs[] =L"ASFLeakyBucketPairs";
static const DWORD g_dwWMNSCAttributes = 5;
static const WCHAR g_wszWMNSCName[] =L"NSC_Name";
static const WCHAR g_wszWMNSCAddress[] =L"NSC_Address";
static const WCHAR g_wszWMNSCPhone[] =L"NSC_Phone";
static const WCHAR g_wszWMNSCEmail[] =L"NSC_Email";
static const WCHAR g_wszWMNSCDescription[] =L"NSC_Description";
static const WCHAR g_wszWMWriter[] =L"WM/Writer";
static const WCHAR g_wszWMConductor[] =L"WM/Conductor";
static const WCHAR g_wszWMProducer[] =L"WM/Producer";
static const WCHAR g_wszWMDirector[] =L"WM/Director";
static const WCHAR g_wszWMContentGroupDescription[] =L"WM/ContentGroupDescription";
static const WCHAR g_wszWMSubTitle[] =L"WM/SubTitle";
static const WCHAR g_wszWMPartOfSet[] =L"WM/PartOfSet";
static const WCHAR g_wszWMProtectionType[] =L"WM/ProtectionType";
static const WCHAR g_wszWMVideoHeight[] =L"WM/VideoHeight";
static const WCHAR g_wszWMVideoWidth[] =L"WM/VideoWidth";
static const WCHAR g_wszWMVideoFrameRate[] =L"WM/VideoFrameRate";
static const WCHAR g_wszWMMediaClassPrimaryID[] =L"WM/MediaClassPrimaryID";
static const WCHAR g_wszWMMediaClassSecondaryID[] =L"WM/MediaClassSecondaryID";
static const WCHAR g_wszWMPeriod[] = L"WM/Period";
static const WCHAR g_wszWMCategory[] = L"WM/Category";
static const WCHAR g_wszWMPicture[] =L"WM/Picture";
static const WCHAR g_wszWMLyrics_Synchronised[] =L"WM/Lyrics_Synchronised";
static const WCHAR g_wszWMOriginalLyricist[] =L"WM/OriginalLyricist";
static const WCHAR g_wszWMOriginalArtist[] =L"WM/OriginalArtist";
static const WCHAR g_wszWMOriginalAlbumTitle[] =L"WM/OriginalAlbumTitle";
static const WCHAR g_wszWMOriginalReleaseYear[] =L"WM/OriginalReleaseYear";
static const WCHAR g_wszWMOriginalFilename[] =L"WM/OriginalFilename";
static const WCHAR g_wszWMPublisher[] =L"WM/Publisher";
static const WCHAR g_wszWMEncodedBy[] =L"WM/EncodedBy";
static const WCHAR g_wszWMEncodingSettings[] =L"WM/EncodingSettings";
static const WCHAR g_wszWMEncodingTime[] =L"WM/EncodingTime";
static const WCHAR g_wszWMAuthorURL[] =L"WM/AuthorURL";
static const WCHAR g_wszWMUserWebURL[] =L"WM/UserWebURL";
static const WCHAR g_wszWMAudioFileURL[] =L"WM/AudioFileURL";
static const WCHAR g_wszWMAudioSourceURL[] =L"WM/AudioSourceURL";
static const WCHAR g_wszWMLanguage[] =L"WM/Language";
static const WCHAR g_wszWMParentalRating[] =L"WM/ParentalRating";
static const WCHAR g_wszWMBeatsPerMinute[] =L"WM/BeatsPerMinute";
static const WCHAR g_wszWMInitialKey[] =L"WM/InitialKey";
static const WCHAR g_wszWMMood[] =L"WM/Mood";
static const WCHAR g_wszWMText[] =L"WM/Text";
static const WCHAR g_wszWMDVDID[] =L"WM/DVDID";
static const WCHAR g_wszWMWMContentID[] =L"WM/WMContentID";
static const WCHAR g_wszWMWMCollectionID[] =L"WM/WMCollectionID";
static const WCHAR g_wszWMWMCollectionGroupID[] =L"WM/WMCollectionGroupID";
static const WCHAR g_wszWMUniqueFileIdentifier[] =L"WM/UniqueFileIdentifier";
static const WCHAR g_wszWMModifiedBy[] =L"WM/ModifiedBy";
static const WCHAR g_wszWMRadioStationName[] =L"WM/RadioStationName";
static const WCHAR g_wszWMRadioStationOwner[] =L"WM/RadioStationOwner";
static const WCHAR g_wszWMPlaylistDelay[] =L"WM/PlaylistDelay";
static const WCHAR g_wszWMCodec[] =L"WM/Codec";
static const WCHAR g_wszWMDRM[] =L"WM/DRM";
static const WCHAR g_wszWMISRC[] =L"WM/ISRC";
static const WCHAR g_wszWMProvider[] =L"WM/Provider";
static const WCHAR g_wszWMProviderRating[] =L"WM/ProviderRating";
static const WCHAR g_wszWMProviderStyle[] =L"WM/ProviderStyle";
static const WCHAR g_wszWMContentDistributor[] =L"WM/ContentDistributor";
static const WCHAR g_wszWMSubscriptionContentID[] =L"WM/SubscriptionContentID";
static const WCHAR g_wszWMWMADRCPeakReference[] =L"WM/WMADRCPeakReference";
static const WCHAR g_wszWMWMADRCPeakTarget[] =L"WM/WMADRCPeakTarget";
static const WCHAR g_wszWMWMADRCAverageReference[] =L"WM/WMADRCAverageReference";
static const WCHAR g_wszWMWMADRCAverageTarget[] =L"WM/WMADRCAverageTarget";
static const WCHAR g_wszWMStreamTypeInfo[] = L"WM/StreamTypeInfo";
static const WCHAR g_wszWMPeakBitrate[] = L"WM/PeakBitrate";
static const WCHAR g_wszWMASFPacketCount[] = L"WM/ASFPacketCount";
static const WCHAR g_wszWMASFSecurityObjectsSize[] = L"WM/ASFSecurityObjectsSize";
static const WCHAR g_wszWMSharedUserRating[] = L"WM/SharedUserRating";
static const WCHAR g_wszWMSubTitleDescription[] = L"WM/SubTitleDescription";
static const WCHAR g_wszWMMediaCredits[] = L"WM/MediaCredits";
static const WCHAR g_wszWMParentalRatingReason[] = L"WM/ParentalRatingReason";
static const WCHAR g_wszWMOriginalReleaseTime[] = L"WM/OriginalReleaseTime";
static const WCHAR g_wszWMMediaStationCallSign[] = L"WM/MediaStationCallSign";
static const WCHAR g_wszWMMediaStationName[] = L"WM/MediaStationName";
static const WCHAR g_wszWMMediaNetworkAffiliation[] = L"WM/MediaNetworkAffiliation";
static const WCHAR g_wszWMMediaOriginalChannel[] = L"WM/MediaOriginalChannel";
static const WCHAR g_wszWMMediaOriginalBroadcastDateTime[] = L"WM/MediaOriginalBroadcastDateTime";
static const WCHAR g_wszWMMediaIsStereo[] = L"WM/MediaIsStereo";
static const WCHAR g_wszWMVideoClosedCaptioning[] = L"WM/VideoClosedCaptioning";
static const WCHAR g_wszWMMediaIsRepeat[] = L"WM/MediaIsRepeat";
static const WCHAR g_wszWMMediaIsLive[] = L"WM/MediaIsLive";
static const WCHAR g_wszWMMediaIsTape[] = L"WM/MediaIsTape";
static const WCHAR g_wszWMMediaIsDelay[] = L"WM/MediaIsDelay";
static const WCHAR g_wszWMMediaIsSubtitled[] = L"WM/MediaIsSubtitled";
static const WCHAR g_wszWMMediaIsPremiere[] = L"WM/MediaIsPremiere";
static const WCHAR g_wszWMMediaIsFinale[] = L"WM/MediaIsFinale";
static const WCHAR g_wszWMMediaIsSAP[] = L"WM/MediaIsSAP";
static const WCHAR g_wszWMProviderCopyright[] = L"WM/ProviderCopyright";
static const WCHAR g_wszWMISAN[] = L"WM/ISAN";
static const WCHAR g_wszWMADID[] = L"WM/ADID";
static const WCHAR g_wszWMWMShadowFileSourceFileType[] = L"WM/WMShadowFileSourceFileType";
static const WCHAR g_wszWMWMShadowFileSourceDRMType[] = L"WM/WMShadowFileSourceDRMType";
static const WCHAR g_wszWMWMCPDistributor[] =L"WM/WMCPDistributor";
static const WCHAR g_wszWMWMCPDistributorID[] =L"WM/WMCPDistributorID";
static const WCHAR g_wszWMSeasonNumber[] =L"WM/SeasonNumber";
static const WCHAR g_wszWMEpisodeNumber[] =L"WM/EpisodeNumber";
static const WCHAR g_wszEarlyDataDelivery[] =L"EarlyDataDelivery";
static const WCHAR g_wszJustInTimeDecode[] =L"JustInTimeDecode";
static const WCHAR g_wszSingleOutputBuffer[] =L"SingleOutputBuffer";
static const WCHAR g_wszSoftwareScaling[] =L"SoftwareScaling";
static const WCHAR g_wszDeliverOnReceive[] =L"DeliverOnReceive";
static const WCHAR g_wszScrambledAudio[] =L"ScrambledAudio";
static const WCHAR g_wszDedicatedDeliveryThread[] =L"DedicatedDeliveryThread";
static const WCHAR g_wszEnableDiscreteOutput[] = L"EnableDiscreteOutput";
static const WCHAR g_wszSpeakerConfig[] = L"SpeakerConfig";
static const WCHAR g_wszDynamicRangeControl[] = L"DynamicRangeControl";
static const WCHAR g_wszAllowInterlacedOutput[] = L"AllowInterlacedOutput";
static const WCHAR g_wszVideoSampleDurations[] =L"VideoSampleDurations";
static const WCHAR g_wszStreamLanguage[] =L"StreamLanguage";
static const WCHAR g_wszEnableWMAProSPDIFOutput[] = L"EnableWMAProSPDIFOutput";
static const WCHAR g_wszDeinterlaceMode[] =L"DeinterlaceMode";
static const WCHAR g_wszInitialPatternForInverseTelecine[] =L"InitialPatternForInverseTelecine";
static const WCHAR g_wszJPEGCompressionQuality[] =L"JPEGCompressionQuality";
static const WCHAR g_wszWatermarkCLSID[] =L"WatermarkCLSID";
static const WCHAR g_wszWatermarkConfig[] =L"WatermarkConfig";
static const WCHAR g_wszInterlacedCoding[] =L"InterlacedCoding";
static const WCHAR g_wszFixedFrameRate[] =L"FixedFrameRate";
static const WCHAR g_wszOriginalSourceFormatTag[] =L"_SOURCEFORMATTAG";
static const WCHAR g_wszOriginalWaveFormat[] =L"_ORIGINALWAVEFORMAT";
static const WCHAR g_wszEDL[] =L"_EDL";
static const WCHAR g_wszComplexity[] =L"_COMPLEXITYEX";
static const WCHAR g_wszDecoderComplexityRequested[] =L"_DECODERCOMPLEXITYPROFILE";
static const WCHAR g_wszReloadIndexOnSeek[] =L"ReloadIndexOnSeek";
static const WCHAR g_wszStreamNumIndexObjects[] =L"StreamNumIndexObjects";
static const WCHAR g_wszFailSeekOnError[] =L"FailSeekOnError";
static const WCHAR g_wszPermitSeeksBeyondEndOfStream[] =L"PermitSeeksBeyondEndOfStream";
static const WCHAR g_wszUsePacketAtSeekPoint[] =L"UsePacketAtSeekPoint";
static const WCHAR g_wszSourceBufferTime[] =L"SourceBufferTime";
static const WCHAR g_wszSourceMaxBytesAtOnce[] =L"SourceMaxBytesAtOnce";
static const WCHAR g_wszVBREnabled[] =L"_VBRENABLED";
static const WCHAR g_wszVBRQuality[] =L"_VBRQUALITY";
static const WCHAR g_wszVBRBitrateMax[] =L"_RMAX";
static const WCHAR g_wszVBRBufferWindowMax[] =L"_BMAX";
static const WCHAR g_wszVBRPeak[] = L"VBR Peak";
static const WCHAR g_wszBufferAverage[] = L"Buffer Average";
static const WCHAR g_wszComplexityMax[] =L"_COMPLEXITYEXMAX";
static const WCHAR g_wszComplexityOffline[] =L"_COMPLEXITYEXOFFLINE";
static const WCHAR g_wszComplexityLive[] =L"_COMPLEXITYEXLIVE";
static const WCHAR g_wszIsVBRSupported[] =L"_ISVBRSUPPORTED";
static const WCHAR g_wszNumPasses[] = L"_PASSESUSED";
static const WCHAR g_wszMusicSpeechClassMode[] = L"MusicSpeechClassMode";
static const WCHAR g_wszMusicClassMode[] = L"MusicClassMode";
static const WCHAR g_wszSpeechClassMode[] = L"SpeechClassMode";
static const WCHAR g_wszMixedClassMode[] = L"MixedClassMode";
static const WCHAR g_wszSpeechCaps[] = L"SpeechFormatCap";
static const WCHAR g_wszPeakValue[] = L"PeakValue";
static const WCHAR g_wszAverageLevel[] = L"AverageLevel";
static const WCHAR g_wszFold6To2Channels3[] = L"Fold6To2Channels3";
static const WCHAR g_wszFoldToChannelsTemplate[] = L"Fold%luTo%luChannels%lu";
static const WCHAR g_wszDeviceConformanceTemplate[] = L"DeviceConformanceTemplate";
static const WCHAR g_wszEnableFrameInterpolation[] =L"EnableFrameInterpolation";
static const WCHAR g_wszNeedsPreviousSample[] =L"NeedsPreviousSample";
static const WCHAR g_wszWMIsCompilation[] = L"WM/IsCompilation";
#endif
#define WM_START_CURRENTPOSITION     ( ( QWORD )-1 )
#define WM_BACKUP_OVERWRITE    ((DWORD) 0x00000001)
#define WM_RESTORE_INDIVIDUALIZE    ((DWORD) 0x00000002)
#define WAVE_FORMAT_DRM            0x0009
typedef LPCWSTR LPCWSTR_WMSDK_TYPE_SAFE;
#ifdef WMSDK_TYPE_SAFE
#define LPCWSTR_WMSDK_TYPE_SAFE LPCWSTR
#else
#define LPCWSTR_WMSDK_TYPE_SAFE LPWSTR
#endif
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0001 { WEBSTREAM_SAMPLE_TYPE_FILE = 0x1, WEBSTREAM_SAMPLE_TYPE_RENDER = 0x2};
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0002 { WM_SF_CLEANPOINT	= 0x1, WM_SF_DISCONTINUITY	= 0x2, WM_SF_DATALOSS	= 0x4};
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0003 { WM_SFEX_NOTASYNCPOINT	= 0x2, WM_SFEX_DATALOSS	= 0x4};
typedef enum WMT_STATUS
{
	WMT_ERROR	= 0,
	WMT_OPENED	= 1,
	WMT_BUFFERING_START	= 2,
	WMT_BUFFERING_STOP	= 3,
	WMT_EOF	= 4,
	WMT_END_OF_FILE	= 4,
	WMT_END_OF_SEGMENT	= 5,
	WMT_END_OF_STREAMING	= 6,
	WMT_LOCATING	= 7,
	WMT_CONNECTING	= 8,
	WMT_NO_RIGHTS	= 9,
	WMT_MISSING_CODEC	= 10,
	WMT_STARTED	= 11,
	WMT_STOPPED	= 12,
	WMT_CLOSED	= 13,
	WMT_STRIDING	= 14,
	WMT_TIMER	= 15,
	WMT_INDEX_PROGRESS	= 16,
	WMT_SAVEAS_START	= 17,
	WMT_SAVEAS_STOP	= 18,
	WMT_NEW_SOURCEFLAGS	= 19,
	WMT_NEW_METADATA	= 20,
	WMT_BACKUPRESTORE_BEGIN	= 21,
	WMT_SOURCE_SWITCH	= 22,
	WMT_ACQUIRE_LICENSE	= 23,
	WMT_INDIVIDUALIZE	= 24,
	WMT_NEEDS_INDIVIDUALIZATION	= 25,
	WMT_NO_RIGHTS_EX	= 26,
	WMT_BACKUPRESTORE_END	= 27,
	WMT_BACKUPRESTORE_CONNECTING	= 28,
	WMT_BACKUPRESTORE_DISCONNECTING	= 29,
	WMT_ERROR_WITHURL	= 30,
	WMT_RESTRICTED_LICENSE	= 31,
	WMT_CLIENT_CONNECT	= 32,
	WMT_CLIENT_DISCONNECT	= 33,
	WMT_NATIVE_OUTPUT_PROPS_CHANGED	= 34,
	WMT_RECONNECT_START	= 35,
	WMT_RECONNECT_END	= 36,
	WMT_CLIENT_CONNECT_EX	= 37,
	WMT_CLIENT_DISCONNECT_EX	= 38,
	WMT_SET_FEC_SPAN	= 39,
	WMT_PREROLL_READY	= 40,
	WMT_PREROLL_COMPLETE	= 41,
	WMT_CLIENT_PROPERTIES	= 42,
	WMT_LICENSEURL_SIGNATURE_STATE	= 43,
	WMT_INIT_PLAYLIST_BURN	= 44,
	WMT_TRANSCRYPTOR_INIT	= 45,
	WMT_TRANSCRYPTOR_SEEKED	= 46,
	WMT_TRANSCRYPTOR_READ	= 47,
	WMT_TRANSCRYPTOR_CLOSED	= 48,
	WMT_PROXIMITY_RESULT	= 49,
	WMT_PROXIMITY_COMPLETED	= 50,
	WMT_CONTENT_ENABLER	= 51
} WMT_STATUS;
typedef enum WMT_STREAM_SELECTION
{
	WMT_OFF = 0,
	WMT_CLEANPOINT_ONLY = 1,
	WMT_ON = 2
} WMT_STREAM_SELECTION;
typedef enum WMT_IMAGE_TYPE
{
	WMT_IT_NONE	= 0,
	WMT_IT_BITMAP	= 1,
	WMT_IT_JPEG	= 2,
	WMT_IT_GIF	= 3
} WMT_IMAGE_TYPE;
typedef enum WMT_ATTR_DATATYPE
{
	WMT_TYPE_DWORD	= 0,
	WMT_TYPE_STRING	= 1,
	WMT_TYPE_BINARY	= 2,
	WMT_TYPE_BOOL	= 3,
	WMT_TYPE_QWORD	= 4,
	WMT_TYPE_WORD	= 5,
	WMT_TYPE_GUID	= 6
} WMT_ATTR_DATATYPE;
typedef enum WMT_ATTR_IMAGETYPE
{
	WMT_IMAGETYPE_BITMAP	= 1,
	WMT_IMAGETYPE_JPEG	= 2,
	WMT_IMAGETYPE_GIF	= 3
} WMT_ATTR_IMAGETYPE;
typedef enum WMT_VERSION
{
	WMT_VER_4_0	= 0x40000,
	WMT_VER_7_0	= 0x70000,
	WMT_VER_8_0	= 0x80000,
	WMT_VER_9_0	= 0x90000
} WMT_VERSION;
typedef enum tagWMT_STORAGE_FORMAT
{
	WMT_Storage_Format_MP3	= 0,
	WMT_Storage_Format_V1	= ( WMT_Storage_Format_MP3 + 1 ) 
} WMT_STORAGE_FORMAT;
typedef enum tagWMT_DRMLA_TRUST
{
	WMT_DRMLA_UNTRUSTED	= 0,
	WMT_DRMLA_TRUSTED	= ( WMT_DRMLA_UNTRUSTED + 1 ) ,
	WMT_DRMLA_TAMPERED	= ( WMT_DRMLA_TRUSTED + 1 ) 
} WMT_DRMLA_TRUST;
typedef enum tagWMT_TRANSPORT_TYPE
{
	WMT_Transport_Type_Unreliable	= 0,
	WMT_Transport_Type_Reliable	= ( WMT_Transport_Type_Unreliable + 1 ) 
} WMT_TRANSPORT_TYPE;
typedef enum WMT_NET_PROTOCOL
{
	WMT_PROTOCOL_HTTP	= 0
} WMT_NET_PROTOCOL;
typedef enum WMT_PLAY_MODE
{
	WMT_PLAY_MODE_AUTOSELECT	= 0,
	WMT_PLAY_MODE_LOCAL	= 1,
	WMT_PLAY_MODE_DOWNLOAD	= 2,
	WMT_PLAY_MODE_STREAMING	= 3
} WMT_PLAY_MODE;
typedef enum WMT_PROXY_SETTINGS
{
	WMT_PROXY_SETTING_NONE	= 0,
	WMT_PROXY_SETTING_MANUAL	= 1,
	WMT_PROXY_SETTING_AUTO	= 2,
	WMT_PROXY_SETTING_BROWSER	= 3,
	WMT_PROXY_SETTING_MAX	= ( WMT_PROXY_SETTING_BROWSER + 1 ) 
} WMT_PROXY_SETTINGS;
typedef enum WMT_CODEC_INFO_TYPE
{
	WMT_CODECINFO_AUDIO	= 0,
	WMT_CODECINFO_VIDEO	= 1,
	WMT_CODECINFO_UNKNOWN	= 0xffffffff
} WMT_CODEC_INFO_TYPE;
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0004
{
	WM_DM_NOTINTERLACED	= 0,
	WM_DM_DEINTERLACE_NORMAL	= 1,
	WM_DM_DEINTERLACE_HALFSIZE	= 2,
	WM_DM_DEINTERLACE_HALFSIZEDOUBLERATE	= 3,
	WM_DM_DEINTERLACE_INVERSETELECINE	= 4,
	WM_DM_DEINTERLACE_VERTICALHALFSIZEDOUBLERATE	= 5
};
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0005
{
	WM_DM_IT_DISABLE_COHERENT_MODE	= 0,
	WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_AA_TOP	= 1,
	WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BB_TOP	= 2,
	WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BC_TOP	= 3,
	WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_CD_TOP	= 4,
	WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_DD_TOP	= 5,
	WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_AA_BOTTOM	= 6,
	WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BB_BOTTOM	= 7,
	WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BC_BOTTOM	= 8,
	WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_CD_BOTTOM	= 9,
	WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_DD_BOTTOM	= 10
};
typedef enum tagWMT_OFFSET_FORMAT
{
	WMT_OFFSET_FORMAT_100NS	= 0,
	WMT_OFFSET_FORMAT_FRAME_NUMBERS	= ( WMT_OFFSET_FORMAT_100NS + 1 ) ,
	WMT_OFFSET_FORMAT_PLAYLIST_OFFSET	= ( WMT_OFFSET_FORMAT_FRAME_NUMBERS + 1 ) ,
	WMT_OFFSET_FORMAT_TIMECODE	= ( WMT_OFFSET_FORMAT_PLAYLIST_OFFSET + 1 ) ,
	WMT_OFFSET_FORMAT_100NS_APPROXIMATE	= ( WMT_OFFSET_FORMAT_TIMECODE + 1 ) 
} WMT_OFFSET_FORMAT;
typedef enum tagWMT_INDEXER_TYPE
{
	WMT_IT_PRESENTATION_TIME	= 0,
	WMT_IT_FRAME_NUMBERS	= ( WMT_IT_PRESENTATION_TIME + 1 ) ,
	WMT_IT_TIMECODE	= ( WMT_IT_FRAME_NUMBERS + 1 ) 
} WMT_INDEXER_TYPE;
typedef enum tagWMT_INDEX_TYPE
{
	WMT_IT_NEAREST_DATA_UNIT	= 1,
	WMT_IT_NEAREST_OBJECT	= ( WMT_IT_NEAREST_DATA_UNIT + 1 ) ,
	WMT_IT_NEAREST_CLEAN_POINT	= ( WMT_IT_NEAREST_OBJECT + 1 ) 
} WMT_INDEX_TYPE;
typedef enum tagWMT_FILESINK_MODE
{
	WMT_FM_SINGLE_BUFFERS	= 0x1,
	WMT_FM_FILESINK_DATA_UNITS	= 0x2,
	WMT_FM_FILESINK_UNBUFFERED	= 0x4
} WMT_FILESINK_MODE;
typedef enum tagWMT_MUSICSPEECH_CLASS_MODE
{
	WMT_MS_CLASS_MUSIC	= 0,
	WMT_MS_CLASS_SPEECH	= 1,
	WMT_MS_CLASS_MIXED	= 2
} WMT_MUSICSPEECH_CLASS_MODE;
typedef enum tagWMT_WATERMARK_ENTRY_TYPE
{
	WMT_WMETYPE_AUDIO	= 1,
	WMT_WMETYPE_VIDEO	= 2
} WMT_WATERMARK_ENTRY_TYPE;
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0006
{
	WM_PLAYBACK_DRC_HIGH	= 0,
	WM_PLAYBACK_DRC_MEDIUM	= ( WM_PLAYBACK_DRC_HIGH + 1 ) ,
	WM_PLAYBACK_DRC_LOW	= ( WM_PLAYBACK_DRC_MEDIUM + 1 ) 
};
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0007
{
	WMT_TIMECODE_FRAMERATE_30	= 0,
	WMT_TIMECODE_FRAMERATE_30DROP	= ( WMT_TIMECODE_FRAMERATE_30 + 1 ) ,
	WMT_TIMECODE_FRAMERATE_25	= ( WMT_TIMECODE_FRAMERATE_30DROP + 1 ) ,
	WMT_TIMECODE_FRAMERATE_24	= ( WMT_TIMECODE_FRAMERATE_25 + 1 ) 
};
typedef enum WMT_CREDENTIAL_FLAGS
{
	WMT_CREDENTIAL_SAVE	= 0x1,
	WMT_CREDENTIAL_DONT_CACHE	= 0x2,
	WMT_CREDENTIAL_CLEAR_TEXT	= 0x4,
	WMT_CREDENTIAL_PROXY	= 0x8,
	WMT_CREDENTIAL_ENCRYPT	= 0x10
} WMT_CREDENTIAL_FLAGS;
typedef enum WM_AETYPE
{
	WM_AETYPE_INCLUDE	= 0x69,
	WM_AETYPE_EXCLUDE	= 0x65
} WM_AETYPE;
#pragma pack(push)
#pragma pack(2)
typedef struct _WMStreamPrioritizationRecord
{

    WORD wStreamNumber;
    BOOL fMandatory;
} WM_STREAM_PRIORITY_RECORD;
#pragma pack(pop)
typedef struct _WMWriterStatistics
{

    QWORD qwSampleCount;
    QWORD qwByteCount;
    QWORD qwDroppedSampleCount;
    QWORD qwDroppedByteCount;
    DWORD dwCurrentBitrate;
    DWORD dwAverageBitrate;
    DWORD dwExpectedBitrate;
    DWORD dwCurrentSampleRate;
    DWORD dwAverageSampleRate;
    DWORD dwExpectedSampleRate;
} WM_WRITER_STATISTICS;
typedef struct _WMWriterStatisticsEx
{

    DWORD dwBitratePlusOverhead;
    DWORD dwCurrentSampleDropRateInQueue;
    DWORD dwCurrentSampleDropRateInCodec;
    DWORD dwCurrentSampleDropRateInMultiplexer;
    DWORD dwTotalSampleDropsInQueue;
    DWORD dwTotalSampleDropsInCodec;
    DWORD dwTotalSampleDropsInMultiplexer;
} WM_WRITER_STATISTICS_EX;
typedef struct _WMReaderStatistics
{

    DWORD cbSize;
    DWORD dwBandwidth;
    DWORD cPacketsReceived;
    DWORD cPacketsRecovered;
    DWORD cPacketsLost;
    WORD wQuality;
} WM_READER_STATISTICS;
typedef struct _WMReaderClientInfo
{

    DWORD cbSize;
    WCHAR *wszLang;
    WCHAR *wszBrowserUserAgent;
    WCHAR *wszBrowserWebPage;
    QWORD qwReserved;
    LPARAM *pReserved;
    WCHAR *wszHostExe;
    QWORD qwHostVersion;
    WCHAR *wszPlayerUserAgent;
} WM_READER_CLIENTINFO;
typedef struct _WMClientProperties
{

    DWORD dwIPAddress;
    DWORD dwPort;
} WM_CLIENT_PROPERTIES;
typedef struct _WMClientPropertiesEx
{

    DWORD cbSize;
    LPCWSTR pwszIPAddress;
    LPCWSTR pwszPort;
    LPCWSTR pwszDNSName;
} WM_CLIENT_PROPERTIES_EX;
typedef struct _WMPortNumberRange
{

    WORD wPortBegin;
    WORD wPortEnd;
} WM_PORT_NUMBER_RANGE;
typedef struct _WMT_BUFFER_SEGMENT
{

    INSSBuffer *pBuffer;
    DWORD cbOffset;
    DWORD cbLength;
} WMT_BUFFER_SEGMENT;
typedef struct _WMT_PAYLOAD_FRAGMENT
{

    DWORD dwPayloadIndex;
    WMT_BUFFER_SEGMENT segmentData;
} WMT_PAYLOAD_FRAGMENT;
typedef struct _WMT_FILESINK_DATA_UNIT
{

    WMT_BUFFER_SEGMENT packetHeaderBuffer;
    DWORD cPayloads;
    WMT_BUFFER_SEGMENT *pPayloadHeaderBuffers;
    DWORD cPayloadDataFragments;
    WMT_PAYLOAD_FRAGMENT *pPayloadDataFragments;
} WMT_FILESINK_DATA_UNIT;
typedef struct _WMT_WEBSTREAM_FORMAT
{

    WORD cbSize;
    WORD cbSampleHeaderFixedData;
    WORD wVersion;
    WORD wReserved;
} WMT_WEBSTREAM_FORMAT;
typedef struct _WMT_WEBSTREAM_SAMPLE_HEADER
{

    WORD cbLength;
    WORD wPart;
    WORD cTotalParts;
    WORD wSampleType;
    WCHAR wszURL[ 1 ];
} WMT_WEBSTREAM_SAMPLE_HEADER;
typedef struct _WMAddressAccessEntry
{

    DWORD dwIPAddress;
    DWORD dwMask;
} WM_ADDRESS_ACCESSENTRY;
#pragma pack(push)
#pragma pack(1)
typedef struct _WMPicture
{
    LPWSTR pwszMIMEType;
    BYTE bPictureType;
    LPWSTR pwszDescription;
    DWORD dwDataLen;
    BYTE *pbData;
} WM_PICTURE;
typedef struct _WMSynchronisedLyrics
{
    BYTE bTimeStampFormat;
    BYTE bContentType;
    LPWSTR pwszContentDescriptor;
    DWORD dwLyricsLen;
    BYTE *pbLyrics;
} WM_SYNCHRONISED_LYRICS;
typedef struct _WMUserWebURL
{
    LPWSTR pwszDescription;
    LPWSTR pwszURL;
} WM_USER_WEB_URL;
typedef struct _WMUserText
{
	LPWSTR pwszDescription;
    LPWSTR pwszText;
} WM_USER_TEXT;
typedef struct _WMLeakyBucketPair
{
    DWORD dwBitrate;
    DWORD msBufferWindow;
} WM_LEAKY_BUCKET_PAIR;
typedef struct _WMStreamTypeInfo
{
    GUID guidMajorType;
    DWORD cbFormat;
} WM_STREAM_TYPE_INFO;
#pragma pack(pop)
typedef struct _WM_LICENSE_STATE_DATA
{
    DWORD dwSize;
    DWORD dwNumStates;
    DRM_LICENSE_STATE_DATA stateData[ 1 ];
} WM_LICENSE_STATE_DATA;
typedef struct __WMT_WATERMARK_ENTRY
{
    WMT_WATERMARK_ENTRY_TYPE wmetType;
    CLSID clsid;
    UINT cbDisplayName;
    LPWSTR pwszDisplayName;
} WMT_WATERMARK_ENTRY;
#define WMT_VIDEOIMAGE_SAMPLE_INPUT_FRAME      1
#define WMT_VIDEOIMAGE_SAMPLE_OUTPUT_FRAME     2
#define WMT_VIDEOIMAGE_SAMPLE_USES_CURRENT_INPUT_FRAME  4 
#define WMT_VIDEOIMAGE_SAMPLE_USES_PREVIOUS_INPUT_FRAME 8 
#define WMT_VIDEOIMAGE_SAMPLE_MOTION       1
#define WMT_VIDEOIMAGE_SAMPLE_ROTATION     2
#define WMT_VIDEOIMAGE_SAMPLE_BLENDING     4
#define WMT_VIDEOIMAGE_SAMPLE_ADV_BLENDING 8
#define WMT_VIDEOIMAGE_INTEGER_DENOMINATOR 65536L 
#define WMT_VIDEOIMAGE_MAGIC_NUMBER 0x1d4a45f2 
#define WMT_VIDEOIMAGE_MAGIC_NUMBER_2 0x1d4a45f3 
typedef struct __WMT_VIDEOIMAGE_SAMPLE
{
    DWORD dwMagic;
    ULONG cbStruct;
    DWORD dwControlFlags;
    DWORD dwInputFlagsCur;
    LONG lCurMotionXtoX;
    LONG lCurMotionYtoX;
    LONG lCurMotionXoffset;
    LONG lCurMotionXtoY;
    LONG lCurMotionYtoY;
    LONG lCurMotionYoffset;
    LONG lCurBlendCoef1;
    LONG lCurBlendCoef2;
    DWORD dwInputFlagsPrev;
    LONG lPrevMotionXtoX;
    LONG lPrevMotionYtoX;
    LONG lPrevMotionXoffset;
    LONG lPrevMotionXtoY;
    LONG lPrevMotionYtoY;
    LONG lPrevMotionYoffset;
    LONG lPrevBlendCoef1;
    LONG lPrevBlendCoef2;
} WMT_VIDEOIMAGE_SAMPLE;
#define WMT_VIDEOIMAGE_TRANSITION_BOW_TIE           11
#define WMT_VIDEOIMAGE_TRANSITION_CIRCLE            12
#define WMT_VIDEOIMAGE_TRANSITION_CROSS_FADE        13
#define WMT_VIDEOIMAGE_TRANSITION_DIAGONAL          14
#define WMT_VIDEOIMAGE_TRANSITION_DIAMOND           15
#define WMT_VIDEOIMAGE_TRANSITION_FADE_TO_COLOR     16
#define WMT_VIDEOIMAGE_TRANSITION_FILLED_V          17
#define WMT_VIDEOIMAGE_TRANSITION_FLIP              18
#define WMT_VIDEOIMAGE_TRANSITION_INSET             19
#define WMT_VIDEOIMAGE_TRANSITION_IRIS              20
#define WMT_VIDEOIMAGE_TRANSITION_PAGE_ROLL         21
#define WMT_VIDEOIMAGE_TRANSITION_RECTANGLE         23
#define WMT_VIDEOIMAGE_TRANSITION_REVEAL            24
#define WMT_VIDEOIMAGE_TRANSITION_SLIDE             27
#define WMT_VIDEOIMAGE_TRANSITION_SPLIT             29
#define WMT_VIDEOIMAGE_TRANSITION_STAR              30
#define WMT_VIDEOIMAGE_TRANSITION_WHEEL             31
typedef struct __WMT_VIDEOIMAGE_SAMPLE2
{
    DWORD dwMagic;
    DWORD dwStructSize;
    DWORD dwControlFlags;
    DWORD dwViewportWidth;
    DWORD dwViewportHeight;
    DWORD dwCurrImageWidth;
    DWORD dwCurrImageHeight;
    FLOAT fCurrRegionX0;
    FLOAT fCurrRegionY0;
    FLOAT fCurrRegionWidth;
    FLOAT fCurrRegionHeight;
    FLOAT fCurrBlendCoef;
    DWORD dwPrevImageWidth;
    DWORD dwPrevImageHeight;
    FLOAT fPrevRegionX0;
    FLOAT fPrevRegionY0;
    FLOAT fPrevRegionWidth;
    FLOAT fPrevRegionHeight;
    FLOAT fPrevBlendCoef;
    DWORD dwEffectType;
    DWORD dwNumEffectParas;
    FLOAT fEffectPara0;
    FLOAT fEffectPara1;
    FLOAT fEffectPara2;
    FLOAT fEffectPara3;
    FLOAT fEffectPara4;
    BOOL bKeepPrevImage;
} WMT_VIDEOIMAGE_SAMPLE2;
typedef struct _WMMediaType
{

    GUID majortype;
    GUID subtype;
    BOOL bFixedSizeSamples;
    BOOL bTemporalCompression;
    ULONG lSampleSize;
    GUID formattype;
    IUnknown *pUnk;
    ULONG cbFormat;
    BYTE *pbFormat;
} WM_MEDIA_TYPE;
typedef struct tagWMVIDEOINFOHEADER
{
    RECT rcSource;
    RECT rcTarget;
    DWORD dwBitRate;
    DWORD dwBitErrorRate;
    LONGLONG AvgTimePerFrame;
    BITMAPINFOHEADER bmiHeader;
} WMVIDEOINFOHEADER;
typedef struct tagWMVIDEOINFOHEADER2
{
    RECT rcSource;
    RECT rcTarget;
    DWORD dwBitRate;
    DWORD dwBitErrorRate;
    LONGLONG AvgTimePerFrame;
    DWORD dwInterlaceFlags;
    DWORD dwCopyProtectFlags;
    DWORD dwPictAspectRatioX;
    DWORD dwPictAspectRatioY;
    DWORD dwReserved1;
    DWORD dwReserved2;
    BITMAPINFOHEADER bmiHeader;
} WMVIDEOINFOHEADER2;
typedef struct tagWMMPEG2VIDEOINFO
{
    WMVIDEOINFOHEADER2 hdr;
    DWORD dwStartTimeCode;
    DWORD cbSequenceHeader;
    DWORD dwProfile;
    DWORD dwLevel;
    DWORD dwFlags;
    DWORD dwSequenceHeader[1];
} WMMPEG2VIDEOINFO;
typedef struct tagWMSCRIPTFORMAT
{
    GUID    scriptType; 
} WMSCRIPTFORMAT;
EXTERN_GUID(WMMEDIASUBTYPE_Base, 0x00000000, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIATYPE_Video, 0x73646976, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_RGB1, 0xe436eb78, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB4, 0xe436eb79, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB8, 0xe436eb7a, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB565, 0xe436eb7b, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB555, 0xe436eb7c, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB24, 0xe436eb7d, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB32, 0xe436eb7e, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_I420, 0x30323449, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_IYUV, 0x56555949, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_YV12, 0x32315659, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_YUY2, 0x32595559, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_P422, 0x32323450, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_UYVY, 0x59565955, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_YVYU, 0x55595659, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_YVU9, 0x39555659, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_VIDEOIMAGE, 0x1d4a45f2, 0xe5f6, 0x4b44, 0x83, 0x88, 0xf0, 0xae, 0x5c, 0x0e, 0x0c, 0x37);
EXTERN_GUID(WMMEDIASUBTYPE_MP43, 0x3334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_MP4S, 0x5334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_M4S2, 0x3253344D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMV1, 0x31564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMV2, 0x32564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_MSS1, 0x3153534D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_MPEG2_VIDEO, 0xe06d8026, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x5f, 0x6c, 0xbb, 0xea);
EXTERN_GUID(WMMEDIATYPE_Audio, 0x73647561, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_PCM, 0x00000001, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_DRM, 0x00000009, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMAudioV9, 0x00000162, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMAudio_Lossless, 0x00000163, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_MSS2, 0x3253534D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMSP1, 0x0000000A, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMSP2, 0x0000000B, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMV3, 0x33564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMVP, 0x50564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WVP2, 0x32505657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMVA, 0x41564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WVC1, 0x31435657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMAudioV8, 0x00000161, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMAudioV7, 0x00000161, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMAudioV2, 0x00000161, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_ACELPnet, 0x00000130, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_MP3, 0x00000055, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WebStream, 0x776257d4, 0xc627, 0x41cb, 0x8f, 0x81, 0x7a, 0xc7, 0xff, 0x1c, 0x40, 0xcc);
EXTERN_GUID(WMMEDIATYPE_Script, 0x73636d64, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIATYPE_Image, 0x34a50fd8, 0x8aa5, 0x4386, 0x81, 0xfe, 0xa0, 0xef, 0xe0, 0x48, 0x8e, 0x31);
EXTERN_GUID(WMMEDIATYPE_FileTransfer, 0xd9e47579, 0x930e, 0x4427, 0xad, 0xfc, 0xad, 0x80, 0xf2, 0x90, 0xe4, 0x70);
EXTERN_GUID(WMMEDIATYPE_Text, 0x9bba1ea7, 0x5ab2, 0x4829, 0xba, 0x57, 0x9, 0x40, 0x20, 0x9b, 0xcf, 0x3e);
EXTERN_GUID(WMFORMAT_VideoInfo, 0x05589f80, 0xc356, 0x11ce, 0xbf, 0x01, 0x00, 0xaa, 0x00, 0x55, 0x59, 0x5a);
EXTERN_GUID(WMFORMAT_MPEG2Video, 0xe06d80e3, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x05f, 0x6c, 0xbb, 0xea);
EXTERN_GUID(WMFORMAT_WaveFormatEx, 0x05589f81, 0xc356, 0x11ce, 0xbf, 0x01, 0x00, 0xaa, 0x00, 0x55, 0x59, 0x5a);
EXTERN_GUID(WMFORMAT_Script, 0x5c8510f2, 0xdebe, 0x4ca7, 0xbb, 0xa5, 0xf0, 0x7a, 0x10, 0x4f, 0x8d, 0xff);
EXTERN_GUID(WMFORMAT_WebStream, 0xda1e6b13, 0x8359, 0x4050, 0xb3, 0x98, 0x38, 0x8e, 0x96, 0x5b, 0xf0, 0x0c);
EXTERN_GUID(WMSCRIPTTYPE_TwoStrings, 0x82f38a70, 0xc29f, 0x11d1, 0x97, 0xad, 0x00, 0xa0, 0xc9, 0x5e, 0xa8, 0x50);
EXTERN_GUID( WM_SampleExtensionGUID_OutputCleanPoint, 0xf72a3c6f, 0x6eb4, 0x4ebc, 0xb1, 0x92, 0x9, 0xad, 0x97, 0x59, 0xe8, 0x28 );
EXTERN_GUID( WM_SampleExtensionGUID_Timecode, 0x399595ec, 0x8667, 0x4e2d, 0x8f, 0xdb, 0x98, 0x81, 0x4c, 0xe7, 0x6c, 0x1e);
EXTERN_GUID( WM_SampleExtensionGUID_ChromaLocation, 0x4c5acca0, 0x9276, 0x4b2c, 0x9e, 0x4c, 0xa0, 0xed, 0xef, 0xdd, 0x21, 0x7e);
EXTERN_GUID( WM_SampleExtensionGUID_ColorSpaceInfo, 0xf79ada56, 0x30eb, 0x4f2b, 0x9f, 0x7a, 0xf2, 0x4b, 0x13, 0x9a, 0x11, 0x57 );
EXTERN_GUID( WM_SampleExtensionGUID_UserDataInfo, 0x732bb4fa, 0x78be, 0x4549, 0x99, 0xbd, 0x2, 0xdb, 0x1a, 0x55, 0xb7, 0xa8 );
EXTERN_GUID( WM_SampleExtensionGUID_FileName, 0xe165ec0e, 0x19ed, 0x45d7, 0xb4, 0xa7, 0x25, 0xcb, 0xd1, 0xe2, 0x8e, 0x9b);
EXTERN_GUID( WM_SampleExtensionGUID_ContentType, 0xd590dc20, 0x07bc, 0x436c, 0x9c, 0xf7, 0xf3, 0xbb, 0xfb, 0xf1, 0xa4, 0xdc );
EXTERN_GUID( WM_SampleExtensionGUID_PixelAspectRatio, 0x1b1ee554, 0xf9ea, 0x4bc8, 0x82, 0x1a, 0x37, 0x6b, 0x74, 0xe4, 0xc4, 0xb8 );
EXTERN_GUID( WM_SampleExtensionGUID_SampleDuration, 0xc6bd9450, 0x867f, 0x4907, 0x83, 0xa3, 0xc7, 0x79, 0x21, 0xb7, 0x33, 0xad );
EXTERN_GUID( WM_SampleExtensionGUID_SampleProtectionSalt, 0x5403deee, 0xb9ee, 0x438f, 0xaa, 0x83, 0x38, 0x4, 0x99, 0x7e, 0x56, 0x9d );
#define WM_SampleExtension_ContentType_Size         1
#define WM_SampleExtension_PixelAspectRatio_Size    2
#define WM_SampleExtension_Timecode_Size           14
#define WM_SampleExtension_SampleDuration_Size      2
#define WM_SampleExtension_ChromaLocation_Size      1
#define WM_SampleExtension_ColorSpaceInfo_Size      3
#define WM_CT_REPEAT_FIRST_FIELD 0x10
#define WM_CT_BOTTOM_FIELD_FIRST 0x20
#define WM_CT_TOP_FIELD_FIRST    0x40
#define WM_CT_INTERLACED         0x80
#define WM_CL_INTERLACED420   0
#define WM_CL_PROGRESSIVE420  1
#pragma pack(push)
#pragma pack(1)
typedef struct _WMT_COLORSPACEINFO_EXTENSION_DATA
{
    BYTE ucColorPrimaries;
    BYTE ucColorTransferChar;
    BYTE ucColorMatrixCoef;
} WMT_COLORSPACEINFO_EXTENSION_DATA;
#pragma pack(pop)
#pragma pack(push)
#pragma pack(2)
typedef struct _WMT_TIMECODE_EXTENSION_DATA
{
    WORD wRange;
    DWORD dwTimecode;
    DWORD dwUserbits;
    DWORD dwAmFlags;
} WMT_TIMECODE_EXTENSION_DATA;
#pragma pack(pop)
typedef struct _DRM_VAL16
{
    BYTE val[ 16 ];
} DRM_VAL16;
EXTERN_GUID( IID_IWMMediaProps,         0x96406bce,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMVideoMediaProps,    0x96406bcf,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMWriter,             0x96406bd4,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMInputMediaProps,    0x96406bd5,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMReader,             0x96406bd6,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMSyncReader,         0x9397f121,0x7705,0x4dc9,0xb0,0x49,0x98,0xb6,0x98,0x18,0x84,0x14 );
EXTERN_GUID( IID_IWMSyncReader2,        0xfaed3d21,0x1b6b,0x4af7,0x8c,0xb6,0x3e,0x18,0x9b,0xbc,0x18,0x7b );
EXTERN_GUID( IID_IWMOutputMediaProps,   0x96406bd7,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMStatusCallback,     0x6d7cdc70,0x9888,0x11d3,0x8e,0xdc,0x00,0xc0,0x4f,0x61,0x09,0xcf );
EXTERN_GUID( IID_IWMReaderCallback,     0x96406bd8,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMCredentialCallback, 0x342e0eb7,0xe651,0x450c,0x97,0x5b,0x2a,0xce,0x2c,0x90,0xc4,0x8e );
EXTERN_GUID( IID_IWMMetadataEditor,     0x96406bd9,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMMetadataEditor2,    0x203cffe3,0x2e18,0x4fdf,0xb5,0x9d,0x6e,0x71,0x53,0x05,0x34,0xcf );
EXTERN_GUID( IID_IWMDRMEditor,          0xFF130EBC,0xA6C3,0x42A6,0xB4,0x01,0xC3,0x38,0x2C,0x3E,0x08,0xB3 );
EXTERN_GUID( IID_IWMHeaderInfo,         0x96406bda,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMHeaderInfo2,        0x15cf9781,0x454e,0x482e,0xb3,0x93,0x85,0xfa,0xe4,0x87,0xa8,0x10 );
EXTERN_GUID( IID_IWMHeaderInfo3,        0x15CC68E3,0x27CC,0x4ecd,0xB2,0x22,0x3F,0x5D,0x02,0xD8,0x0B,0xD5 );
EXTERN_GUID( IID_IWMProfileManager,     0xd16679f2,0x6ca0,0x472d,0x8d,0x31,0x2f,0x5d,0x55,0xae,0xe1,0x55 );
EXTERN_GUID( IID_IWMProfileManager2,    0x7a924e51,0x73c1,0x494d,0x80,0x19,0x23,0xd3,0x7e,0xd9,0xb8,0x9a );
EXTERN_GUID( IID_IWMProfileManagerLanguage, 0xba4dcc78,0x7ee0,0x4ab8,0xb2,0x7a,0xdb,0xce,0x8b,0xc5,0x14,0x54 );
EXTERN_GUID( IID_IWMProfile,            0x96406bdb,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMProfile2,           0x07e72d33,0xd94e,0x4be7,0x88,0x43,0x60,0xae,0x5f,0xf7,0xe5,0xf5 );
EXTERN_GUID( IID_IWMProfile3,           0x00ef96cc,0xa461,0x4546,0x8b,0xcd,0xc9,0xa2,0x8f,0x0e,0x06,0xf5 );
EXTERN_GUID( IID_IWMStreamConfig,       0x96406bdc,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMStreamConfig2,      0x7688d8cb,0xfc0d,0x43bd,0x94,0x59,0x5a,0x8d,0xec,0x20,0x0c,0xfa );
EXTERN_GUID( IID_IWMStreamConfig3,      0xcb164104,0x3aa9,0x45a7,0x9a,0xc9,0x4d,0xae,0xe1,0x31,0xd6,0xe1 );
EXTERN_GUID( IID_IWMStreamList,         0x96406bdd,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMMutualExclusion,    0x96406bde,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMMutualExclusion2,   0x302b57d,0x89d1,0x4ba2,0x85,0xc9,0x16,0x6f,0x2c,0x53,0xeb,0x91 );
EXTERN_GUID( IID_IWMBandwidthSharing,   0xad694af1,0xf8d9,0x42f8,0xbc,0x47,0x70,0x31,0x1b,0x0c,0x4f,0x9e );
EXTERN_GUID( IID_IWMStreamPrioritization, 0x8c1c6090,0xf9a8,0x4748,0x8e,0xc3,0xdd,0x11,0x08,0xba,0x1e,0x77 );
EXTERN_GUID( IID_IWMWriterAdvanced,     0x96406be3,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMWriterAdvanced2,    0x962dc1ec,0xc046,0x4db8,0x9c,0xc7,0x26,0xce,0xae,0x50,0x08,0x17 );
EXTERN_GUID( IID_IWMWriterAdvanced3,    0x2cd6492d,0x7c37,0x4e76,0x9d,0x3b,0x59,0x26,0x11,0x83,0xa2,0x2e );
EXTERN_GUID( IID_IWMWriterPreprocess,   0xfc54a285,0x38c4,0x45b5,0xaa,0x23,0x85,0xb9,0xf7,0xcb,0x42,0x4b );
EXTERN_GUID( IID_IWMWriterSink,         0x96406be4,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMWriterFileSink,     0x96406be5,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMWriterFileSink2,    0x14282ba7,0x4aef,0x4205,0x8c,0xe5,0xc2,0x29,0x03,0x5a,0x05,0xbc );
EXTERN_GUID( IID_IWMWriterFileSink3,    0x3fea4feb,0x2945,0x47a7,0xa1,0xdd,0xc5,0x3a,0x8f,0xc4,0xc4,0x5c );
EXTERN_GUID( IID_IWMWriterNetworkSink,  0x96406be7,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMClientConnections,  0x73c66010,0xa299,0x41df,0xb1,0xf0,0xcc,0xf0,0x3b,0x09,0xc1,0xc6 );
EXTERN_GUID( IID_IWMClientConnections2, 0x4091571e,0x4701,0x4593,0xbb,0x3d,0xd5,0xf5,0xf0,0xc7,0x42,0x46 ); 
EXTERN_GUID( IID_IWMReaderAdvanced,     0x96406bea,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMReaderAdvanced2,    0xae14a945,0xb90c,0x4d0d,0x91,0x27,0x80,0xd6,0x65,0xf7,0xd7,0x3e );
EXTERN_GUID( IID_IWMReaderAdvanced3,    0x5dc0674b,0xf04b,0x4a4e,0x9f,0x2a,0xb1,0xaf,0xde,0x2c,0x81,0x00 );
EXTERN_GUID( IID_IWMReaderAdvanced4,    0x945a76a2,0x12ae,0x4d48,0xbd,0x3c,0xcd,0x1d,0x90,0x39,0x9b,0x85 );
EXTERN_GUID( IID_IWMReaderAdvanced5,    0x24c44db0,0x55d1,0x49ae,0xa5,0xcc,0xf1,0x38,0x15,0xe3,0x63,0x63 );
EXTERN_GUID( IID_IWMReaderAdvanced6,    0x18a2e7f8,0x428f,0x4acd,0x8a,0x00,0xe6,0x46,0x39,0xbc,0x93,0xde );
EXTERN_GUID( IID_IWMPlayerHook,         0xe5b7ca9a,0x0f1c,0x4f66,0x90,0x02,0x74,0xec,0x50,0xd8,0xb3,0x04 );
EXTERN_GUID( IID_IWMDRMReader,          0xd2827540,0x3ee7,0x432c,0xb1,0x4c,0xdc,0x17,0xf0,0x85,0xd3,0xb3 );
EXTERN_GUID( IID_IWMDRMReader2,         0xbefe7a75,0x9f1d,0x4075,0xb9,0xd9,0xa3,0xc3,0x7b,0xda,0x49,0xa0 );
EXTERN_GUID( IID_IWMDRMReader3,         0xe08672de,0xf1e7,0x4ff4,0xa0,0xa3,0xfc,0x4b,0x08,0xe4,0xca,0xf8 );
EXTERN_GUID( IID_IWMReaderPlaylistBurn, 0xf28c0300,0x9baa,0x4477,0xa8,0x46,0x17,0x44,0xd9,0xcb,0xf5,0x33 );
EXTERN_GUID( IID_IWMReaderCallbackAdvanced, 0x96406beb,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMReaderNetworkConfig,0x96406bec,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMReaderStreamClock,  0x96406bed,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMIndexer,            0x6d7cdc71,0x9888,0x11d3,0x8e,0xdc,0x00,0xc0,0x4f,0x61,0x09,0xcf );
EXTERN_GUID( IID_IWMIndexer2,           0xb70f1e42,0x6255,0x4df0,0xa6,0xb9,0x02,0xb2,0x12,0xd9,0xe2,0xbb );
EXTERN_GUID( IID_IWMReaderAllocatorEx,  0x9f762fa7,0xa22e,0x428d,0x93,0xc9,0xac,0x82,0xf3,0xaa,0xfe,0x5a );
EXTERN_GUID( IID_IWMReaderTypeNegotiation, 0xfdbe5592,0x81a1,0x41ea,0x93,0xbd,0x73,0x5c,0xad,0x1a,0xdc,0x5 );
EXTERN_GUID( IID_IWMLicenseBackup,      0x05E5AC9F,0x3FB6,0x4508,0xBB,0x43,0xA4,0x06,0x7B,0xA1,0xEB,0xE8);
EXTERN_GUID( IID_IWMLicenseRestore,     0xC70B6334,0xa22e,0x4efb,0xA2,0x45,0x15,0xE6,0x5A,0x00,0x4A,0x13);
EXTERN_GUID( IID_IWMBackupRestoreProps, 0x3C8E0DA6,0x996F,0x4ff3,0xA1,0xAF,0x48,0x38,0xF9,0x37,0x7e,0x2e);
EXTERN_GUID( IID_IWMPacketSize,         0xcdfb97ab,0x188f,0x40b3,0xb6,0x43,0x5b,0x79,0x03,0x97,0x5c,0x59);
EXTERN_GUID( IID_IWMPacketSize2,        0x8bfc2b9e,0xb646,0x4233,0xa8,0x77,0x1c,0x6a,0x7,0x96,0x69,0xdc);
EXTERN_GUID( IID_IWMRegisterCallback,   0xcf4b1f99,0x4de2,0x4e49,0xa3,0x63,0x25,0x27,0x40,0xd9,0x9b,0xc1);
EXTERN_GUID( IID_IWMWriterPostView,     0x81e20ce4,0x75ef,0x491a,0x80,0x04,0xfc,0x53,0xc4,0x5b,0xdc,0x3e);
EXTERN_GUID( IID_IWMWriterPostViewCallback, 0xd9d6549d,0xa193,0x4f24,0xb3,0x08,0x03,0x12,0x3d,0x9b,0x7f,0x8d);
EXTERN_GUID( IID_IWMCodecInfo,          0xa970f41e,0x34de,0x4a98,0xb3,0xba,0xe4,0xb3,0xca,0x75,0x28,0xf0);
EXTERN_GUID( IID_IWMCodecInfo2,         0xaa65e273,0xb686,0x4056,0x91,0xec,0xdd,0x76,0x8d,0x4d,0xf7,0x10);
EXTERN_GUID( IID_IWMCodecInfo3,         0x7e51f487,0x4d93,0x4f98,0x8a,0xb4,0x27,0xd0,0x56,0x5a,0xdc,0x51);
EXTERN_GUID( IID_IWMPropertyVault,      0x72995A79,0x5090,0x42a4,0x9C,0x8C,0xD9,0xD0,0xB6,0xD3,0x4B,0xE5 );
EXTERN_GUID( IID_IWMIStreamProps,       0x6816dad3,0x2b4b,0x4c8e,0x81,0x49,0x87,0x4c,0x34,0x83,0xa7,0x53 );
EXTERN_GUID( IID_IWMLanguageList,       0xdf683f00,0x2d49,0x4d8e,0x92,0xb7,0xfb,0x19,0xf6,0xa0,0xdc,0x57 );
EXTERN_GUID( IID_IWMDRMWriter,          0xd6ea5dd0,0x12a0,0x43f4,0x90,0xab,0xa3,0xfd,0x45,0x1e,0x6a,0x07 );
EXTERN_GUID( IID_IWMDRMWriter2,         0x38ee7a94,0x40e2,0x4e10,0xaa,0x3f,0x33,0xfd,0x32,0x10,0xed,0x5b );
EXTERN_GUID( IID_IWMDRMWriter3,         0xa7184082,0xa4aa,0x4dde,0xac,0x9c,0xe7,0x5d,0xbd,0x11,0x17,0xce );
EXTERN_GUID( IID_IWMWriterPushSink,      0xdc10e6a5,0x072c,0x467d,0xbf,0x57,0x63,0x30,0xa9,0xdd,0xe1,0x2a );
EXTERN_GUID( IID_IWMReaderNetworkConfig2,0xd979a853,0x042b,0x4050,0x83,0x87,0xc9,0x39,0xdb,0x22,0x01,0x3f );
EXTERN_GUID( IID_IWMWatermarkInfo,       0x6f497062,0xf2e2,0x4624,0x8e,0xa7,0x9d,0xd4,0x0d,0x81,0xfc,0x8d );
EXTERN_GUID( IID_IWMReaderAccelerator,   0xbddc4d08,0x944d,0x4d52,0xa6,0x12,0x46,0xc3,0xfd,0xa0,0x7d,0xd4 );
EXTERN_GUID( IID_IWMReaderTimecode,        0xf369e2f0,0xe081,0x4fe6,0x84,0x50,0xb8,0x10,0xb2,0xf4,0x10,0xd1 );
EXTERN_GUID( IID_IWMImageInfo,            0x9f0aa3b6,0x7267,0x4d89,0x88,0xf2,0xba,0x91,0x5a,0xa5,0xc4,0xc6);
EXTERN_GUID( IID_IWMAddressAccess,        0xBB3C6389,0x1633,0x4e92,0xAF,0x14,0x9F,0x31,0x73,0xBA,0x39,0xD0 );
EXTERN_GUID( IID_IWMAddressAccess2,       0x65a83fc2,0x3e98,0x4d4d,0x81,0xb5,0x2a,0x74,0x28,0x86,0xb3,0x3d );
EXTERN_GUID( IID_IWMDeviceRegistration,   0xf6211f03,0x8d21,0x4e94,0x93,0xe6,0x85,0x10,0x80,0x5f,0x2d,0x99 );
EXTERN_GUID( IID_IWMRegisteredDevice,     0xa4503bec,0x5508,0x4148,0x97,0xac,0xbf,0xa7,0x57,0x60,0xa7,0x0d );
EXTERN_GUID( IID_IWMProximityDetection,   0x6A9FD8EE,0xB651,0x4bf0,0xB8,0x49,0x7D,0x4E,0xCE,0x79,0xA2,0xB1 );
EXTERN_GUID( IID_IWMDRMMessageParser,     0xa73a0072,0x25a0,0x4c99,0xb4,0xa5,0xed,0xe8,0x10,0x1a,0x6c,0x39 );
EXTERN_GUID( IID_IWMDRMTranscryptor,      0x69059850,0x6e6f,0x4bb2,0x80,0x6f,0x71,0x86,0x3d,0xdf,0xc4,0x71 );
EXTERN_GUID( IID_IWMDRMTranscryptor2,     0xe0da439f,0xd331,0x496a,0xbe,0xce,0x18,0xe5,0xba,0xc5,0xdd,0x23 );
EXTERN_GUID( IID_IWMDRMTranscryptionManager, 0xb1a887b2,0xa4f0,0x407a,0xb0,0x2e,0xef,0xbd,0x23,0xbb,0xec,0xdf );
EXTERN_GUID( IID_IWMLicenseRevocationAgent, 0x6967f2c9,0x4e26,0x4b57,0x88,0x94,0x79,0x98,0x80,0xf7,0xac,0x7b );
EXTERN_GUID( CLSID_WMMUTEX_Language, 0xD6E22A00,0x35DA,0x11D1,0x90,0x34,0x00,0xA0,0xC9,0x03,0x49,0xBE );
EXTERN_GUID( CLSID_WMMUTEX_Bitrate, 0xD6E22A01,0x35DA,0x11D1,0x90,0x34,0x00,0xA0,0xC9,0x03,0x49,0xBE );
EXTERN_GUID( CLSID_WMMUTEX_Presentation, 0xD6E22A02,0x35DA,0x11D1,0x90,0x34,0x00,0xA0,0xC9,0x03,0x49,0xBE );
EXTERN_GUID( CLSID_WMMUTEX_Unknown, 0xD6E22A03,0x35DA,0x11D1,0x90,0x34,0x00,0xA0,0xC9,0x03,0x49,0xBE );
EXTERN_GUID( CLSID_WMBandwidthSharing_Exclusive, 0xaf6060aa,0x5197,0x11d2,0xb6,0xaf,0x00,0xc0,0x4f,0xd9,0x08,0xe9 );
EXTERN_GUID( CLSID_WMBandwidthSharing_Partial, 0xaf6060ab,0x5197,0x11d2,0xb6,0xaf,0x00,0xc0,0x4f,0xd9,0x08,0xe9 );
EXTERN_GUID( WMT_DMOCATEGORY_AUDIO_WATERMARK, 0x65221c5a, 0xfa75, 0x4b39, 0xb5, 0x0c, 0x06, 0xc3, 0x36, 0xb6, 0xa3, 0xef );
EXTERN_GUID( WMT_DMOCATEGORY_VIDEO_WATERMARK, 0x187cc922, 0x8efc, 0x4404, 0x9d, 0xaf, 0x63, 0xf4, 0x83, 0x0d, 0xf1, 0xbc );
#define WM_MAX_VIDEO_STREAMS            0x3f
#define WM_MAX_STREAMS                  0x3f
HRESULT STDMETHODCALLTYPE WMIsContentProtected( const WCHAR *pwszFileName, BOOL *pfIsProtected );
HRESULT STDMETHODCALLTYPE WMCreateCertificate( IUnknown** pUnkCert );
HRESULT STDMETHODCALLTYPE WMCreateWriter( IUnknown* pUnkCert, IWMWriter **ppWriter );
HRESULT STDMETHODCALLTYPE WMCreateReader( IUnknown* pUnkCert, DWORD dwRights, IWMReader **ppReader );
HRESULT STDMETHODCALLTYPE WMCreateSyncReader( IUnknown* pUnkCert, DWORD dwRights, IWMSyncReader **ppSyncReader );
HRESULT STDMETHODCALLTYPE WMCreateEditor( IWMMetadataEditor **ppEditor );
HRESULT STDMETHODCALLTYPE WMCreateIndexer( IWMIndexer **ppIndexer );
HRESULT STDMETHODCALLTYPE WMCreateBackupRestorer( IUnknown *pCallback, IWMLicenseBackup **ppBackup );
HRESULT STDMETHODCALLTYPE WMCreateProfileManager( IWMProfileManager **ppProfileManager );
HRESULT STDMETHODCALLTYPE WMCreateWriterFileSink( IWMWriterFileSink **ppSink );
HRESULT STDMETHODCALLTYPE WMCreateWriterNetworkSink( IWMWriterNetworkSink **ppSink );
HRESULT STDMETHODCALLTYPE WMCreateWriterPushSink( IWMWriterPushSink **ppSink );
HRESULT STDMETHODCALLTYPE WMCreateDeviceRegistration( IWMDeviceRegistration **ppDevReg );
HRESULT STDMETHODCALLTYPE WMCreateDRMTranscryptor( IWMDRMTranscryptor **ppTranscryptor );
HRESULT STDMETHODCALLTYPE WMCreateDRMTranscryptionManager( IWMDRMTranscryptionManager **ppTranscryptionManager );
HRESULT STDMETHODCALLTYPE WMCreateLicenseRevocationAgent( IUnknown *pCallback, IWMLicenseRevocationAgent ** ppLicenseRevocationAgent );
extern RPC_IF_HANDLE __MIDL_itf_wmsdkidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsdkidl_0000_0000_v0_0_s_ifspec;
#ifndef __IWMMediaProps_INTERFACE_DEFINED__
#define __IWMMediaProps_INTERFACE_DEFINED__ 
extern const IID IID_IWMMediaProps;
typedef struct IWMMediaPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMMediaProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMMediaProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMMediaProps * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (IWMMediaProps * This, GUID * pguidType);
	HRESULT(STDMETHODCALLTYPE * GetMediaType) (IWMMediaProps * This, WM_MEDIA_TYPE * pType, DWORD * pcbType);
	HRESULT(STDMETHODCALLTYPE * SetMediaType) (IWMMediaProps * This, WM_MEDIA_TYPE * pType);
	END_INTERFACE
} IWMMediaPropsVtbl;
interface IWMMediaProps
{
    CONST_VTBL struct IWMMediaPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMMediaProps_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMMediaProps_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMMediaProps_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMMediaProps_GetType(This,pguidType)    ( (This)->lpVtbl -> GetType(This,pguidType) ) 
#define IWMMediaProps_GetMediaType(This,pType,pcbType)    ( (This)->lpVtbl -> GetMediaType(This,pType,pcbType) ) 
#define IWMMediaProps_SetMediaType(This,pType)    ( (This)->lpVtbl -> SetMediaType(This,pType) ) 
#endif
#endif
#ifndef __IWMVideoMediaProps_INTERFACE_DEFINED__
#define __IWMVideoMediaProps_INTERFACE_DEFINED__ 
extern const IID IID_IWMVideoMediaProps;
typedef struct IWMVideoMediaPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMVideoMediaProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMVideoMediaProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMVideoMediaProps * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (IWMVideoMediaProps * This, GUID * pguidType);
	HRESULT(STDMETHODCALLTYPE * GetMediaType) (IWMVideoMediaProps * This, WM_MEDIA_TYPE * pType, DWORD * pcbType);
	HRESULT(STDMETHODCALLTYPE * SetMediaType) (IWMVideoMediaProps * This, WM_MEDIA_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * GetMaxKeyFrameSpacing) (IWMVideoMediaProps * This, LONGLONG * pllTime);
	HRESULT(STDMETHODCALLTYPE * SetMaxKeyFrameSpacing) (IWMVideoMediaProps * This, LONGLONG llTime);
	HRESULT(STDMETHODCALLTYPE * GetQuality) (IWMVideoMediaProps * This, DWORD * pdwQuality);
	HRESULT(STDMETHODCALLTYPE * SetQuality) (IWMVideoMediaProps * This, DWORD dwQuality);
	END_INTERFACE
} IWMVideoMediaPropsVtbl;
interface IWMVideoMediaProps
{
CONST_VTBL struct IWMVideoMediaPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMVideoMediaProps_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMVideoMediaProps_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMVideoMediaProps_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMVideoMediaProps_GetType(This,pguidType)    ( (This)->lpVtbl -> GetType(This,pguidType) ) 
#define IWMVideoMediaProps_GetMediaType(This,pType,pcbType)    ( (This)->lpVtbl -> GetMediaType(This,pType,pcbType) ) 
#define IWMVideoMediaProps_SetMediaType(This,pType)    ( (This)->lpVtbl -> SetMediaType(This,pType) ) 
#define IWMVideoMediaProps_GetMaxKeyFrameSpacing(This,pllTime)    ( (This)->lpVtbl -> GetMaxKeyFrameSpacing(This,pllTime) ) 
#define IWMVideoMediaProps_SetMaxKeyFrameSpacing(This,llTime)    ( (This)->lpVtbl -> SetMaxKeyFrameSpacing(This,llTime) ) 
#define IWMVideoMediaProps_GetQuality(This,pdwQuality)    ( (This)->lpVtbl -> GetQuality(This,pdwQuality) ) 
#define IWMVideoMediaProps_SetQuality(This,dwQuality)    ( (This)->lpVtbl -> SetQuality(This,dwQuality) ) 
#endif
#endif
#ifndef __IWMWriter_INTERFACE_DEFINED__
#define __IWMWriter_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriter;
typedef struct IWMWriterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriter * This);
	HRESULT(STDMETHODCALLTYPE * SetProfileByID) (IWMWriter * This, REFGUID guidProfile);
	HRESULT(STDMETHODCALLTYPE * SetProfile) (IWMWriter * This, IWMProfile * pProfile);
	HRESULT(STDMETHODCALLTYPE * SetOutputFilename) (IWMWriter * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * GetInputCount) (IWMWriter * This, DWORD * pcInputs);
	HRESULT(STDMETHODCALLTYPE * GetInputProps) (IWMWriter * This, DWORD dwInputNum, IWMInputMediaProps ** ppInput);
	HRESULT(STDMETHODCALLTYPE * SetInputProps) (IWMWriter * This, DWORD dwInputNum, IWMInputMediaProps * pInput);
	HRESULT(STDMETHODCALLTYPE * GetInputFormatCount) (IWMWriter * This, DWORD dwInputNumber, DWORD * pcFormats);
	HRESULT(STDMETHODCALLTYPE * GetInputFormat) (IWMWriter * This, DWORD dwInputNumber, DWORD dwFormatNumber, IWMInputMediaProps ** pProps);
	HRESULT(STDMETHODCALLTYPE * BeginWriting) (IWMWriter * This);
	HRESULT(STDMETHODCALLTYPE * EndWriting) (IWMWriter * This);
	HRESULT(STDMETHODCALLTYPE * AllocateSample) (IWMWriter * This, DWORD dwSampleSize, INSSBuffer ** ppSample);
	HRESULT(STDMETHODCALLTYPE * WriteSample) (IWMWriter * This, DWORD dwInputNum, QWORD cnsSampleTime, DWORD dwFlags, INSSBuffer * pSample);
	HRESULT(STDMETHODCALLTYPE * Flush) (IWMWriter * This);
	END_INTERFACE
} IWMWriterVtbl;
interface IWMWriter
{
	CONST_VTBL struct IWMWriterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriter_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriter_SetProfileByID(This,guidProfile)    ( (This)->lpVtbl -> SetProfileByID(This,guidProfile) ) 
#define IWMWriter_SetProfile(This,pProfile)    ( (This)->lpVtbl -> SetProfile(This,pProfile) ) 
#define IWMWriter_SetOutputFilename(This,pwszFilename)    ( (This)->lpVtbl -> SetOutputFilename(This,pwszFilename) ) 
#define IWMWriter_GetInputCount(This,pcInputs)    ( (This)->lpVtbl -> GetInputCount(This,pcInputs) ) 
#define IWMWriter_GetInputProps(This,dwInputNum,ppInput)    ( (This)->lpVtbl -> GetInputProps(This,dwInputNum,ppInput) ) 
#define IWMWriter_SetInputProps(This,dwInputNum,pInput)    ( (This)->lpVtbl -> SetInputProps(This,dwInputNum,pInput) ) 
#define IWMWriter_GetInputFormatCount(This,dwInputNumber,pcFormats)    ( (This)->lpVtbl -> GetInputFormatCount(This,dwInputNumber,pcFormats) ) 
#define IWMWriter_GetInputFormat(This,dwInputNumber,dwFormatNumber,pProps)    ( (This)->lpVtbl -> GetInputFormat(This,dwInputNumber,dwFormatNumber,pProps) ) 
#define IWMWriter_BeginWriting(This)    ( (This)->lpVtbl -> BeginWriting(This) ) 
#define IWMWriter_EndWriting(This)    ( (This)->lpVtbl -> EndWriting(This) ) 
#define IWMWriter_AllocateSample(This,dwSampleSize,ppSample)    ( (This)->lpVtbl -> AllocateSample(This,dwSampleSize,ppSample) ) 
#define IWMWriter_WriteSample(This,dwInputNum,cnsSampleTime,dwFlags,pSample)    ( (This)->lpVtbl -> WriteSample(This,dwInputNum,cnsSampleTime,dwFlags,pSample) ) 
#define IWMWriter_Flush(This)    ( (This)->lpVtbl -> Flush(This) ) 
#endif
#endif
#ifndef __IWMDRMWriter_INTERFACE_DEFINED__
#define __IWMDRMWriter_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMWriter;
typedef struct IWMDRMWriterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMWriter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMWriter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMWriter * This);
	HRESULT(STDMETHODCALLTYPE * GenerateKeySeed) (IWMDRMWriter * This, WCHAR * pwszKeySeed, DWORD * pcwchLength);
	HRESULT(STDMETHODCALLTYPE * GenerateKeyID) (IWMDRMWriter * This, WCHAR * pwszKeyID, DWORD * pcwchLength);
	HRESULT(STDMETHODCALLTYPE * GenerateSigningKeyPair) (IWMDRMWriter * This, WCHAR * pwszPrivKey, DWORD * pcwchPrivKeyLength, WCHAR * pwszPubKey, DWORD * pcwchPubKeyLength);
	HRESULT(STDMETHODCALLTYPE * SetDRMAttribute) (IWMDRMWriter * This, WORD wStreamNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	END_INTERFACE
} IWMDRMWriterVtbl;
interface IWMDRMWriter
{
	CONST_VTBL struct IWMDRMWriterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMWriter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMWriter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMWriter_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMWriter_GenerateKeySeed(This,pwszKeySeed,pcwchLength)    ( (This)->lpVtbl -> GenerateKeySeed(This,pwszKeySeed,pcwchLength) ) 
#define IWMDRMWriter_GenerateKeyID(This,pwszKeyID,pcwchLength)    ( (This)->lpVtbl -> GenerateKeyID(This,pwszKeyID,pcwchLength) ) 
#define IWMDRMWriter_GenerateSigningKeyPair(This,pwszPrivKey,pcwchPrivKeyLength,pwszPubKey,pcwchPubKeyLength)    ( (This)->lpVtbl -> GenerateSigningKeyPair(This,pwszPrivKey,pcwchPrivKeyLength,pwszPubKey,pcwchPubKeyLength) ) 
#define IWMDRMWriter_SetDRMAttribute(This,wStreamNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetDRMAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) ) 
#endif
#endif
#ifndef __IWMDRMWriter2_INTERFACE_DEFINED__
#define __IWMDRMWriter2_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMWriter2;
typedef struct IWMDRMWriter2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMWriter2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMWriter2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMWriter2 * This);
	HRESULT(STDMETHODCALLTYPE * GenerateKeySeed) (IWMDRMWriter2 * This, WCHAR * pwszKeySeed, DWORD * pcwchLength);
	HRESULT(STDMETHODCALLTYPE * GenerateKeyID) (IWMDRMWriter2 * This, WCHAR * pwszKeyID, DWORD * pcwchLength);
	HRESULT(STDMETHODCALLTYPE * GenerateSigningKeyPair) (IWMDRMWriter2 * This, WCHAR * pwszPrivKey, DWORD * pcwchPrivKeyLength, WCHAR * pwszPubKey, DWORD * pcwchPubKeyLength);
	HRESULT(STDMETHODCALLTYPE * SetDRMAttribute) (IWMDRMWriter2 * This, WORD wStreamNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * SetWMDRMNetEncryption) (IWMDRMWriter2 * This, BOOL fSamplesEncrypted, BYTE * pbKeyID, DWORD cbKeyID);
	END_INTERFACE
} IWMDRMWriter2Vtbl;
interface IWMDRMWriter2
{
	CONST_VTBL struct IWMDRMWriter2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMWriter2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMWriter2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMWriter2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMWriter2_GenerateKeySeed(This,pwszKeySeed,pcwchLength)    ( (This)->lpVtbl -> GenerateKeySeed(This,pwszKeySeed,pcwchLength) ) 
#define IWMDRMWriter2_GenerateKeyID(This,pwszKeyID,pcwchLength)    ( (This)->lpVtbl -> GenerateKeyID(This,pwszKeyID,pcwchLength) ) 
#define IWMDRMWriter2_GenerateSigningKeyPair(This,pwszPrivKey,pcwchPrivKeyLength,pwszPubKey,pcwchPubKeyLength)    ( (This)->lpVtbl -> GenerateSigningKeyPair(This,pwszPrivKey,pcwchPrivKeyLength,pwszPubKey,pcwchPubKeyLength) ) 
#define IWMDRMWriter2_SetDRMAttribute(This,wStreamNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetDRMAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) ) 
#define IWMDRMWriter2_SetWMDRMNetEncryption(This,fSamplesEncrypted,pbKeyID,cbKeyID)    ( (This)->lpVtbl -> SetWMDRMNetEncryption(This,fSamplesEncrypted,pbKeyID,cbKeyID) ) 
#endif
#endif
#ifndef __IWMDRMWriter3_INTERFACE_DEFINED__
#define __IWMDRMWriter3_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMWriter3;
typedef struct IWMDRMWriter3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMWriter3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMWriter3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMWriter3 * This);
	HRESULT(STDMETHODCALLTYPE * GenerateKeySeed) (IWMDRMWriter3 * This, WCHAR * pwszKeySeed, DWORD * pcwchLength);
	HRESULT(STDMETHODCALLTYPE * GenerateKeyID) (IWMDRMWriter3 * This, WCHAR * pwszKeyID, DWORD * pcwchLength);
	HRESULT(STDMETHODCALLTYPE * GenerateSigningKeyPair) (IWMDRMWriter3 * This, WCHAR * pwszPrivKey, DWORD * pcwchPrivKeyLength, WCHAR * pwszPubKey, DWORD * pcwchPubKeyLength);
	HRESULT(STDMETHODCALLTYPE * SetDRMAttribute) (IWMDRMWriter3 * This, WORD wStreamNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * SetWMDRMNetEncryption) (IWMDRMWriter3 * This, BOOL fSamplesEncrypted, BYTE * pbKeyID, DWORD cbKeyID);
	HRESULT(STDMETHODCALLTYPE * SetProtectStreamSamples) (IWMDRMWriter3 * This, WMDRM_IMPORT_INIT_STRUCT * pImportInitStruct);
	END_INTERFACE
} IWMDRMWriter3Vtbl;
interface IWMDRMWriter3
{
	CONST_VTBL struct IWMDRMWriter3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMWriter3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMWriter3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMWriter3_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMWriter3_GenerateKeySeed(This,pwszKeySeed,pcwchLength)    ( (This)->lpVtbl -> GenerateKeySeed(This,pwszKeySeed,pcwchLength) ) 
#define IWMDRMWriter3_GenerateKeyID(This,pwszKeyID,pcwchLength)    ( (This)->lpVtbl -> GenerateKeyID(This,pwszKeyID,pcwchLength) ) 
#define IWMDRMWriter3_GenerateSigningKeyPair(This,pwszPrivKey,pcwchPrivKeyLength,pwszPubKey,pcwchPubKeyLength)    ( (This)->lpVtbl -> GenerateSigningKeyPair(This,pwszPrivKey,pcwchPrivKeyLength,pwszPubKey,pcwchPubKeyLength) ) 
#define IWMDRMWriter3_SetDRMAttribute(This,wStreamNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetDRMAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) ) 
#define IWMDRMWriter3_SetWMDRMNetEncryption(This,fSamplesEncrypted,pbKeyID,cbKeyID)    ( (This)->lpVtbl -> SetWMDRMNetEncryption(This,fSamplesEncrypted,pbKeyID,cbKeyID) ) 
#define IWMDRMWriter3_SetProtectStreamSamples(This,pImportInitStruct)    ( (This)->lpVtbl -> SetProtectStreamSamples(This,pImportInitStruct) ) 
#endif
#endif
#ifndef __IWMInputMediaProps_INTERFACE_DEFINED__
#define __IWMInputMediaProps_INTERFACE_DEFINED__ 
extern const IID IID_IWMInputMediaProps;
typedef struct IWMInputMediaPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMInputMediaProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMInputMediaProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMInputMediaProps * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (IWMInputMediaProps * This, GUID * pguidType);
	HRESULT(STDMETHODCALLTYPE * GetMediaType) (IWMInputMediaProps * This, WM_MEDIA_TYPE * pType, DWORD * pcbType);
	HRESULT(STDMETHODCALLTYPE * SetMediaType) (IWMInputMediaProps * This, WM_MEDIA_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * GetConnectionName) (IWMInputMediaProps * This, WCHAR * pwszName, WORD * pcchName);
	HRESULT(STDMETHODCALLTYPE * GetGroupName) (IWMInputMediaProps * This, WCHAR * pwszName, WORD * pcchName);
	END_INTERFACE
} IWMInputMediaPropsVtbl;
interface IWMInputMediaProps
{
	CONST_VTBL struct IWMInputMediaPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMInputMediaProps_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMInputMediaProps_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMInputMediaProps_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMInputMediaProps_GetType(This,pguidType)    ( (This)->lpVtbl -> GetType(This,pguidType) ) 
#define IWMInputMediaProps_GetMediaType(This,pType,pcbType)    ( (This)->lpVtbl -> GetMediaType(This,pType,pcbType) ) 
#define IWMInputMediaProps_SetMediaType(This,pType)    ( (This)->lpVtbl -> SetMediaType(This,pType) ) 
#define IWMInputMediaProps_GetConnectionName(This,pwszName,pcchName)    ( (This)->lpVtbl -> GetConnectionName(This,pwszName,pcchName) ) 
#define IWMInputMediaProps_GetGroupName(This,pwszName,pcchName)    ( (This)->lpVtbl -> GetGroupName(This,pwszName,pcchName) ) 
#endif
#endif
#ifndef __IWMPropertyVault_INTERFACE_DEFINED__
#define __IWMPropertyVault_INTERFACE_DEFINED__ 
extern const IID IID_IWMPropertyVault;
typedef struct IWMPropertyVaultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPropertyVault * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPropertyVault * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPropertyVault * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyCount) (IWMPropertyVault * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * GetPropertyByName) (IWMPropertyVault * This, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, DWORD * pdwSize);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IWMPropertyVault * This, LPCWSTR pszName, WMT_ATTR_DATATYPE pType, BYTE * pValue, DWORD dwSize);
	HRESULT(STDMETHODCALLTYPE * GetPropertyByIndex) (IWMPropertyVault * This, DWORD dwIndex, LPWSTR pszName, DWORD * pdwNameLen, WMT_ATTR_DATATYPE * pType, BYTE * pValue, DWORD * pdwSize);
	HRESULT(STDMETHODCALLTYPE * CopyPropertiesFrom) (IWMPropertyVault * This, IWMPropertyVault * pIWMPropertyVault);
	HRESULT(STDMETHODCALLTYPE * Clear) (IWMPropertyVault * This);
	END_INTERFACE
} IWMPropertyVaultVtbl;
interface IWMPropertyVault
{
	CONST_VTBL struct IWMPropertyVaultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPropertyVault_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMPropertyVault_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMPropertyVault_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMPropertyVault_GetPropertyCount(This,pdwCount)    ( (This)->lpVtbl -> GetPropertyCount(This,pdwCount) ) 
#define IWMPropertyVault_GetPropertyByName(This,pszName,pType,pValue,pdwSize)    ( (This)->lpVtbl -> GetPropertyByName(This,pszName,pType,pValue,pdwSize) ) 
#define IWMPropertyVault_SetProperty(This,pszName,pType,pValue,dwSize)    ( (This)->lpVtbl -> SetProperty(This,pszName,pType,pValue,dwSize) ) 
#define IWMPropertyVault_GetPropertyByIndex(This,dwIndex,pszName,pdwNameLen,pType,pValue,pdwSize)    ( (This)->lpVtbl -> GetPropertyByIndex(This,dwIndex,pszName,pdwNameLen,pType,pValue,pdwSize) ) 
#define IWMPropertyVault_CopyPropertiesFrom(This,pIWMPropertyVault)    ( (This)->lpVtbl -> CopyPropertiesFrom(This,pIWMPropertyVault) ) 
#define IWMPropertyVault_Clear(This)    ( (This)->lpVtbl -> Clear(This) ) 
#endif
#endif
#ifndef __IWMIStreamProps_INTERFACE_DEFINED__
#define __IWMIStreamProps_INTERFACE_DEFINED__ 
extern const IID IID_IWMIStreamProps;
typedef struct IWMIStreamPropsVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMIStreamProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMIStreamProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMIStreamProps * This);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IWMIStreamProps * This, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, DWORD * pdwSize);
	END_INTERFACE
} IWMIStreamPropsVtbl;
interface IWMIStreamProps
{
    CONST_VTBL struct IWMIStreamPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMIStreamProps_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMIStreamProps_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMIStreamProps_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMIStreamProps_GetProperty(This,pszName,pType,pValue,pdwSize)    ( (This)->lpVtbl -> GetProperty(This,pszName,pType,pValue,pdwSize) ) 
#endif
#endif
#ifndef __IWMReader_INTERFACE_DEFINED__
#define __IWMReader_INTERFACE_DEFINED__ 
extern const IID IID_IWMReader;
typedef struct IWMReaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReader * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IWMReader * This, const WCHAR * pwszURL, IWMReaderCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * Close) (IWMReader * This);
	HRESULT(STDMETHODCALLTYPE * GetOutputCount) (IWMReader * This, DWORD * pcOutputs);
	HRESULT(STDMETHODCALLTYPE * GetOutputProps) (IWMReader * This, DWORD dwOutputNum, IWMOutputMediaProps ** ppOutput);
	HRESULT(STDMETHODCALLTYPE * SetOutputProps) (IWMReader * This, DWORD dwOutputNum, IWMOutputMediaProps * pOutput);
	HRESULT(STDMETHODCALLTYPE * GetOutputFormatCount) (IWMReader * This, DWORD dwOutputNumber, DWORD * pcFormats);
	HRESULT(STDMETHODCALLTYPE * GetOutputFormat) (IWMReader * This, DWORD dwOutputNumber, DWORD dwFormatNumber, IWMOutputMediaProps ** ppProps);
	HRESULT(STDMETHODCALLTYPE * Start) (IWMReader * This, QWORD cnsStart, QWORD cnsDuration, float fRate, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * Stop) (IWMReader * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (IWMReader * This);
	HRESULT(STDMETHODCALLTYPE * Resume) (IWMReader * This);
	END_INTERFACE
} IWMReaderVtbl;
interface IWMReader
{
	CONST_VTBL struct IWMReaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReader_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReader_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReader_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReader_Open(This,pwszURL,pCallback,pvContext)    ( (This)->lpVtbl -> Open(This,pwszURL,pCallback,pvContext) ) 
#define IWMReader_Close(This)    ( (This)->lpVtbl -> Close(This) ) 
#define IWMReader_GetOutputCount(This,pcOutputs)    ( (This)->lpVtbl -> GetOutputCount(This,pcOutputs) ) 
#define IWMReader_GetOutputProps(This,dwOutputNum,ppOutput)    ( (This)->lpVtbl -> GetOutputProps(This,dwOutputNum,ppOutput) ) 
#define IWMReader_SetOutputProps(This,dwOutputNum,pOutput)    ( (This)->lpVtbl -> SetOutputProps(This,dwOutputNum,pOutput) ) 
#define IWMReader_GetOutputFormatCount(This,dwOutputNumber,pcFormats)    ( (This)->lpVtbl -> GetOutputFormatCount(This,dwOutputNumber,pcFormats) ) 
#define IWMReader_GetOutputFormat(This,dwOutputNumber,dwFormatNumber,ppProps)    ( (This)->lpVtbl -> GetOutputFormat(This,dwOutputNumber,dwFormatNumber,ppProps) ) 
#define IWMReader_Start(This,cnsStart,cnsDuration,fRate,pvContext)    ( (This)->lpVtbl -> Start(This,cnsStart,cnsDuration,fRate,pvContext) ) 
#define IWMReader_Stop(This)    ( (This)->lpVtbl -> Stop(This) ) 
#define IWMReader_Pause(This)    ( (This)->lpVtbl -> Pause(This) ) 
#define IWMReader_Resume(This)    ( (This)->lpVtbl -> Resume(This) ) 
#endif
#endif
#ifndef __IWMSyncReader_INTERFACE_DEFINED__
#define __IWMSyncReader_INTERFACE_DEFINED__ 
extern const IID IID_IWMSyncReader;
typedef struct IWMSyncReaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSyncReader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSyncReader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSyncReader * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IWMSyncReader * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * Close) (IWMSyncReader * This);
	HRESULT(STDMETHODCALLTYPE * SetRange) (IWMSyncReader * This, QWORD cnsStartTime, LONGLONG cnsDuration);
	HRESULT(STDMETHODCALLTYPE * SetRangeByFrame) (IWMSyncReader * This, WORD wStreamNum, QWORD qwFrameNumber, LONGLONG cFramesToRead);
	HRESULT(STDMETHODCALLTYPE * GetNextSample) (IWMSyncReader * This, WORD wStreamNum, INSSBuffer ** ppSample, QWORD * pcnsSampleTime, QWORD * pcnsDuration, DWORD * pdwFlags, DWORD * pdwOutputNum, WORD * pwStreamNum);
	HRESULT(STDMETHODCALLTYPE * SetStreamsSelected) (IWMSyncReader * This, WORD cStreamCount, WORD * pwStreamNumbers, WMT_STREAM_SELECTION * pSelections);
	HRESULT(STDMETHODCALLTYPE * GetStreamSelected) (IWMSyncReader * This, WORD wStreamNum, WMT_STREAM_SELECTION * pSelection);
	HRESULT(STDMETHODCALLTYPE * SetReadStreamSamples) (IWMSyncReader * This, WORD wStreamNum, BOOL fCompressed);
	HRESULT(STDMETHODCALLTYPE * GetReadStreamSamples) (IWMSyncReader * This, WORD wStreamNum, BOOL * pfCompressed);
	HRESULT(STDMETHODCALLTYPE * GetOutputSetting) (IWMSyncReader * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetOutputSetting) (IWMSyncReader * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * GetOutputCount) (IWMSyncReader * This, DWORD * pcOutputs);
	HRESULT(STDMETHODCALLTYPE * GetOutputProps) (IWMSyncReader * This, DWORD dwOutputNum, IWMOutputMediaProps ** ppOutput);
	HRESULT(STDMETHODCALLTYPE * SetOutputProps) (IWMSyncReader * This, DWORD dwOutputNum, IWMOutputMediaProps * pOutput);
	HRESULT(STDMETHODCALLTYPE * GetOutputFormatCount) (IWMSyncReader * This, DWORD dwOutputNum, DWORD * pcFormats);
	HRESULT(STDMETHODCALLTYPE * GetOutputFormat) (IWMSyncReader * This, DWORD dwOutputNum, DWORD dwFormatNum, IWMOutputMediaProps ** ppProps);
	HRESULT(STDMETHODCALLTYPE * GetOutputNumberForStream) (IWMSyncReader * This, WORD wStreamNum, DWORD * pdwOutputNum);
	HRESULT(STDMETHODCALLTYPE * GetStreamNumberForOutput) (IWMSyncReader * This, DWORD dwOutputNum, WORD * pwStreamNum);
	HRESULT(STDMETHODCALLTYPE * GetMaxOutputSampleSize) (IWMSyncReader * This, DWORD dwOutput, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * GetMaxStreamSampleSize) (IWMSyncReader * This, WORD wStream, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * OpenStream) (IWMSyncReader * This, IStream * pStream);
	END_INTERFACE
} IWMSyncReaderVtbl;
interface IWMSyncReader
{
 CONST_VTBL struct IWMSyncReaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSyncReader_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMSyncReader_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMSyncReader_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMSyncReader_Open(This,pwszFilename)    ( (This)->lpVtbl -> Open(This,pwszFilename) ) 
#define IWMSyncReader_Close(This)    ( (This)->lpVtbl -> Close(This) ) 
#define IWMSyncReader_SetRange(This,cnsStartTime,cnsDuration)    ( (This)->lpVtbl -> SetRange(This,cnsStartTime,cnsDuration) ) 
#define IWMSyncReader_SetRangeByFrame(This,wStreamNum,qwFrameNumber,cFramesToRead)    ( (This)->lpVtbl -> SetRangeByFrame(This,wStreamNum,qwFrameNumber,cFramesToRead) ) 
#define IWMSyncReader_GetNextSample(This,wStreamNum,ppSample,pcnsSampleTime,pcnsDuration,pdwFlags,pdwOutputNum,pwStreamNum)    ( (This)->lpVtbl -> GetNextSample(This,wStreamNum,ppSample,pcnsSampleTime,pcnsDuration,pdwFlags,pdwOutputNum,pwStreamNum) ) 
#define IWMSyncReader_SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections)    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) ) 
#define IWMSyncReader_GetStreamSelected(This,wStreamNum,pSelection)    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) ) 
#define IWMSyncReader_SetReadStreamSamples(This,wStreamNum,fCompressed)    ( (This)->lpVtbl -> SetReadStreamSamples(This,wStreamNum,fCompressed) ) 
#define IWMSyncReader_GetReadStreamSamples(This,wStreamNum,pfCompressed)    ( (This)->lpVtbl -> GetReadStreamSamples(This,wStreamNum,pfCompressed) ) 
#define IWMSyncReader_GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) ) 
#define IWMSyncReader_SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) ) 
#define IWMSyncReader_GetOutputCount(This,pcOutputs)    ( (This)->lpVtbl -> GetOutputCount(This,pcOutputs) ) 
#define IWMSyncReader_GetOutputProps(This,dwOutputNum,ppOutput)    ( (This)->lpVtbl -> GetOutputProps(This,dwOutputNum,ppOutput) ) 
#define IWMSyncReader_SetOutputProps(This,dwOutputNum,pOutput)    ( (This)->lpVtbl -> SetOutputProps(This,dwOutputNum,pOutput) ) 
#define IWMSyncReader_GetOutputFormatCount(This,dwOutputNum,pcFormats)    ( (This)->lpVtbl -> GetOutputFormatCount(This,dwOutputNum,pcFormats) ) 
#define IWMSyncReader_GetOutputFormat(This,dwOutputNum,dwFormatNum,ppProps)    ( (This)->lpVtbl -> GetOutputFormat(This,dwOutputNum,dwFormatNum,ppProps) ) 
#define IWMSyncReader_GetOutputNumberForStream(This,wStreamNum,pdwOutputNum)    ( (This)->lpVtbl -> GetOutputNumberForStream(This,wStreamNum,pdwOutputNum) ) 
#define IWMSyncReader_GetStreamNumberForOutput(This,dwOutputNum,pwStreamNum)    ( (This)->lpVtbl -> GetStreamNumberForOutput(This,dwOutputNum,pwStreamNum) ) 
#define IWMSyncReader_GetMaxOutputSampleSize(This,dwOutput,pcbMax)    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) ) 
#define IWMSyncReader_GetMaxStreamSampleSize(This,wStream,pcbMax)    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) ) 
#define IWMSyncReader_OpenStream(This,pStream)    ( (This)->lpVtbl -> OpenStream(This,pStream) ) 
#endif
#endif
#ifndef __IWMSyncReader2_INTERFACE_DEFINED__
#define __IWMSyncReader2_INTERFACE_DEFINED__ 
extern const IID IID_IWMSyncReader2;
typedef struct IWMSyncReader2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSyncReader2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSyncReader2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSyncReader2 * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IWMSyncReader2 * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * Close) (IWMSyncReader2 * This);
	HRESULT(STDMETHODCALLTYPE * SetRange) (IWMSyncReader2 * This, QWORD cnsStartTime, LONGLONG cnsDuration);
	HRESULT(STDMETHODCALLTYPE * SetRangeByFrame) (IWMSyncReader2 * This, WORD wStreamNum, QWORD qwFrameNumber, LONGLONG cFramesToRead);
	HRESULT(STDMETHODCALLTYPE * GetNextSample) (IWMSyncReader2 * This, WORD wStreamNum, INSSBuffer ** ppSample, QWORD * pcnsSampleTime, QWORD * pcnsDuration, DWORD * pdwFlags, DWORD * pdwOutputNum, WORD * pwStreamNum);
	HRESULT(STDMETHODCALLTYPE * SetStreamsSelected) (IWMSyncReader2 * This, WORD cStreamCount, WORD * pwStreamNumbers, WMT_STREAM_SELECTION * pSelections);
	HRESULT(STDMETHODCALLTYPE * GetStreamSelected) (IWMSyncReader2 * This, WORD wStreamNum, WMT_STREAM_SELECTION * pSelection);
	HRESULT(STDMETHODCALLTYPE * SetReadStreamSamples) (IWMSyncReader2 * This, WORD wStreamNum, BOOL fCompressed);
	HRESULT(STDMETHODCALLTYPE * GetReadStreamSamples) (IWMSyncReader2 * This, WORD wStreamNum, BOOL * pfCompressed);
	HRESULT(STDMETHODCALLTYPE * GetOutputSetting) (IWMSyncReader2 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetOutputSetting) (IWMSyncReader2 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * GetOutputCount) (IWMSyncReader2 * This, DWORD * pcOutputs);
	HRESULT(STDMETHODCALLTYPE * GetOutputProps) (IWMSyncReader2 * This, DWORD dwOutputNum, IWMOutputMediaProps ** ppOutput);
	HRESULT(STDMETHODCALLTYPE * SetOutputProps) (IWMSyncReader2 * This, DWORD dwOutputNum, IWMOutputMediaProps * pOutput);
	HRESULT(STDMETHODCALLTYPE * GetOutputFormatCount) (IWMSyncReader2 * This, DWORD dwOutputNum, DWORD * pcFormats);
	HRESULT(STDMETHODCALLTYPE * GetOutputFormat) (IWMSyncReader2 * This, DWORD dwOutputNum, DWORD dwFormatNum, IWMOutputMediaProps ** ppProps);
	HRESULT(STDMETHODCALLTYPE * GetOutputNumberForStream) (IWMSyncReader2 * This, WORD wStreamNum, DWORD * pdwOutputNum);
	HRESULT(STDMETHODCALLTYPE * GetStreamNumberForOutput) (IWMSyncReader2 * This, DWORD dwOutputNum, WORD * pwStreamNum);
	HRESULT(STDMETHODCALLTYPE * GetMaxOutputSampleSize) (IWMSyncReader2 * This, DWORD dwOutput, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * GetMaxStreamSampleSize) (IWMSyncReader2 * This, WORD wStream, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * OpenStream) (IWMSyncReader2 * This, IStream * pStream);
	HRESULT(STDMETHODCALLTYPE * SetRangeByTimecode) (IWMSyncReader2 * This, WORD wStreamNum, WMT_TIMECODE_EXTENSION_DATA * pStart, WMT_TIMECODE_EXTENSION_DATA * pEnd);
	HRESULT(STDMETHODCALLTYPE * SetRangeByFrameEx) (IWMSyncReader2 * This, WORD wStreamNum, QWORD qwFrameNumber, LONGLONG cFramesToRead, QWORD * pcnsStartTime);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForOutput) (IWMSyncReader2 * This, DWORD dwOutputNum, IWMReaderAllocatorEx * pAllocator);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForOutput) (IWMSyncReader2 * This, DWORD dwOutputNum, IWMReaderAllocatorEx ** ppAllocator);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForStream) (IWMSyncReader2 * This, WORD wStreamNum, IWMReaderAllocatorEx * pAllocator);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForStream) (IWMSyncReader2 * This, WORD dwSreamNum, IWMReaderAllocatorEx ** ppAllocator);
	END_INTERFACE
} IWMSyncReader2Vtbl;
interface IWMSyncReader2
{
	CONST_VTBL struct IWMSyncReader2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSyncReader2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMSyncReader2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMSyncReader2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMSyncReader2_Open(This,pwszFilename)    ( (This)->lpVtbl -> Open(This,pwszFilename) ) 
#define IWMSyncReader2_Close(This)    ( (This)->lpVtbl -> Close(This) ) 
#define IWMSyncReader2_SetRange(This,cnsStartTime,cnsDuration)    ( (This)->lpVtbl -> SetRange(This,cnsStartTime,cnsDuration) ) 
#define IWMSyncReader2_SetRangeByFrame(This,wStreamNum,qwFrameNumber,cFramesToRead)    ( (This)->lpVtbl -> SetRangeByFrame(This,wStreamNum,qwFrameNumber,cFramesToRead) ) 
#define IWMSyncReader2_GetNextSample(This,wStreamNum,ppSample,pcnsSampleTime,pcnsDuration,pdwFlags,pdwOutputNum,pwStreamNum)    ( (This)->lpVtbl -> GetNextSample(This,wStreamNum,ppSample,pcnsSampleTime,pcnsDuration,pdwFlags,pdwOutputNum,pwStreamNum) ) 
#define IWMSyncReader2_SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections)    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) ) 
#define IWMSyncReader2_GetStreamSelected(This,wStreamNum,pSelection)    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) ) 
#define IWMSyncReader2_SetReadStreamSamples(This,wStreamNum,fCompressed)    ( (This)->lpVtbl -> SetReadStreamSamples(This,wStreamNum,fCompressed) ) 
#define IWMSyncReader2_GetReadStreamSamples(This,wStreamNum,pfCompressed)    ( (This)->lpVtbl -> GetReadStreamSamples(This,wStreamNum,pfCompressed) ) 
#define IWMSyncReader2_GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) ) 
#define IWMSyncReader2_SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) ) 
#define IWMSyncReader2_GetOutputCount(This,pcOutputs)    ( (This)->lpVtbl -> GetOutputCount(This,pcOutputs) ) 
#define IWMSyncReader2_GetOutputProps(This,dwOutputNum,ppOutput)    ( (This)->lpVtbl -> GetOutputProps(This,dwOutputNum,ppOutput) ) 
#define IWMSyncReader2_SetOutputProps(This,dwOutputNum,pOutput)    ( (This)->lpVtbl -> SetOutputProps(This,dwOutputNum,pOutput) ) 
#define IWMSyncReader2_GetOutputFormatCount(This,dwOutputNum,pcFormats)    ( (This)->lpVtbl -> GetOutputFormatCount(This,dwOutputNum,pcFormats) ) 
#define IWMSyncReader2_GetOutputFormat(This,dwOutputNum,dwFormatNum,ppProps)    ( (This)->lpVtbl -> GetOutputFormat(This,dwOutputNum,dwFormatNum,ppProps) ) 
#define IWMSyncReader2_GetOutputNumberForStream(This,wStreamNum,pdwOutputNum)    ( (This)->lpVtbl -> GetOutputNumberForStream(This,wStreamNum,pdwOutputNum) ) 
#define IWMSyncReader2_GetStreamNumberForOutput(This,dwOutputNum,pwStreamNum)    ( (This)->lpVtbl -> GetStreamNumberForOutput(This,dwOutputNum,pwStreamNum) ) 
#define IWMSyncReader2_GetMaxOutputSampleSize(This,dwOutput,pcbMax)    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) ) 
#define IWMSyncReader2_GetMaxStreamSampleSize(This,wStream,pcbMax)    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) ) 
#define IWMSyncReader2_OpenStream(This,pStream)    ( (This)->lpVtbl -> OpenStream(This,pStream) ) 
#define IWMSyncReader2_SetRangeByTimecode(This,wStreamNum,pStart,pEnd)    ( (This)->lpVtbl -> SetRangeByTimecode(This,wStreamNum,pStart,pEnd) ) 
#define IWMSyncReader2_SetRangeByFrameEx(This,wStreamNum,qwFrameNumber,cFramesToRead,pcnsStartTime)    ( (This)->lpVtbl -> SetRangeByFrameEx(This,wStreamNum,qwFrameNumber,cFramesToRead,pcnsStartTime) ) 
#define IWMSyncReader2_SetAllocateForOutput(This,dwOutputNum,pAllocator)    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,pAllocator) ) 
#define IWMSyncReader2_GetAllocateForOutput(This,dwOutputNum,ppAllocator)    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,ppAllocator) ) 
#define IWMSyncReader2_SetAllocateForStream(This,wStreamNum,pAllocator)    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,pAllocator) ) 
#define IWMSyncReader2_GetAllocateForStream(This,dwSreamNum,ppAllocator)    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,ppAllocator) ) 
#endif
#endif
#ifndef __IWMOutputMediaProps_INTERFACE_DEFINED__
#define __IWMOutputMediaProps_INTERFACE_DEFINED__ 
extern const IID IID_IWMOutputMediaProps;
typedef struct IWMOutputMediaPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMOutputMediaProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMOutputMediaProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMOutputMediaProps * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (IWMOutputMediaProps * This, GUID * pguidType);
	HRESULT(STDMETHODCALLTYPE * GetMediaType) (IWMOutputMediaProps * This, WM_MEDIA_TYPE * pType, DWORD * pcbType);
	HRESULT(STDMETHODCALLTYPE * SetMediaType) (IWMOutputMediaProps * This, WM_MEDIA_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * GetStreamGroupName) (IWMOutputMediaProps * This, WCHAR * pwszName, WORD * pcchName);
	HRESULT(STDMETHODCALLTYPE * GetConnectionName) (IWMOutputMediaProps * This, WCHAR * pwszName, WORD * pcchName);
	END_INTERFACE
} IWMOutputMediaPropsVtbl;
interface IWMOutputMediaProps
{
	CONST_VTBL struct IWMOutputMediaPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMOutputMediaProps_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMOutputMediaProps_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMOutputMediaProps_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMOutputMediaProps_GetType(This,pguidType)    ( (This)->lpVtbl -> GetType(This,pguidType) ) 
#define IWMOutputMediaProps_GetMediaType(This,pType,pcbType)    ( (This)->lpVtbl -> GetMediaType(This,pType,pcbType) ) 
#define IWMOutputMediaProps_SetMediaType(This,pType)    ( (This)->lpVtbl -> SetMediaType(This,pType) ) 
#define IWMOutputMediaProps_GetStreamGroupName(This,pwszName,pcchName)    ( (This)->lpVtbl -> GetStreamGroupName(This,pwszName,pcchName) ) 
#define IWMOutputMediaProps_GetConnectionName(This,pwszName,pcchName)    ( (This)->lpVtbl -> GetConnectionName(This,pwszName,pcchName) ) 
#endif
#endif
#ifndef __IWMStatusCallback_INTERFACE_DEFINED__
#define __IWMStatusCallback_INTERFACE_DEFINED__ 
extern const IID IID_IWMStatusCallback;
typedef struct IWMStatusCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMStatusCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMStatusCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMStatusCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnStatus) (IWMStatusCallback * This, WMT_STATUS Status, HRESULT hr, WMT_ATTR_DATATYPE dwType, BYTE * pValue, void *pvContext);
	END_INTERFACE
} IWMStatusCallbackVtbl;
interface IWMStatusCallback
{
	CONST_VTBL struct IWMStatusCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMStatusCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMStatusCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMStatusCallback_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMStatusCallback_OnStatus(This,Status,hr,dwType,pValue,pvContext)    ( (This)->lpVtbl -> OnStatus(This,Status,hr,dwType,pValue,pvContext) ) 
#endif
#endif
#ifndef __IWMReaderCallback_INTERFACE_DEFINED__
#define __IWMReaderCallback_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderCallback;
typedef struct IWMReaderCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnStatus) (IWMReaderCallback * This, WMT_STATUS Status, HRESULT hr, WMT_ATTR_DATATYPE dwType, BYTE * pValue, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * OnSample) (IWMReaderCallback * This, DWORD dwOutputNum, QWORD cnsSampleTime, QWORD cnsSampleDuration, DWORD dwFlags, INSSBuffer * pSample, void *pvContext);
	END_INTERFACE
} IWMReaderCallbackVtbl;
interface IWMReaderCallback
{
	CONST_VTBL struct IWMReaderCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderCallback_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderCallback_OnStatus(This,Status,hr,dwType,pValue,pvContext)    ( (This)->lpVtbl -> OnStatus(This,Status,hr,dwType,pValue,pvContext) ) 
#define IWMReaderCallback_OnSample(This,dwOutputNum,cnsSampleTime,cnsSampleDuration,dwFlags,pSample,pvContext)    ( (This)->lpVtbl -> OnSample(This,dwOutputNum,cnsSampleTime,cnsSampleDuration,dwFlags,pSample,pvContext) ) 
#endif
#endif
#ifndef __IWMCredentialCallback_INTERFACE_DEFINED__
#define __IWMCredentialCallback_INTERFACE_DEFINED__ 
extern const IID IID_IWMCredentialCallback;
typedef struct IWMCredentialCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMCredentialCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMCredentialCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMCredentialCallback * This);
	HRESULT(STDMETHODCALLTYPE * AcquireCredentials) (IWMCredentialCallback * This, WCHAR * pwszRealm, WCHAR * pwszSite, WCHAR * pwszUser, DWORD cchUser, WCHAR * pwszPassword, DWORD cchPassword, HRESULT hrStatus, DWORD * pdwFlags);
	END_INTERFACE
} IWMCredentialCallbackVtbl;
interface IWMCredentialCallback
{
	CONST_VTBL struct IWMCredentialCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMCredentialCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMCredentialCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMCredentialCallback_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMCredentialCallback_AcquireCredentials(This,pwszRealm,pwszSite,pwszUser,cchUser,pwszPassword,cchPassword,hrStatus,pdwFlags)    ( (This)->lpVtbl -> AcquireCredentials(This,pwszRealm,pwszSite,pwszUser,cchUser,pwszPassword,cchPassword,hrStatus,pdwFlags) ) 
#endif
#endif
#ifndef __IWMMetadataEditor_INTERFACE_DEFINED__
#define __IWMMetadataEditor_INTERFACE_DEFINED__ 
extern const IID IID_IWMMetadataEditor;
typedef struct IWMMetadataEditorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMMetadataEditor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMMetadataEditor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMMetadataEditor * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IWMMetadataEditor * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * Close) (IWMMetadataEditor * This);
	HRESULT(STDMETHODCALLTYPE * Flush) (IWMMetadataEditor * This);
	END_INTERFACE
} IWMMetadataEditorVtbl;
interface IWMMetadataEditor
{
    CONST_VTBL struct IWMMetadataEditorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMMetadataEditor_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMMetadataEditor_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMMetadataEditor_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMMetadataEditor_Open(This,pwszFilename)    ( (This)->lpVtbl -> Open(This,pwszFilename) ) 
#define IWMMetadataEditor_Close(This)    ( (This)->lpVtbl -> Close(This) ) 
#define IWMMetadataEditor_Flush(This)    ( (This)->lpVtbl -> Flush(This) ) 
#endif
#endif
#ifndef __IWMMetadataEditor2_INTERFACE_DEFINED__
#define __IWMMetadataEditor2_INTERFACE_DEFINED__ 
extern const IID IID_IWMMetadataEditor2;
typedef struct IWMMetadataEditor2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMMetadataEditor2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMMetadataEditor2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMMetadataEditor2 * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IWMMetadataEditor2 * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * Close) (IWMMetadataEditor2 * This);
	HRESULT(STDMETHODCALLTYPE * Flush) (IWMMetadataEditor2 * This);
	HRESULT(STDMETHODCALLTYPE * OpenEx) (IWMMetadataEditor2 * This, const WCHAR * pwszFilename, DWORD dwDesiredAccess, DWORD dwShareMode);
	END_INTERFACE
} IWMMetadataEditor2Vtbl;
interface IWMMetadataEditor2
{
    CONST_VTBL struct IWMMetadataEditor2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMMetadataEditor2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMMetadataEditor2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMMetadataEditor2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMMetadataEditor2_Open(This,pwszFilename)    ( (This)->lpVtbl -> Open(This,pwszFilename) ) 
#define IWMMetadataEditor2_Close(This)    ( (This)->lpVtbl -> Close(This) ) 
#define IWMMetadataEditor2_Flush(This)    ( (This)->lpVtbl -> Flush(This) ) 
#define IWMMetadataEditor2_OpenEx(This,pwszFilename,dwDesiredAccess,dwShareMode)    ( (This)->lpVtbl -> OpenEx(This,pwszFilename,dwDesiredAccess,dwShareMode) ) 
#endif
#endif
#ifndef __IWMDRMEditor_INTERFACE_DEFINED__
#define __IWMDRMEditor_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMEditor;
typedef struct IWMDRMEditorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMEditor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMEditor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMEditor * This);
	HRESULT(STDMETHODCALLTYPE * GetDRMProperty) (IWMDRMEditor * This, LPCWSTR pwstrName, WMT_ATTR_DATATYPE * pdwType, BYTE * pValue, WORD * pcbLength);
	END_INTERFACE
} IWMDRMEditorVtbl;
interface IWMDRMEditor
{
    CONST_VTBL struct IWMDRMEditorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMEditor_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMEditor_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMEditor_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMEditor_GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength)    ( (This)->lpVtbl -> GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength) ) 
#endif
#endif
#ifndef __IWMHeaderInfo_INTERFACE_DEFINED__
#define __IWMHeaderInfo_INTERFACE_DEFINED__ 
extern const IID IID_IWMHeaderInfo;
typedef struct IWMHeaderInfoVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMHeaderInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMHeaderInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMHeaderInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetAttributeCount) (IWMHeaderInfo * This, WORD wStreamNum, WORD * pcAttributes);
	HRESULT(STDMETHODCALLTYPE * GetAttributeByIndex) (IWMHeaderInfo * This, WORD wIndex, WORD * pwStreamNum, WCHAR * pwszName, WORD * pcchNameLen, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * GetAttributeByName) (IWMHeaderInfo * This, WORD * pwStreamNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetAttribute) (IWMHeaderInfo * This, WORD wStreamNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * GetMarkerCount) (IWMHeaderInfo * This, WORD * pcMarkers);
	HRESULT(STDMETHODCALLTYPE * GetMarker) (IWMHeaderInfo * This, WORD wIndex, WCHAR * pwszMarkerName, WORD * pcchMarkerNameLen, QWORD * pcnsMarkerTime);
	HRESULT(STDMETHODCALLTYPE * AddMarker) (IWMHeaderInfo * This, LPCWSTR_WMSDK_TYPE_SAFE pwszMarkerName, QWORD cnsMarkerTime);
	HRESULT(STDMETHODCALLTYPE * RemoveMarker) (IWMHeaderInfo * This, WORD wIndex);
	HRESULT(STDMETHODCALLTYPE * GetScriptCount) (IWMHeaderInfo * This, WORD * pcScripts);
	HRESULT(STDMETHODCALLTYPE * GetScript) (IWMHeaderInfo * This, WORD wIndex, WCHAR * pwszType, WORD * pcchTypeLen, WCHAR * pwszCommand, WORD * pcchCommandLen, QWORD * pcnsScriptTime);
	HRESULT(STDMETHODCALLTYPE * AddScript) (IWMHeaderInfo * This, LPCWSTR_WMSDK_TYPE_SAFE pwszType, LPCWSTR_WMSDK_TYPE_SAFE pwszCommand, QWORD cnsScriptTime);
	HRESULT(STDMETHODCALLTYPE * RemoveScript) (IWMHeaderInfo * This, WORD wIndex);
	END_INTERFACE
} IWMHeaderInfoVtbl;
interface IWMHeaderInfo
{
    CONST_VTBL struct IWMHeaderInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMHeaderInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMHeaderInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMHeaderInfo_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMHeaderInfo_GetAttributeCount(This,wStreamNum,pcAttributes)    ( (This)->lpVtbl -> GetAttributeCount(This,wStreamNum,pcAttributes) ) 
#define IWMHeaderInfo_GetAttributeByIndex(This,wIndex,pwStreamNum,pwszName,pcchNameLen,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetAttributeByIndex(This,wIndex,pwStreamNum,pwszName,pcchNameLen,pType,pValue,pcbLength) ) 
#define IWMHeaderInfo_GetAttributeByName(This,pwStreamNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetAttributeByName(This,pwStreamNum,pszName,pType,pValue,pcbLength) ) 
#define IWMHeaderInfo_SetAttribute(This,wStreamNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) ) 
#define IWMHeaderInfo_GetMarkerCount(This,pcMarkers)    ( (This)->lpVtbl -> GetMarkerCount(This,pcMarkers) ) 
#define IWMHeaderInfo_GetMarker(This,wIndex,pwszMarkerName,pcchMarkerNameLen,pcnsMarkerTime)    ( (This)->lpVtbl -> GetMarker(This,wIndex,pwszMarkerName,pcchMarkerNameLen,pcnsMarkerTime) ) 
#define IWMHeaderInfo_AddMarker(This,pwszMarkerName,cnsMarkerTime)    ( (This)->lpVtbl -> AddMarker(This,pwszMarkerName,cnsMarkerTime) ) 
#define IWMHeaderInfo_RemoveMarker(This,wIndex)    ( (This)->lpVtbl -> RemoveMarker(This,wIndex) ) 
#define IWMHeaderInfo_GetScriptCount(This,pcScripts)    ( (This)->lpVtbl -> GetScriptCount(This,pcScripts) ) 
#define IWMHeaderInfo_GetScript(This,wIndex,pwszType,pcchTypeLen,pwszCommand,pcchCommandLen,pcnsScriptTime)    ( (This)->lpVtbl -> GetScript(This,wIndex,pwszType,pcchTypeLen,pwszCommand,pcchCommandLen,pcnsScriptTime) ) 
#define IWMHeaderInfo_AddScript(This,pwszType,pwszCommand,cnsScriptTime)    ( (This)->lpVtbl -> AddScript(This,pwszType,pwszCommand,cnsScriptTime) ) 
#define IWMHeaderInfo_RemoveScript(This,wIndex)    ( (This)->lpVtbl -> RemoveScript(This,wIndex) ) 
#endif
#endif
#ifndef __IWMHeaderInfo2_INTERFACE_DEFINED__
#define __IWMHeaderInfo2_INTERFACE_DEFINED__ 
extern const IID IID_IWMHeaderInfo2;
typedef struct IWMHeaderInfo2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMHeaderInfo2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMHeaderInfo2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMHeaderInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * GetAttributeCount) (IWMHeaderInfo2 * This, WORD wStreamNum, WORD * pcAttributes);
	HRESULT(STDMETHODCALLTYPE * GetAttributeByIndex) (IWMHeaderInfo2 * This, WORD wIndex, WORD * pwStreamNum, WCHAR * pwszName, WORD * pcchNameLen, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * GetAttributeByName) (IWMHeaderInfo2 * This, WORD * pwStreamNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetAttribute) (IWMHeaderInfo2 * This, WORD wStreamNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * GetMarkerCount) (IWMHeaderInfo2 * This, WORD * pcMarkers);
	HRESULT(STDMETHODCALLTYPE * GetMarker) (IWMHeaderInfo2 * This, WORD wIndex, WCHAR * pwszMarkerName, WORD * pcchMarkerNameLen, QWORD * pcnsMarkerTime);
	HRESULT(STDMETHODCALLTYPE * AddMarker) (IWMHeaderInfo2 * This, LPCWSTR_WMSDK_TYPE_SAFE pwszMarkerName, QWORD cnsMarkerTime);
	HRESULT(STDMETHODCALLTYPE * RemoveMarker) (IWMHeaderInfo2 * This, WORD wIndex);
	HRESULT(STDMETHODCALLTYPE * GetScriptCount) (IWMHeaderInfo2 * This, WORD * pcScripts);
	HRESULT(STDMETHODCALLTYPE * GetScript) (IWMHeaderInfo2 * This, WORD wIndex, WCHAR * pwszType, WORD * pcchTypeLen, WCHAR * pwszCommand, WORD * pcchCommandLen, QWORD * pcnsScriptTime);
	HRESULT(STDMETHODCALLTYPE * AddScript) (IWMHeaderInfo2 * This, LPCWSTR_WMSDK_TYPE_SAFE pwszType, LPCWSTR_WMSDK_TYPE_SAFE pwszCommand, QWORD cnsScriptTime);
	HRESULT(STDMETHODCALLTYPE * RemoveScript) (IWMHeaderInfo2 * This, WORD wIndex);
	HRESULT(STDMETHODCALLTYPE * GetCodecInfoCount) (IWMHeaderInfo2 * This, DWORD * pcCodecInfos);
	HRESULT(STDMETHODCALLTYPE * GetCodecInfo) (IWMHeaderInfo2 * This, DWORD wIndex, WORD * pcchName, WCHAR * pwszName, WORD * pcchDescription, WCHAR * pwszDescription, WMT_CODEC_INFO_TYPE * pCodecType, WORD * pcbCodecInfo, BYTE * pbCodecInfo);
	END_INTERFACE
} IWMHeaderInfo2Vtbl;
interface IWMHeaderInfo2
{
    CONST_VTBL struct IWMHeaderInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMHeaderInfo2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMHeaderInfo2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMHeaderInfo2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMHeaderInfo2_GetAttributeCount(This,wStreamNum,pcAttributes)    ( (This)->lpVtbl -> GetAttributeCount(This,wStreamNum,pcAttributes) ) 
#define IWMHeaderInfo2_GetAttributeByIndex(This,wIndex,pwStreamNum,pwszName,pcchNameLen,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetAttributeByIndex(This,wIndex,pwStreamNum,pwszName,pcchNameLen,pType,pValue,pcbLength) ) 
#define IWMHeaderInfo2_GetAttributeByName(This,pwStreamNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetAttributeByName(This,pwStreamNum,pszName,pType,pValue,pcbLength) ) 
#define IWMHeaderInfo2_SetAttribute(This,wStreamNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) ) 
#define IWMHeaderInfo2_GetMarkerCount(This,pcMarkers)    ( (This)->lpVtbl -> GetMarkerCount(This,pcMarkers) ) 
#define IWMHeaderInfo2_GetMarker(This,wIndex,pwszMarkerName,pcchMarkerNameLen,pcnsMarkerTime)    ( (This)->lpVtbl -> GetMarker(This,wIndex,pwszMarkerName,pcchMarkerNameLen,pcnsMarkerTime) ) 
#define IWMHeaderInfo2_AddMarker(This,pwszMarkerName,cnsMarkerTime)    ( (This)->lpVtbl -> AddMarker(This,pwszMarkerName,cnsMarkerTime) ) 
#define IWMHeaderInfo2_RemoveMarker(This,wIndex)    ( (This)->lpVtbl -> RemoveMarker(This,wIndex) ) 
#define IWMHeaderInfo2_GetScriptCount(This,pcScripts)    ( (This)->lpVtbl -> GetScriptCount(This,pcScripts) ) 
#define IWMHeaderInfo2_GetScript(This,wIndex,pwszType,pcchTypeLen,pwszCommand,pcchCommandLen,pcnsScriptTime)    ( (This)->lpVtbl -> GetScript(This,wIndex,pwszType,pcchTypeLen,pwszCommand,pcchCommandLen,pcnsScriptTime) ) 
#define IWMHeaderInfo2_AddScript(This,pwszType,pwszCommand,cnsScriptTime)    ( (This)->lpVtbl -> AddScript(This,pwszType,pwszCommand,cnsScriptTime) ) 
#define IWMHeaderInfo2_RemoveScript(This,wIndex)    ( (This)->lpVtbl -> RemoveScript(This,wIndex) ) 
#define IWMHeaderInfo2_GetCodecInfoCount(This,pcCodecInfos)    ( (This)->lpVtbl -> GetCodecInfoCount(This,pcCodecInfos) ) 
#define IWMHeaderInfo2_GetCodecInfo(This,wIndex,pcchName,pwszName,pcchDescription,pwszDescription,pCodecType,pcbCodecInfo,pbCodecInfo)    ( (This)->lpVtbl -> GetCodecInfo(This,wIndex,pcchName,pwszName,pcchDescription,pwszDescription,pCodecType,pcbCodecInfo,pbCodecInfo) ) 
#endif
#endif
#ifndef __IWMHeaderInfo3_INTERFACE_DEFINED__
#define __IWMHeaderInfo3_INTERFACE_DEFINED__ 
extern const IID IID_IWMHeaderInfo3;
typedef struct IWMHeaderInfo3Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMHeaderInfo3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMHeaderInfo3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMHeaderInfo3 * This);
	HRESULT(STDMETHODCALLTYPE * GetAttributeCount) (IWMHeaderInfo3 * This, WORD wStreamNum, WORD * pcAttributes);
	HRESULT(STDMETHODCALLTYPE * GetAttributeByIndex) (IWMHeaderInfo3 * This, WORD wIndex, WORD * pwStreamNum, WCHAR * pwszName, WORD * pcchNameLen, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * GetAttributeByName) (IWMHeaderInfo3 * This, WORD * pwStreamNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetAttribute) (IWMHeaderInfo3 * This, WORD wStreamNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * GetMarkerCount) (IWMHeaderInfo3 * This, WORD * pcMarkers);
	HRESULT(STDMETHODCALLTYPE * GetMarker) (IWMHeaderInfo3 * This, WORD wIndex, WCHAR * pwszMarkerName, WORD * pcchMarkerNameLen, QWORD * pcnsMarkerTime);
	HRESULT(STDMETHODCALLTYPE * AddMarker) (IWMHeaderInfo3 * This, LPCWSTR_WMSDK_TYPE_SAFE pwszMarkerName, QWORD cnsMarkerTime);
	HRESULT(STDMETHODCALLTYPE * RemoveMarker) (IWMHeaderInfo3 * This, WORD wIndex);
	HRESULT(STDMETHODCALLTYPE * GetScriptCount) (IWMHeaderInfo3 * This, WORD * pcScripts);
	HRESULT(STDMETHODCALLTYPE * GetScript) (IWMHeaderInfo3 * This, WORD wIndex, WCHAR * pwszType, WORD * pcchTypeLen, WCHAR * pwszCommand, WORD * pcchCommandLen, QWORD * pcnsScriptTime);
	HRESULT(STDMETHODCALLTYPE * AddScript) (IWMHeaderInfo3 * This, LPCWSTR_WMSDK_TYPE_SAFE pwszType, LPCWSTR_WMSDK_TYPE_SAFE pwszCommand, QWORD cnsScriptTime);
	HRESULT(STDMETHODCALLTYPE * RemoveScript) (IWMHeaderInfo3 * This, WORD wIndex);
	HRESULT(STDMETHODCALLTYPE * GetCodecInfoCount) (IWMHeaderInfo3 * This, DWORD * pcCodecInfos);
	HRESULT(STDMETHODCALLTYPE * GetCodecInfo) (IWMHeaderInfo3 * This, DWORD wIndex, WORD * pcchName, WCHAR * pwszName, WORD * pcchDescription, WCHAR * pwszDescription, WMT_CODEC_INFO_TYPE * pCodecType, WORD * pcbCodecInfo, BYTE * pbCodecInfo);
	HRESULT(STDMETHODCALLTYPE * GetAttributeCountEx) (IWMHeaderInfo3 * This, WORD wStreamNum, WORD * pcAttributes);
	HRESULT(STDMETHODCALLTYPE * GetAttributeIndices) (IWMHeaderInfo3 * This, WORD wStreamNum, LPCWSTR pwszName, WORD * pwLangIndex, WORD * pwIndices, WORD * pwCount);
	HRESULT(STDMETHODCALLTYPE * GetAttributeByIndexEx) (IWMHeaderInfo3 * This, WORD wStreamNum, WORD wIndex, LPWSTR pwszName, WORD * pwNameLen, WMT_ATTR_DATATYPE * pType, WORD * pwLangIndex, BYTE * pValue, DWORD * pdwDataLength);
	HRESULT(STDMETHODCALLTYPE * ModifyAttribute) (IWMHeaderInfo3 * This, WORD wStreamNum, WORD wIndex, WMT_ATTR_DATATYPE Type, WORD wLangIndex, const BYTE * pValue, DWORD dwLength);
	HRESULT(STDMETHODCALLTYPE * AddAttribute) (IWMHeaderInfo3 * This, WORD wStreamNum, LPCWSTR pszName, WORD * pwIndex, WMT_ATTR_DATATYPE Type, WORD wLangIndex, const BYTE * pValue, DWORD dwLength);
	HRESULT(STDMETHODCALLTYPE * DeleteAttribute) (IWMHeaderInfo3 * This, WORD wStreamNum, WORD wIndex);
	HRESULT(STDMETHODCALLTYPE * AddCodecInfo) (IWMHeaderInfo3 * This, LPCWSTR_WMSDK_TYPE_SAFE pwszName, LPCWSTR_WMSDK_TYPE_SAFE pwszDescription, WMT_CODEC_INFO_TYPE codecType, WORD cbCodecInfo, BYTE * pbCodecInfo);
	END_INTERFACE
} IWMHeaderInfo3Vtbl;
interface IWMHeaderInfo3
{
    CONST_VTBL struct IWMHeaderInfo3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMHeaderInfo3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMHeaderInfo3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMHeaderInfo3_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMHeaderInfo3_GetAttributeCount(This,wStreamNum,pcAttributes)    ( (This)->lpVtbl -> GetAttributeCount(This,wStreamNum,pcAttributes) ) 
#define IWMHeaderInfo3_GetAttributeByIndex(This,wIndex,pwStreamNum,pwszName,pcchNameLen,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetAttributeByIndex(This,wIndex,pwStreamNum,pwszName,pcchNameLen,pType,pValue,pcbLength) ) 
#define IWMHeaderInfo3_GetAttributeByName(This,pwStreamNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetAttributeByName(This,pwStreamNum,pszName,pType,pValue,pcbLength) ) 
#define IWMHeaderInfo3_SetAttribute(This,wStreamNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) ) 
#define IWMHeaderInfo3_GetMarkerCount(This,pcMarkers)    ( (This)->lpVtbl -> GetMarkerCount(This,pcMarkers) ) 
#define IWMHeaderInfo3_GetMarker(This,wIndex,pwszMarkerName,pcchMarkerNameLen,pcnsMarkerTime)    ( (This)->lpVtbl -> GetMarker(This,wIndex,pwszMarkerName,pcchMarkerNameLen,pcnsMarkerTime) ) 
#define IWMHeaderInfo3_AddMarker(This,pwszMarkerName,cnsMarkerTime)    ( (This)->lpVtbl -> AddMarker(This,pwszMarkerName,cnsMarkerTime) ) 
#define IWMHeaderInfo3_RemoveMarker(This,wIndex)    ( (This)->lpVtbl -> RemoveMarker(This,wIndex) ) 
#define IWMHeaderInfo3_GetScriptCount(This,pcScripts)    ( (This)->lpVtbl -> GetScriptCount(This,pcScripts) ) 
#define IWMHeaderInfo3_GetScript(This,wIndex,pwszType,pcchTypeLen,pwszCommand,pcchCommandLen,pcnsScriptTime)    ( (This)->lpVtbl -> GetScript(This,wIndex,pwszType,pcchTypeLen,pwszCommand,pcchCommandLen,pcnsScriptTime) ) 
#define IWMHeaderInfo3_AddScript(This,pwszType,pwszCommand,cnsScriptTime)    ( (This)->lpVtbl -> AddScript(This,pwszType,pwszCommand,cnsScriptTime) ) 
#define IWMHeaderInfo3_RemoveScript(This,wIndex)    ( (This)->lpVtbl -> RemoveScript(This,wIndex) ) 
#define IWMHeaderInfo3_GetCodecInfoCount(This,pcCodecInfos)    ( (This)->lpVtbl -> GetCodecInfoCount(This,pcCodecInfos) ) 
#define IWMHeaderInfo3_GetCodecInfo(This,wIndex,pcchName,pwszName,pcchDescription,pwszDescription,pCodecType,pcbCodecInfo,pbCodecInfo)    ( (This)->lpVtbl -> GetCodecInfo(This,wIndex,pcchName,pwszName,pcchDescription,pwszDescription,pCodecType,pcbCodecInfo,pbCodecInfo) ) 
#define IWMHeaderInfo3_GetAttributeCountEx(This,wStreamNum,pcAttributes)    ( (This)->lpVtbl -> GetAttributeCountEx(This,wStreamNum,pcAttributes) ) 
#define IWMHeaderInfo3_GetAttributeIndices(This,wStreamNum,pwszName,pwLangIndex,pwIndices,pwCount)    ( (This)->lpVtbl -> GetAttributeIndices(This,wStreamNum,pwszName,pwLangIndex,pwIndices,pwCount) ) 
#define IWMHeaderInfo3_GetAttributeByIndexEx(This,wStreamNum,wIndex,pwszName,pwNameLen,pType,pwLangIndex,pValue,pdwDataLength)    ( (This)->lpVtbl -> GetAttributeByIndexEx(This,wStreamNum,wIndex,pwszName,pwNameLen,pType,pwLangIndex,pValue,pdwDataLength) ) 
#define IWMHeaderInfo3_ModifyAttribute(This,wStreamNum,wIndex,Type,wLangIndex,pValue,dwLength)    ( (This)->lpVtbl -> ModifyAttribute(This,wStreamNum,wIndex,Type,wLangIndex,pValue,dwLength) ) 
#define IWMHeaderInfo3_AddAttribute(This,wStreamNum,pszName,pwIndex,Type,wLangIndex,pValue,dwLength)    ( (This)->lpVtbl -> AddAttribute(This,wStreamNum,pszName,pwIndex,Type,wLangIndex,pValue,dwLength) ) 
#define IWMHeaderInfo3_DeleteAttribute(This,wStreamNum,wIndex)    ( (This)->lpVtbl -> DeleteAttribute(This,wStreamNum,wIndex) ) 
#define IWMHeaderInfo3_AddCodecInfo(This,pwszName,pwszDescription,codecType,cbCodecInfo,pbCodecInfo)    ( (This)->lpVtbl -> AddCodecInfo(This,pwszName,pwszDescription,codecType,cbCodecInfo,pbCodecInfo) ) 
#endif
#endif
#ifndef __IWMProfileManager_INTERFACE_DEFINED__
#define __IWMProfileManager_INTERFACE_DEFINED__ 
extern const IID IID_IWMProfileManager;
typedef struct IWMProfileManagerVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMProfileManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMProfileManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMProfileManager * This);
	HRESULT(STDMETHODCALLTYPE * CreateEmptyProfile) (IWMProfileManager * This, WMT_VERSION dwVersion, IWMProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * LoadProfileByID) (IWMProfileManager * This, REFGUID guidProfile, IWMProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * LoadProfileByData) (IWMProfileManager * This, const WCHAR * pwszProfile, IWMProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * SaveProfile) (IWMProfileManager * This, IWMProfile * pIWMProfile, WCHAR * pwszProfile, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetSystemProfileCount) (IWMProfileManager * This, DWORD * pcProfiles);
	HRESULT(STDMETHODCALLTYPE * LoadSystemProfile) (IWMProfileManager * This, DWORD dwProfileIndex, IWMProfile ** ppProfile);
	END_INTERFACE
} IWMProfileManagerVtbl;
interface IWMProfileManager
{
    CONST_VTBL struct IWMProfileManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMProfileManager_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMProfileManager_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMProfileManager_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMProfileManager_CreateEmptyProfile(This,dwVersion,ppProfile)    ( (This)->lpVtbl -> CreateEmptyProfile(This,dwVersion,ppProfile) ) 
#define IWMProfileManager_LoadProfileByID(This,guidProfile,ppProfile)    ( (This)->lpVtbl -> LoadProfileByID(This,guidProfile,ppProfile) ) 
#define IWMProfileManager_LoadProfileByData(This,pwszProfile,ppProfile)    ( (This)->lpVtbl -> LoadProfileByData(This,pwszProfile,ppProfile) ) 
#define IWMProfileManager_SaveProfile(This,pIWMProfile,pwszProfile,pdwLength)    ( (This)->lpVtbl -> SaveProfile(This,pIWMProfile,pwszProfile,pdwLength) ) 
#define IWMProfileManager_GetSystemProfileCount(This,pcProfiles)    ( (This)->lpVtbl -> GetSystemProfileCount(This,pcProfiles) ) 
#define IWMProfileManager_LoadSystemProfile(This,dwProfileIndex,ppProfile)    ( (This)->lpVtbl -> LoadSystemProfile(This,dwProfileIndex,ppProfile) ) 
#endif
#endif
#ifndef __IWMProfileManager2_INTERFACE_DEFINED__
#define __IWMProfileManager2_INTERFACE_DEFINED__ 
extern const IID IID_IWMProfileManager2;
typedef struct IWMProfileManager2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMProfileManager2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMProfileManager2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMProfileManager2 * This);
	HRESULT(STDMETHODCALLTYPE * CreateEmptyProfile) (IWMProfileManager2 * This, WMT_VERSION dwVersion, IWMProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * LoadProfileByID) (IWMProfileManager2 * This, REFGUID guidProfile, IWMProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * LoadProfileByData) (IWMProfileManager2 * This, const WCHAR * pwszProfile, IWMProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * SaveProfile) (IWMProfileManager2 * This, IWMProfile * pIWMProfile, WCHAR * pwszProfile, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetSystemProfileCount) (IWMProfileManager2 * This, DWORD * pcProfiles);
	HRESULT(STDMETHODCALLTYPE * LoadSystemProfile) (IWMProfileManager2 * This, DWORD dwProfileIndex, IWMProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * GetSystemProfileVersion) (IWMProfileManager2 * This, WMT_VERSION * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * SetSystemProfileVersion) (IWMProfileManager2 * This, WMT_VERSION dwVersion);
	END_INTERFACE
} IWMProfileManager2Vtbl;
interface IWMProfileManager2
{
    CONST_VTBL struct IWMProfileManager2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMProfileManager2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMProfileManager2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMProfileManager2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMProfileManager2_CreateEmptyProfile(This,dwVersion,ppProfile)    ( (This)->lpVtbl -> CreateEmptyProfile(This,dwVersion,ppProfile) ) 
#define IWMProfileManager2_LoadProfileByID(This,guidProfile,ppProfile)    ( (This)->lpVtbl -> LoadProfileByID(This,guidProfile,ppProfile) ) 
#define IWMProfileManager2_LoadProfileByData(This,pwszProfile,ppProfile)    ( (This)->lpVtbl -> LoadProfileByData(This,pwszProfile,ppProfile) ) 
#define IWMProfileManager2_SaveProfile(This,pIWMProfile,pwszProfile,pdwLength)    ( (This)->lpVtbl -> SaveProfile(This,pIWMProfile,pwszProfile,pdwLength) ) 
#define IWMProfileManager2_GetSystemProfileCount(This,pcProfiles)    ( (This)->lpVtbl -> GetSystemProfileCount(This,pcProfiles) ) 
#define IWMProfileManager2_LoadSystemProfile(This,dwProfileIndex,ppProfile)    ( (This)->lpVtbl -> LoadSystemProfile(This,dwProfileIndex,ppProfile) ) 
#define IWMProfileManager2_GetSystemProfileVersion(This,pdwVersion)    ( (This)->lpVtbl -> GetSystemProfileVersion(This,pdwVersion) ) 
#define IWMProfileManager2_SetSystemProfileVersion(This,dwVersion)    ( (This)->lpVtbl -> SetSystemProfileVersion(This,dwVersion) ) 
#endif
#endif
#ifndef __IWMProfileManagerLanguage_INTERFACE_DEFINED__
#define __IWMProfileManagerLanguage_INTERFACE_DEFINED__ 
extern const IID IID_IWMProfileManagerLanguage;
typedef struct IWMProfileManagerLanguageVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMProfileManagerLanguage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMProfileManagerLanguage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMProfileManagerLanguage * This);
	HRESULT(STDMETHODCALLTYPE * GetUserLanguageID) (IWMProfileManagerLanguage * This, WORD * wLangID);
	HRESULT(STDMETHODCALLTYPE * SetUserLanguageID) (IWMProfileManagerLanguage * This, WORD wLangID);
	END_INTERFACE
} IWMProfileManagerLanguageVtbl;
interface IWMProfileManagerLanguage
{
    CONST_VTBL struct IWMProfileManagerLanguageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMProfileManagerLanguage_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMProfileManagerLanguage_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMProfileManagerLanguage_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMProfileManagerLanguage_GetUserLanguageID(This,wLangID)    ( (This)->lpVtbl -> GetUserLanguageID(This,wLangID) ) 
#define IWMProfileManagerLanguage_SetUserLanguageID(This,wLangID)    ( (This)->lpVtbl -> SetUserLanguageID(This,wLangID) ) 
#endif
#endif
#ifndef __IWMProfile_INTERFACE_DEFINED__
#define __IWMProfile_INTERFACE_DEFINED__ 
extern const IID IID_IWMProfile;
typedef struct IWMProfileVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMProfile * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMProfile * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMProfile * This);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IWMProfile * This, WMT_VERSION * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMProfile * This, WCHAR * pwszName, DWORD * pcchName);
	HRESULT(STDMETHODCALLTYPE * SetName) (IWMProfile * This, const WCHAR * pwszName);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (IWMProfile * This, WCHAR * pwszDescription, DWORD * pcchDescription);
	HRESULT(STDMETHODCALLTYPE * SetDescription) (IWMProfile * This, const WCHAR * pwszDescription);
	HRESULT(STDMETHODCALLTYPE * GetStreamCount) (IWMProfile * This, DWORD * pcStreams);
	HRESULT(STDMETHODCALLTYPE * GetStream) (IWMProfile * This, DWORD dwStreamIndex, IWMStreamConfig ** ppConfig);
	HRESULT(STDMETHODCALLTYPE * GetStreamByNumber) (IWMProfile * This, WORD wStreamNum, IWMStreamConfig ** ppConfig);
	HRESULT(STDMETHODCALLTYPE * RemoveStream) (IWMProfile * This, IWMStreamConfig * pConfig);
	HRESULT(STDMETHODCALLTYPE * RemoveStreamByNumber) (IWMProfile * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * AddStream) (IWMProfile * This, IWMStreamConfig * pConfig);
	HRESULT(STDMETHODCALLTYPE * ReconfigStream) (IWMProfile * This, IWMStreamConfig * pConfig);
	HRESULT(STDMETHODCALLTYPE * CreateNewStream) (IWMProfile * This, REFGUID guidStreamType, IWMStreamConfig ** ppConfig);
	HRESULT(STDMETHODCALLTYPE * GetMutualExclusionCount) (IWMProfile * This, DWORD * pcME);
	HRESULT(STDMETHODCALLTYPE * GetMutualExclusion) (IWMProfile * This, DWORD dwMEIndex, IWMMutualExclusion ** ppME);
	HRESULT(STDMETHODCALLTYPE * RemoveMutualExclusion) (IWMProfile * This, IWMMutualExclusion * pME);
	HRESULT(STDMETHODCALLTYPE * AddMutualExclusion) (IWMProfile * This, IWMMutualExclusion * pME);
	HRESULT(STDMETHODCALLTYPE * CreateNewMutualExclusion) (IWMProfile * This, IWMMutualExclusion ** ppME);
	END_INTERFACE
} IWMProfileVtbl;
interface IWMProfile
{
    CONST_VTBL struct IWMProfileVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMProfile_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMProfile_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMProfile_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMProfile_GetVersion(This,pdwVersion)    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) ) 
#define IWMProfile_GetName(This,pwszName,pcchName)    ( (This)->lpVtbl -> GetName(This,pwszName,pcchName) ) 
#define IWMProfile_SetName(This,pwszName)    ( (This)->lpVtbl -> SetName(This,pwszName) ) 
#define IWMProfile_GetDescription(This,pwszDescription,pcchDescription)    ( (This)->lpVtbl -> GetDescription(This,pwszDescription,pcchDescription) ) 
#define IWMProfile_SetDescription(This,pwszDescription)    ( (This)->lpVtbl -> SetDescription(This,pwszDescription) ) 
#define IWMProfile_GetStreamCount(This,pcStreams)    ( (This)->lpVtbl -> GetStreamCount(This,pcStreams) ) 
#define IWMProfile_GetStream(This,dwStreamIndex,ppConfig)    ( (This)->lpVtbl -> GetStream(This,dwStreamIndex,ppConfig) ) 
#define IWMProfile_GetStreamByNumber(This,wStreamNum,ppConfig)    ( (This)->lpVtbl -> GetStreamByNumber(This,wStreamNum,ppConfig) ) 
#define IWMProfile_RemoveStream(This,pConfig)    ( (This)->lpVtbl -> RemoveStream(This,pConfig) ) 
#define IWMProfile_RemoveStreamByNumber(This,wStreamNum)    ( (This)->lpVtbl -> RemoveStreamByNumber(This,wStreamNum) ) 
#define IWMProfile_AddStream(This,pConfig)    ( (This)->lpVtbl -> AddStream(This,pConfig) ) 
#define IWMProfile_ReconfigStream(This,pConfig)    ( (This)->lpVtbl -> ReconfigStream(This,pConfig) ) 
#define IWMProfile_CreateNewStream(This,guidStreamType,ppConfig)    ( (This)->lpVtbl -> CreateNewStream(This,guidStreamType,ppConfig) ) 
#define IWMProfile_GetMutualExclusionCount(This,pcME)    ( (This)->lpVtbl -> GetMutualExclusionCount(This,pcME) ) 
#define IWMProfile_GetMutualExclusion(This,dwMEIndex,ppME)    ( (This)->lpVtbl -> GetMutualExclusion(This,dwMEIndex,ppME) ) 
#define IWMProfile_RemoveMutualExclusion(This,pME)    ( (This)->lpVtbl -> RemoveMutualExclusion(This,pME) ) 
#define IWMProfile_AddMutualExclusion(This,pME)    ( (This)->lpVtbl -> AddMutualExclusion(This,pME) ) 
#define IWMProfile_CreateNewMutualExclusion(This,ppME)    ( (This)->lpVtbl -> CreateNewMutualExclusion(This,ppME) ) 
#endif
#endif
#ifndef __IWMProfile2_INTERFACE_DEFINED__
#define __IWMProfile2_INTERFACE_DEFINED__ 
extern const IID IID_IWMProfile2;
typedef struct IWMProfile2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMProfile2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMProfile2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMProfile2 * This);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IWMProfile2 * This, WMT_VERSION * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMProfile2 * This, WCHAR * pwszName, DWORD * pcchName);
	HRESULT(STDMETHODCALLTYPE * SetName) (IWMProfile2 * This, const WCHAR * pwszName);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (IWMProfile2 * This, WCHAR * pwszDescription, DWORD * pcchDescription);
	HRESULT(STDMETHODCALLTYPE * SetDescription) (IWMProfile2 * This, const WCHAR * pwszDescription);
	HRESULT(STDMETHODCALLTYPE * GetStreamCount) (IWMProfile2 * This, DWORD * pcStreams);
	HRESULT(STDMETHODCALLTYPE * GetStream) (IWMProfile2 * This, DWORD dwStreamIndex, IWMStreamConfig ** ppConfig);
	HRESULT(STDMETHODCALLTYPE * GetStreamByNumber) (IWMProfile2 * This, WORD wStreamNum, IWMStreamConfig ** ppConfig);
	HRESULT(STDMETHODCALLTYPE * RemoveStream) (IWMProfile2 * This, IWMStreamConfig * pConfig);
	HRESULT(STDMETHODCALLTYPE * RemoveStreamByNumber) (IWMProfile2 * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * AddStream) (IWMProfile2 * This, IWMStreamConfig * pConfig);
	HRESULT(STDMETHODCALLTYPE * ReconfigStream) (IWMProfile2 * This, IWMStreamConfig * pConfig);
	HRESULT(STDMETHODCALLTYPE * CreateNewStream) (IWMProfile2 * This, REFGUID guidStreamType, IWMStreamConfig ** ppConfig);
	HRESULT(STDMETHODCALLTYPE * GetMutualExclusionCount) (IWMProfile2 * This, DWORD * pcME);
	HRESULT(STDMETHODCALLTYPE * GetMutualExclusion) (IWMProfile2 * This, DWORD dwMEIndex, IWMMutualExclusion ** ppME);
	HRESULT(STDMETHODCALLTYPE * RemoveMutualExclusion) (IWMProfile2 * This, IWMMutualExclusion * pME);
	HRESULT(STDMETHODCALLTYPE * AddMutualExclusion) (IWMProfile2 * This, IWMMutualExclusion * pME);
	HRESULT(STDMETHODCALLTYPE * CreateNewMutualExclusion) (IWMProfile2 * This, IWMMutualExclusion ** ppME);
	HRESULT(STDMETHODCALLTYPE * GetProfileID) (IWMProfile2 * This, GUID * pguidID);
	END_INTERFACE
} IWMProfile2Vtbl;
interface IWMProfile2
{
    CONST_VTBL struct IWMProfile2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMProfile2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMProfile2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMProfile2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMProfile2_GetVersion(This,pdwVersion)    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) ) 
#define IWMProfile2_GetName(This,pwszName,pcchName)    ( (This)->lpVtbl -> GetName(This,pwszName,pcchName) ) 
#define IWMProfile2_SetName(This,pwszName)    ( (This)->lpVtbl -> SetName(This,pwszName) ) 
#define IWMProfile2_GetDescription(This,pwszDescription,pcchDescription)    ( (This)->lpVtbl -> GetDescription(This,pwszDescription,pcchDescription) ) 
#define IWMProfile2_SetDescription(This,pwszDescription)    ( (This)->lpVtbl -> SetDescription(This,pwszDescription) ) 
#define IWMProfile2_GetStreamCount(This,pcStreams)    ( (This)->lpVtbl -> GetStreamCount(This,pcStreams) ) 
#define IWMProfile2_GetStream(This,dwStreamIndex,ppConfig)    ( (This)->lpVtbl -> GetStream(This,dwStreamIndex,ppConfig) ) 
#define IWMProfile2_GetStreamByNumber(This,wStreamNum,ppConfig)    ( (This)->lpVtbl -> GetStreamByNumber(This,wStreamNum,ppConfig) ) 
#define IWMProfile2_RemoveStream(This,pConfig)    ( (This)->lpVtbl -> RemoveStream(This,pConfig) ) 
#define IWMProfile2_RemoveStreamByNumber(This,wStreamNum)    ( (This)->lpVtbl -> RemoveStreamByNumber(This,wStreamNum) ) 
#define IWMProfile2_AddStream(This,pConfig)    ( (This)->lpVtbl -> AddStream(This,pConfig) ) 
#define IWMProfile2_ReconfigStream(This,pConfig)    ( (This)->lpVtbl -> ReconfigStream(This,pConfig) ) 
#define IWMProfile2_CreateNewStream(This,guidStreamType,ppConfig)    ( (This)->lpVtbl -> CreateNewStream(This,guidStreamType,ppConfig) ) 
#define IWMProfile2_GetMutualExclusionCount(This,pcME)    ( (This)->lpVtbl -> GetMutualExclusionCount(This,pcME) ) 
#define IWMProfile2_GetMutualExclusion(This,dwMEIndex,ppME)    ( (This)->lpVtbl -> GetMutualExclusion(This,dwMEIndex,ppME) ) 
#define IWMProfile2_RemoveMutualExclusion(This,pME)    ( (This)->lpVtbl -> RemoveMutualExclusion(This,pME) ) 
#define IWMProfile2_AddMutualExclusion(This,pME)    ( (This)->lpVtbl -> AddMutualExclusion(This,pME) ) 
#define IWMProfile2_CreateNewMutualExclusion(This,ppME)    ( (This)->lpVtbl -> CreateNewMutualExclusion(This,ppME) ) 
#define IWMProfile2_GetProfileID(This,pguidID)    ( (This)->lpVtbl -> GetProfileID(This,pguidID) ) 
#endif
#endif
#ifndef __IWMProfile3_INTERFACE_DEFINED__
#define __IWMProfile3_INTERFACE_DEFINED__ 
extern const IID IID_IWMProfile3;
typedef struct IWMProfile3Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMProfile3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMProfile3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMProfile3 * This);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IWMProfile3 * This, WMT_VERSION * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMProfile3 * This, WCHAR * pwszName, DWORD * pcchName);
	HRESULT(STDMETHODCALLTYPE * SetName) (IWMProfile3 * This, const WCHAR * pwszName);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (IWMProfile3 * This, WCHAR * pwszDescription, DWORD * pcchDescription);
	HRESULT(STDMETHODCALLTYPE * SetDescription) (IWMProfile3 * This, const WCHAR * pwszDescription);
	HRESULT(STDMETHODCALLTYPE * GetStreamCount) (IWMProfile3 * This, DWORD * pcStreams);
	HRESULT(STDMETHODCALLTYPE * GetStream) (IWMProfile3 * This, DWORD dwStreamIndex, IWMStreamConfig ** ppConfig);
	HRESULT(STDMETHODCALLTYPE * GetStreamByNumber) (IWMProfile3 * This, WORD wStreamNum, IWMStreamConfig ** ppConfig);
	HRESULT(STDMETHODCALLTYPE * RemoveStream) (IWMProfile3 * This, IWMStreamConfig * pConfig);
	HRESULT(STDMETHODCALLTYPE * RemoveStreamByNumber) (IWMProfile3 * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * AddStream) (IWMProfile3 * This, IWMStreamConfig * pConfig);
	HRESULT(STDMETHODCALLTYPE * ReconfigStream) (IWMProfile3 * This, IWMStreamConfig * pConfig);
	HRESULT(STDMETHODCALLTYPE * CreateNewStream) (IWMProfile3 * This, REFGUID guidStreamType, IWMStreamConfig ** ppConfig);
	HRESULT(STDMETHODCALLTYPE * GetMutualExclusionCount) (IWMProfile3 * This, DWORD * pcME);
	HRESULT(STDMETHODCALLTYPE * GetMutualExclusion) (IWMProfile3 * This, DWORD dwMEIndex, IWMMutualExclusion ** ppME);
	HRESULT(STDMETHODCALLTYPE * RemoveMutualExclusion) (IWMProfile3 * This, IWMMutualExclusion * pME);
	HRESULT(STDMETHODCALLTYPE * AddMutualExclusion) (IWMProfile3 * This, IWMMutualExclusion * pME);
	HRESULT(STDMETHODCALLTYPE * CreateNewMutualExclusion) (IWMProfile3 * This, IWMMutualExclusion ** ppME);
	HRESULT(STDMETHODCALLTYPE * GetProfileID) (IWMProfile3 * This, GUID * pguidID);
	HRESULT(STDMETHODCALLTYPE * GetStorageFormat) (IWMProfile3 * This, WMT_STORAGE_FORMAT * pnStorageFormat);
	HRESULT(STDMETHODCALLTYPE * SetStorageFormat) (IWMProfile3 * This, WMT_STORAGE_FORMAT nStorageFormat);
	HRESULT(STDMETHODCALLTYPE * GetBandwidthSharingCount) (IWMProfile3 * This, DWORD * pcBS);
	HRESULT(STDMETHODCALLTYPE * GetBandwidthSharing) (IWMProfile3 * This, DWORD dwBSIndex, IWMBandwidthSharing ** ppBS);
	HRESULT(STDMETHODCALLTYPE * RemoveBandwidthSharing) (IWMProfile3 * This, IWMBandwidthSharing * pBS);
	HRESULT(STDMETHODCALLTYPE * AddBandwidthSharing) (IWMProfile3 * This, IWMBandwidthSharing * pBS);
	HRESULT(STDMETHODCALLTYPE * CreateNewBandwidthSharing) (IWMProfile3 * This, IWMBandwidthSharing ** ppBS);
	HRESULT(STDMETHODCALLTYPE * GetStreamPrioritization) (IWMProfile3 * This, IWMStreamPrioritization ** ppSP);
	HRESULT(STDMETHODCALLTYPE * SetStreamPrioritization) (IWMProfile3 * This, IWMStreamPrioritization * pSP);
	HRESULT(STDMETHODCALLTYPE * RemoveStreamPrioritization) (IWMProfile3 * This);
	HRESULT(STDMETHODCALLTYPE * CreateNewStreamPrioritization) (IWMProfile3 * This, IWMStreamPrioritization ** ppSP);
	HRESULT(STDMETHODCALLTYPE * GetExpectedPacketCount) (IWMProfile3 * This, QWORD msDuration, QWORD * pcPackets);
	END_INTERFACE
} IWMProfile3Vtbl;
interface IWMProfile3
{
    CONST_VTBL struct IWMProfile3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMProfile3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMProfile3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMProfile3_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMProfile3_GetVersion(This,pdwVersion)    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) ) 
#define IWMProfile3_GetName(This,pwszName,pcchName)    ( (This)->lpVtbl -> GetName(This,pwszName,pcchName) ) 
#define IWMProfile3_SetName(This,pwszName)    ( (This)->lpVtbl -> SetName(This,pwszName) ) 
#define IWMProfile3_GetDescription(This,pwszDescription,pcchDescription)    ( (This)->lpVtbl -> GetDescription(This,pwszDescription,pcchDescription) ) 
#define IWMProfile3_SetDescription(This,pwszDescription)    ( (This)->lpVtbl -> SetDescription(This,pwszDescription) ) 
#define IWMProfile3_GetStreamCount(This,pcStreams)    ( (This)->lpVtbl -> GetStreamCount(This,pcStreams) ) 
#define IWMProfile3_GetStream(This,dwStreamIndex,ppConfig)    ( (This)->lpVtbl -> GetStream(This,dwStreamIndex,ppConfig) ) 
#define IWMProfile3_GetStreamByNumber(This,wStreamNum,ppConfig)    ( (This)->lpVtbl -> GetStreamByNumber(This,wStreamNum,ppConfig) ) 
#define IWMProfile3_RemoveStream(This,pConfig)    ( (This)->lpVtbl -> RemoveStream(This,pConfig) ) 
#define IWMProfile3_RemoveStreamByNumber(This,wStreamNum)    ( (This)->lpVtbl -> RemoveStreamByNumber(This,wStreamNum) ) 
#define IWMProfile3_AddStream(This,pConfig)    ( (This)->lpVtbl -> AddStream(This,pConfig) ) 
#define IWMProfile3_ReconfigStream(This,pConfig)    ( (This)->lpVtbl -> ReconfigStream(This,pConfig) ) 
#define IWMProfile3_CreateNewStream(This,guidStreamType,ppConfig)    ( (This)->lpVtbl -> CreateNewStream(This,guidStreamType,ppConfig) ) 
#define IWMProfile3_GetMutualExclusionCount(This,pcME)    ( (This)->lpVtbl -> GetMutualExclusionCount(This,pcME) ) 
#define IWMProfile3_GetMutualExclusion(This,dwMEIndex,ppME)    ( (This)->lpVtbl -> GetMutualExclusion(This,dwMEIndex,ppME) ) 
#define IWMProfile3_RemoveMutualExclusion(This,pME)    ( (This)->lpVtbl -> RemoveMutualExclusion(This,pME) ) 
#define IWMProfile3_AddMutualExclusion(This,pME)    ( (This)->lpVtbl -> AddMutualExclusion(This,pME) ) 
#define IWMProfile3_CreateNewMutualExclusion(This,ppME)    ( (This)->lpVtbl -> CreateNewMutualExclusion(This,ppME) ) 
#define IWMProfile3_GetProfileID(This,pguidID)    ( (This)->lpVtbl -> GetProfileID(This,pguidID) ) 
#define IWMProfile3_GetStorageFormat(This,pnStorageFormat)    ( (This)->lpVtbl -> GetStorageFormat(This,pnStorageFormat) ) 
#define IWMProfile3_SetStorageFormat(This,nStorageFormat)    ( (This)->lpVtbl -> SetStorageFormat(This,nStorageFormat) ) 
#define IWMProfile3_GetBandwidthSharingCount(This,pcBS)    ( (This)->lpVtbl -> GetBandwidthSharingCount(This,pcBS) ) 
#define IWMProfile3_GetBandwidthSharing(This,dwBSIndex,ppBS)    ( (This)->lpVtbl -> GetBandwidthSharing(This,dwBSIndex,ppBS) ) 
#define IWMProfile3_RemoveBandwidthSharing(This,pBS)    ( (This)->lpVtbl -> RemoveBandwidthSharing(This,pBS) ) 
#define IWMProfile3_AddBandwidthSharing(This,pBS)    ( (This)->lpVtbl -> AddBandwidthSharing(This,pBS) ) 
#define IWMProfile3_CreateNewBandwidthSharing(This,ppBS)    ( (This)->lpVtbl -> CreateNewBandwidthSharing(This,ppBS) ) 
#define IWMProfile3_GetStreamPrioritization(This,ppSP)    ( (This)->lpVtbl -> GetStreamPrioritization(This,ppSP) ) 
#define IWMProfile3_SetStreamPrioritization(This,pSP)    ( (This)->lpVtbl -> SetStreamPrioritization(This,pSP) ) 
#define IWMProfile3_RemoveStreamPrioritization(This)    ( (This)->lpVtbl -> RemoveStreamPrioritization(This) ) 
#define IWMProfile3_CreateNewStreamPrioritization(This,ppSP)    ( (This)->lpVtbl -> CreateNewStreamPrioritization(This,ppSP) ) 
#define IWMProfile3_GetExpectedPacketCount(This,msDuration,pcPackets)    ( (This)->lpVtbl -> GetExpectedPacketCount(This,msDuration,pcPackets) ) 
#endif
#endif
#ifndef __IWMStreamConfig_INTERFACE_DEFINED__
#define __IWMStreamConfig_INTERFACE_DEFINED__ 
extern const IID IID_IWMStreamConfig;
typedef struct IWMStreamConfigVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMStreamConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMStreamConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMStreamConfig * This);
	HRESULT(STDMETHODCALLTYPE * GetStreamType) (IWMStreamConfig * This, GUID * pguidStreamType);
	HRESULT(STDMETHODCALLTYPE * GetStreamNumber) (IWMStreamConfig * This, WORD * pwStreamNum);
	HRESULT(STDMETHODCALLTYPE * SetStreamNumber) (IWMStreamConfig * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * GetStreamName) (IWMStreamConfig * This, WCHAR * pwszStreamName, WORD * pcchStreamName);
	HRESULT(STDMETHODCALLTYPE * SetStreamName) (IWMStreamConfig * This, LPCWSTR_WMSDK_TYPE_SAFE pwszStreamName);
	HRESULT(STDMETHODCALLTYPE * GetConnectionName) (IWMStreamConfig * This, WCHAR * pwszInputName, WORD * pcchInputName);
	HRESULT(STDMETHODCALLTYPE * SetConnectionName) (IWMStreamConfig * This, LPCWSTR_WMSDK_TYPE_SAFE pwszInputName);
	HRESULT(STDMETHODCALLTYPE * GetBitrate) (IWMStreamConfig * This, DWORD * pdwBitrate);
	HRESULT(STDMETHODCALLTYPE * SetBitrate) (IWMStreamConfig * This, DWORD pdwBitrate);
	HRESULT(STDMETHODCALLTYPE * GetBufferWindow) (IWMStreamConfig * This, DWORD * pmsBufferWindow);
	HRESULT(STDMETHODCALLTYPE * SetBufferWindow) (IWMStreamConfig * This, DWORD msBufferWindow);
	END_INTERFACE
} IWMStreamConfigVtbl;
interface IWMStreamConfig
{
    CONST_VTBL struct IWMStreamConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMStreamConfig_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMStreamConfig_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMStreamConfig_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMStreamConfig_GetStreamType(This,pguidStreamType)    ( (This)->lpVtbl -> GetStreamType(This,pguidStreamType) ) 
#define IWMStreamConfig_GetStreamNumber(This,pwStreamNum)    ( (This)->lpVtbl -> GetStreamNumber(This,pwStreamNum) ) 
#define IWMStreamConfig_SetStreamNumber(This,wStreamNum)    ( (This)->lpVtbl -> SetStreamNumber(This,wStreamNum) ) 
#define IWMStreamConfig_GetStreamName(This,pwszStreamName,pcchStreamName)    ( (This)->lpVtbl -> GetStreamName(This,pwszStreamName,pcchStreamName) ) 
#define IWMStreamConfig_SetStreamName(This,pwszStreamName)    ( (This)->lpVtbl -> SetStreamName(This,pwszStreamName) ) 
#define IWMStreamConfig_GetConnectionName(This,pwszInputName,pcchInputName)    ( (This)->lpVtbl -> GetConnectionName(This,pwszInputName,pcchInputName) ) 
#define IWMStreamConfig_SetConnectionName(This,pwszInputName)    ( (This)->lpVtbl -> SetConnectionName(This,pwszInputName) ) 
#define IWMStreamConfig_GetBitrate(This,pdwBitrate)    ( (This)->lpVtbl -> GetBitrate(This,pdwBitrate) ) 
#define IWMStreamConfig_SetBitrate(This,pdwBitrate)    ( (This)->lpVtbl -> SetBitrate(This,pdwBitrate) ) 
#define IWMStreamConfig_GetBufferWindow(This,pmsBufferWindow)    ( (This)->lpVtbl -> GetBufferWindow(This,pmsBufferWindow) ) 
#define IWMStreamConfig_SetBufferWindow(This,msBufferWindow)    ( (This)->lpVtbl -> SetBufferWindow(This,msBufferWindow) ) 
#endif
#endif
#ifndef __IWMStreamConfig2_INTERFACE_DEFINED__
#define __IWMStreamConfig2_INTERFACE_DEFINED__ 
extern const IID IID_IWMStreamConfig2;
typedef struct IWMStreamConfig2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMStreamConfig2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMStreamConfig2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMStreamConfig2 * This);
	HRESULT(STDMETHODCALLTYPE * GetStreamType) (IWMStreamConfig2 * This, GUID * pguidStreamType);
	HRESULT(STDMETHODCALLTYPE * GetStreamNumber) (IWMStreamConfig2 * This, WORD * pwStreamNum);
	HRESULT(STDMETHODCALLTYPE * SetStreamNumber) (IWMStreamConfig2 * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * GetStreamName) (IWMStreamConfig2 * This, WCHAR * pwszStreamName, WORD * pcchStreamName);
	HRESULT(STDMETHODCALLTYPE * SetStreamName) (IWMStreamConfig2 * This, LPCWSTR_WMSDK_TYPE_SAFE pwszStreamName);
	HRESULT(STDMETHODCALLTYPE * GetConnectionName) (IWMStreamConfig2 * This, WCHAR * pwszInputName, WORD * pcchInputName);
	HRESULT(STDMETHODCALLTYPE * SetConnectionName) (IWMStreamConfig2 * This, LPCWSTR_WMSDK_TYPE_SAFE pwszInputName);
	HRESULT(STDMETHODCALLTYPE * GetBitrate) (IWMStreamConfig2 * This, DWORD * pdwBitrate);
	HRESULT(STDMETHODCALLTYPE * SetBitrate) (IWMStreamConfig2 * This, DWORD pdwBitrate);
	HRESULT(STDMETHODCALLTYPE * GetBufferWindow) (IWMStreamConfig2 * This, DWORD * pmsBufferWindow);
	HRESULT(STDMETHODCALLTYPE * SetBufferWindow) (IWMStreamConfig2 * This, DWORD msBufferWindow);
	HRESULT(STDMETHODCALLTYPE * GetTransportType) (IWMStreamConfig2 * This, WMT_TRANSPORT_TYPE * pnTransportType);
	HRESULT(STDMETHODCALLTYPE * SetTransportType) (IWMStreamConfig2 * This, WMT_TRANSPORT_TYPE nTransportType);
	HRESULT(STDMETHODCALLTYPE * AddDataUnitExtension) (IWMStreamConfig2 * This, GUID guidExtensionSystemID, WORD cbExtensionDataSize, BYTE * pbExtensionSystemInfo, DWORD cbExtensionSystemInfo);
	HRESULT(STDMETHODCALLTYPE * GetDataUnitExtensionCount) (IWMStreamConfig2 * This, WORD * pcDataUnitExtensions);
	HRESULT(STDMETHODCALLTYPE * GetDataUnitExtension) (IWMStreamConfig2 * This, WORD wDataUnitExtensionNumber, GUID * pguidExtensionSystemID, WORD * pcbExtensionDataSize, BYTE * pbExtensionSystemInfo, DWORD * pcbExtensionSystemInfo);
	HRESULT(STDMETHODCALLTYPE * RemoveAllDataUnitExtensions) (IWMStreamConfig2 * This);
	END_INTERFACE
} IWMStreamConfig2Vtbl;
interface IWMStreamConfig2
{
    CONST_VTBL struct IWMStreamConfig2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMStreamConfig2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMStreamConfig2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMStreamConfig2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMStreamConfig2_GetStreamType(This,pguidStreamType)    ( (This)->lpVtbl -> GetStreamType(This,pguidStreamType) ) 
#define IWMStreamConfig2_GetStreamNumber(This,pwStreamNum)    ( (This)->lpVtbl -> GetStreamNumber(This,pwStreamNum) ) 
#define IWMStreamConfig2_SetStreamNumber(This,wStreamNum)    ( (This)->lpVtbl -> SetStreamNumber(This,wStreamNum) ) 
#define IWMStreamConfig2_GetStreamName(This,pwszStreamName,pcchStreamName)    ( (This)->lpVtbl -> GetStreamName(This,pwszStreamName,pcchStreamName) ) 
#define IWMStreamConfig2_SetStreamName(This,pwszStreamName)    ( (This)->lpVtbl -> SetStreamName(This,pwszStreamName) ) 
#define IWMStreamConfig2_GetConnectionName(This,pwszInputName,pcchInputName)    ( (This)->lpVtbl -> GetConnectionName(This,pwszInputName,pcchInputName) ) 
#define IWMStreamConfig2_SetConnectionName(This,pwszInputName)    ( (This)->lpVtbl -> SetConnectionName(This,pwszInputName) ) 
#define IWMStreamConfig2_GetBitrate(This,pdwBitrate)    ( (This)->lpVtbl -> GetBitrate(This,pdwBitrate) ) 
#define IWMStreamConfig2_SetBitrate(This,pdwBitrate)    ( (This)->lpVtbl -> SetBitrate(This,pdwBitrate) ) 
#define IWMStreamConfig2_GetBufferWindow(This,pmsBufferWindow)    ( (This)->lpVtbl -> GetBufferWindow(This,pmsBufferWindow) ) 
#define IWMStreamConfig2_SetBufferWindow(This,msBufferWindow)    ( (This)->lpVtbl -> SetBufferWindow(This,msBufferWindow) ) 
#define IWMStreamConfig2_GetTransportType(This,pnTransportType)    ( (This)->lpVtbl -> GetTransportType(This,pnTransportType) ) 
#define IWMStreamConfig2_SetTransportType(This,nTransportType)    ( (This)->lpVtbl -> SetTransportType(This,nTransportType) ) 
#define IWMStreamConfig2_AddDataUnitExtension(This,guidExtensionSystemID,cbExtensionDataSize,pbExtensionSystemInfo,cbExtensionSystemInfo)    ( (This)->lpVtbl -> AddDataUnitExtension(This,guidExtensionSystemID,cbExtensionDataSize,pbExtensionSystemInfo,cbExtensionSystemInfo) ) 
#define IWMStreamConfig2_GetDataUnitExtensionCount(This,pcDataUnitExtensions)    ( (This)->lpVtbl -> GetDataUnitExtensionCount(This,pcDataUnitExtensions) ) 
#define IWMStreamConfig2_GetDataUnitExtension(This,wDataUnitExtensionNumber,pguidExtensionSystemID,pcbExtensionDataSize,pbExtensionSystemInfo,pcbExtensionSystemInfo)    ( (This)->lpVtbl -> GetDataUnitExtension(This,wDataUnitExtensionNumber,pguidExtensionSystemID,pcbExtensionDataSize,pbExtensionSystemInfo,pcbExtensionSystemInfo) ) 
#define IWMStreamConfig2_RemoveAllDataUnitExtensions(This)    ( (This)->lpVtbl -> RemoveAllDataUnitExtensions(This) ) 
#endif
#endif
#ifndef __IWMStreamConfig3_INTERFACE_DEFINED__
#define __IWMStreamConfig3_INTERFACE_DEFINED__ 
extern const IID IID_IWMStreamConfig3;
typedef struct IWMStreamConfig3Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMStreamConfig3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMStreamConfig3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMStreamConfig3 * This);
	HRESULT(STDMETHODCALLTYPE * GetStreamType) (IWMStreamConfig3 * This, GUID * pguidStreamType);
	HRESULT(STDMETHODCALLTYPE * GetStreamNumber) (IWMStreamConfig3 * This, WORD * pwStreamNum);
	HRESULT(STDMETHODCALLTYPE * SetStreamNumber) (IWMStreamConfig3 * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * GetStreamName) (IWMStreamConfig3 * This, WCHAR * pwszStreamName, WORD * pcchStreamName);
	HRESULT(STDMETHODCALLTYPE * SetStreamName) (IWMStreamConfig3 * This, LPCWSTR_WMSDK_TYPE_SAFE pwszStreamName);
	HRESULT(STDMETHODCALLTYPE * GetConnectionName) (IWMStreamConfig3 * This, WCHAR * pwszInputName, WORD * pcchInputName);
	HRESULT(STDMETHODCALLTYPE * SetConnectionName) (IWMStreamConfig3 * This, LPCWSTR_WMSDK_TYPE_SAFE pwszInputName);
	HRESULT(STDMETHODCALLTYPE * GetBitrate) (IWMStreamConfig3 * This, DWORD * pdwBitrate);
	HRESULT(STDMETHODCALLTYPE * SetBitrate) (IWMStreamConfig3 * This, DWORD pdwBitrate);
	HRESULT(STDMETHODCALLTYPE * GetBufferWindow) (IWMStreamConfig3 * This, DWORD * pmsBufferWindow);
	HRESULT(STDMETHODCALLTYPE * SetBufferWindow) (IWMStreamConfig3 * This, DWORD msBufferWindow);
	HRESULT(STDMETHODCALLTYPE * GetTransportType) (IWMStreamConfig3 * This, WMT_TRANSPORT_TYPE * pnTransportType);
	HRESULT(STDMETHODCALLTYPE * SetTransportType) (IWMStreamConfig3 * This, WMT_TRANSPORT_TYPE nTransportType);
	HRESULT(STDMETHODCALLTYPE * AddDataUnitExtension) (IWMStreamConfig3 * This, GUID guidExtensionSystemID, WORD cbExtensionDataSize, BYTE * pbExtensionSystemInfo, DWORD cbExtensionSystemInfo);
	HRESULT(STDMETHODCALLTYPE * GetDataUnitExtensionCount) (IWMStreamConfig3 * This, WORD * pcDataUnitExtensions);
	HRESULT(STDMETHODCALLTYPE * GetDataUnitExtension) (IWMStreamConfig3 * This, WORD wDataUnitExtensionNumber, GUID * pguidExtensionSystemID, WORD * pcbExtensionDataSize, BYTE * pbExtensionSystemInfo, DWORD * pcbExtensionSystemInfo);
	HRESULT(STDMETHODCALLTYPE * RemoveAllDataUnitExtensions) (IWMStreamConfig3 * This);
	HRESULT(STDMETHODCALLTYPE * GetLanguage) (IWMStreamConfig3 * This, WCHAR * pwszLanguageString, WORD * pcchLanguageStringLength);
	HRESULT(STDMETHODCALLTYPE * SetLanguage) (IWMStreamConfig3 * This, LPCWSTR_WMSDK_TYPE_SAFE pwszLanguageString);
	END_INTERFACE
} IWMStreamConfig3Vtbl;
interface IWMStreamConfig3
{
    CONST_VTBL struct IWMStreamConfig3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMStreamConfig3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMStreamConfig3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMStreamConfig3_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMStreamConfig3_GetStreamType(This,pguidStreamType)    ( (This)->lpVtbl -> GetStreamType(This,pguidStreamType) ) 
#define IWMStreamConfig3_GetStreamNumber(This,pwStreamNum)    ( (This)->lpVtbl -> GetStreamNumber(This,pwStreamNum) ) 
#define IWMStreamConfig3_SetStreamNumber(This,wStreamNum)    ( (This)->lpVtbl -> SetStreamNumber(This,wStreamNum) ) 
#define IWMStreamConfig3_GetStreamName(This,pwszStreamName,pcchStreamName)    ( (This)->lpVtbl -> GetStreamName(This,pwszStreamName,pcchStreamName) ) 
#define IWMStreamConfig3_SetStreamName(This,pwszStreamName)    ( (This)->lpVtbl -> SetStreamName(This,pwszStreamName) ) 
#define IWMStreamConfig3_GetConnectionName(This,pwszInputName,pcchInputName)    ( (This)->lpVtbl -> GetConnectionName(This,pwszInputName,pcchInputName) ) 
#define IWMStreamConfig3_SetConnectionName(This,pwszInputName)    ( (This)->lpVtbl -> SetConnectionName(This,pwszInputName) ) 
#define IWMStreamConfig3_GetBitrate(This,pdwBitrate)    ( (This)->lpVtbl -> GetBitrate(This,pdwBitrate) ) 
#define IWMStreamConfig3_SetBitrate(This,pdwBitrate)    ( (This)->lpVtbl -> SetBitrate(This,pdwBitrate) ) 
#define IWMStreamConfig3_GetBufferWindow(This,pmsBufferWindow)    ( (This)->lpVtbl -> GetBufferWindow(This,pmsBufferWindow) ) 
#define IWMStreamConfig3_SetBufferWindow(This,msBufferWindow)    ( (This)->lpVtbl -> SetBufferWindow(This,msBufferWindow) ) 
#define IWMStreamConfig3_GetTransportType(This,pnTransportType)    ( (This)->lpVtbl -> GetTransportType(This,pnTransportType) ) 
#define IWMStreamConfig3_SetTransportType(This,nTransportType)    ( (This)->lpVtbl -> SetTransportType(This,nTransportType) ) 
#define IWMStreamConfig3_AddDataUnitExtension(This,guidExtensionSystemID,cbExtensionDataSize,pbExtensionSystemInfo,cbExtensionSystemInfo)    ( (This)->lpVtbl -> AddDataUnitExtension(This,guidExtensionSystemID,cbExtensionDataSize,pbExtensionSystemInfo,cbExtensionSystemInfo) ) 
#define IWMStreamConfig3_GetDataUnitExtensionCount(This,pcDataUnitExtensions)    ( (This)->lpVtbl -> GetDataUnitExtensionCount(This,pcDataUnitExtensions) ) 
#define IWMStreamConfig3_GetDataUnitExtension(This,wDataUnitExtensionNumber,pguidExtensionSystemID,pcbExtensionDataSize,pbExtensionSystemInfo,pcbExtensionSystemInfo)    ( (This)->lpVtbl -> GetDataUnitExtension(This,wDataUnitExtensionNumber,pguidExtensionSystemID,pcbExtensionDataSize,pbExtensionSystemInfo,pcbExtensionSystemInfo) ) 
#define IWMStreamConfig3_RemoveAllDataUnitExtensions(This)    ( (This)->lpVtbl -> RemoveAllDataUnitExtensions(This) ) 
#define IWMStreamConfig3_GetLanguage(This,pwszLanguageString,pcchLanguageStringLength)    ( (This)->lpVtbl -> GetLanguage(This,pwszLanguageString,pcchLanguageStringLength) ) 
#define IWMStreamConfig3_SetLanguage(This,pwszLanguageString)    ( (This)->lpVtbl -> SetLanguage(This,pwszLanguageString) ) 
#endif
#endif
#ifndef __IWMPacketSize_INTERFACE_DEFINED__
#define __IWMPacketSize_INTERFACE_DEFINED__ 
extern const IID IID_IWMPacketSize;
typedef struct IWMPacketSizeVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPacketSize * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPacketSize * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPacketSize * This);
	HRESULT(STDMETHODCALLTYPE * GetMaxPacketSize) (IWMPacketSize * This, DWORD * pdwMaxPacketSize);
	HRESULT(STDMETHODCALLTYPE * SetMaxPacketSize) (IWMPacketSize * This, DWORD dwMaxPacketSize);
	END_INTERFACE
} IWMPacketSizeVtbl;
interface IWMPacketSize
{
    CONST_VTBL struct IWMPacketSizeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPacketSize_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMPacketSize_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMPacketSize_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMPacketSize_GetMaxPacketSize(This,pdwMaxPacketSize)    ( (This)->lpVtbl -> GetMaxPacketSize(This,pdwMaxPacketSize) ) 
#define IWMPacketSize_SetMaxPacketSize(This,dwMaxPacketSize)    ( (This)->lpVtbl -> SetMaxPacketSize(This,dwMaxPacketSize) ) 
#endif
#endif
#ifndef __IWMPacketSize2_INTERFACE_DEFINED__
#define __IWMPacketSize2_INTERFACE_DEFINED__ 
extern const IID IID_IWMPacketSize2;
typedef struct IWMPacketSize2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPacketSize2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPacketSize2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPacketSize2 * This);
	HRESULT(STDMETHODCALLTYPE * GetMaxPacketSize) (IWMPacketSize2 * This, DWORD * pdwMaxPacketSize);
	HRESULT(STDMETHODCALLTYPE * SetMaxPacketSize) (IWMPacketSize2 * This, DWORD dwMaxPacketSize);
	HRESULT(STDMETHODCALLTYPE * GetMinPacketSize) (IWMPacketSize2 * This, DWORD * pdwMinPacketSize);
	HRESULT(STDMETHODCALLTYPE * SetMinPacketSize) (IWMPacketSize2 * This, DWORD dwMinPacketSize);
	END_INTERFACE
} IWMPacketSize2Vtbl;
interface IWMPacketSize2
{
    CONST_VTBL struct IWMPacketSize2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPacketSize2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMPacketSize2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMPacketSize2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMPacketSize2_GetMaxPacketSize(This,pdwMaxPacketSize)    ( (This)->lpVtbl -> GetMaxPacketSize(This,pdwMaxPacketSize) ) 
#define IWMPacketSize2_SetMaxPacketSize(This,dwMaxPacketSize)    ( (This)->lpVtbl -> SetMaxPacketSize(This,dwMaxPacketSize) ) 
#define IWMPacketSize2_GetMinPacketSize(This,pdwMinPacketSize)    ( (This)->lpVtbl -> GetMinPacketSize(This,pdwMinPacketSize) ) 
#define IWMPacketSize2_SetMinPacketSize(This,dwMinPacketSize)    ( (This)->lpVtbl -> SetMinPacketSize(This,dwMinPacketSize) ) 
#endif
#endif
#ifndef __IWMStreamList_INTERFACE_DEFINED__
#define __IWMStreamList_INTERFACE_DEFINED__ 
extern const IID IID_IWMStreamList;
typedef struct IWMStreamListVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMStreamList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMStreamList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMStreamList * This);
	HRESULT(STDMETHODCALLTYPE * GetStreams) (IWMStreamList * This, WORD * pwStreamNumArray, WORD * pcStreams);
	HRESULT(STDMETHODCALLTYPE * AddStream) (IWMStreamList * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * RemoveStream) (IWMStreamList * This, WORD wStreamNum);
	END_INTERFACE
} IWMStreamListVtbl;
interface IWMStreamList
{
    CONST_VTBL struct IWMStreamListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMStreamList_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMStreamList_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMStreamList_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMStreamList_GetStreams(This,pwStreamNumArray,pcStreams)    ( (This)->lpVtbl -> GetStreams(This,pwStreamNumArray,pcStreams) ) 
#define IWMStreamList_AddStream(This,wStreamNum)    ( (This)->lpVtbl -> AddStream(This,wStreamNum) ) 
#define IWMStreamList_RemoveStream(This,wStreamNum)    ( (This)->lpVtbl -> RemoveStream(This,wStreamNum) ) 
#endif
#endif
#ifndef __IWMMutualExclusion_INTERFACE_DEFINED__
#define __IWMMutualExclusion_INTERFACE_DEFINED__ 
extern const IID IID_IWMMutualExclusion;
typedef struct IWMMutualExclusionVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMMutualExclusion * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMMutualExclusion * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMMutualExclusion * This);
	HRESULT(STDMETHODCALLTYPE * GetStreams) (IWMMutualExclusion * This, WORD * pwStreamNumArray, WORD * pcStreams);
	HRESULT(STDMETHODCALLTYPE * AddStream) (IWMMutualExclusion * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * RemoveStream) (IWMMutualExclusion * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * GetType) (IWMMutualExclusion * This, GUID * pguidType);
	HRESULT(STDMETHODCALLTYPE * SetType) (IWMMutualExclusion * This, REFGUID guidType);
	END_INTERFACE
} IWMMutualExclusionVtbl;
interface IWMMutualExclusion
{
    CONST_VTBL struct IWMMutualExclusionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMMutualExclusion_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMMutualExclusion_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMMutualExclusion_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMMutualExclusion_GetStreams(This,pwStreamNumArray,pcStreams)    ( (This)->lpVtbl -> GetStreams(This,pwStreamNumArray,pcStreams) ) 
#define IWMMutualExclusion_AddStream(This,wStreamNum)    ( (This)->lpVtbl -> AddStream(This,wStreamNum) ) 
#define IWMMutualExclusion_RemoveStream(This,wStreamNum)    ( (This)->lpVtbl -> RemoveStream(This,wStreamNum) ) 
#define IWMMutualExclusion_GetType(This,pguidType)    ( (This)->lpVtbl -> GetType(This,pguidType) ) 
#define IWMMutualExclusion_SetType(This,guidType)    ( (This)->lpVtbl -> SetType(This,guidType) ) 
#endif
#endif
#ifndef __IWMMutualExclusion2_INTERFACE_DEFINED__
#define __IWMMutualExclusion2_INTERFACE_DEFINED__ 
extern const IID IID_IWMMutualExclusion2;
typedef struct IWMMutualExclusion2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMMutualExclusion2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMMutualExclusion2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMMutualExclusion2 * This);
	HRESULT(STDMETHODCALLTYPE * GetStreams) (IWMMutualExclusion2 * This, WORD * pwStreamNumArray, WORD * pcStreams);
	HRESULT(STDMETHODCALLTYPE * AddStream) (IWMMutualExclusion2 * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * RemoveStream) (IWMMutualExclusion2 * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * GetType) (IWMMutualExclusion2 * This, GUID * pguidType);
	HRESULT(STDMETHODCALLTYPE * SetType) (IWMMutualExclusion2 * This, REFGUID guidType);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMMutualExclusion2 * This, WCHAR * pwszName, WORD * pcchName);
	HRESULT(STDMETHODCALLTYPE * SetName) (IWMMutualExclusion2 * This, LPCWSTR_WMSDK_TYPE_SAFE pwszName);
	HRESULT(STDMETHODCALLTYPE * GetRecordCount) (IWMMutualExclusion2 * This, WORD * pwRecordCount);
	HRESULT(STDMETHODCALLTYPE * AddRecord) (IWMMutualExclusion2 * This);
	HRESULT(STDMETHODCALLTYPE * RemoveRecord) (IWMMutualExclusion2 * This, WORD wRecordNumber);
	HRESULT(STDMETHODCALLTYPE * GetRecordName) (IWMMutualExclusion2 * This, WORD wRecordNumber, WCHAR * pwszRecordName, WORD * pcchRecordName);
	HRESULT(STDMETHODCALLTYPE * SetRecordName) (IWMMutualExclusion2 * This, WORD wRecordNumber, LPCWSTR_WMSDK_TYPE_SAFE pwszRecordName);
	HRESULT(STDMETHODCALLTYPE * GetStreamsForRecord) (IWMMutualExclusion2 * This, WORD wRecordNumber, WORD * pwStreamNumArray, WORD * pcStreams);
	HRESULT(STDMETHODCALLTYPE * AddStreamForRecord) (IWMMutualExclusion2 * This, WORD wRecordNumber, WORD wStreamNumber);
	HRESULT(STDMETHODCALLTYPE * RemoveStreamForRecord) (IWMMutualExclusion2 * This, WORD wRecordNumber, WORD wStreamNumber);
	END_INTERFACE
} IWMMutualExclusion2Vtbl;
interface IWMMutualExclusion2
{
    CONST_VTBL struct IWMMutualExclusion2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMMutualExclusion2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMMutualExclusion2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMMutualExclusion2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMMutualExclusion2_GetStreams(This,pwStreamNumArray,pcStreams)    ( (This)->lpVtbl -> GetStreams(This,pwStreamNumArray,pcStreams) ) 
#define IWMMutualExclusion2_AddStream(This,wStreamNum)    ( (This)->lpVtbl -> AddStream(This,wStreamNum) ) 
#define IWMMutualExclusion2_RemoveStream(This,wStreamNum)    ( (This)->lpVtbl -> RemoveStream(This,wStreamNum) ) 
#define IWMMutualExclusion2_GetType(This,pguidType)    ( (This)->lpVtbl -> GetType(This,pguidType) ) 
#define IWMMutualExclusion2_SetType(This,guidType)    ( (This)->lpVtbl -> SetType(This,guidType) ) 
#define IWMMutualExclusion2_GetName(This,pwszName,pcchName)    ( (This)->lpVtbl -> GetName(This,pwszName,pcchName) ) 
#define IWMMutualExclusion2_SetName(This,pwszName)    ( (This)->lpVtbl -> SetName(This,pwszName) ) 
#define IWMMutualExclusion2_GetRecordCount(This,pwRecordCount)    ( (This)->lpVtbl -> GetRecordCount(This,pwRecordCount) ) 
#define IWMMutualExclusion2_AddRecord(This)    ( (This)->lpVtbl -> AddRecord(This) ) 
#define IWMMutualExclusion2_RemoveRecord(This,wRecordNumber)    ( (This)->lpVtbl -> RemoveRecord(This,wRecordNumber) ) 
#define IWMMutualExclusion2_GetRecordName(This,wRecordNumber,pwszRecordName,pcchRecordName)    ( (This)->lpVtbl -> GetRecordName(This,wRecordNumber,pwszRecordName,pcchRecordName) ) 
#define IWMMutualExclusion2_SetRecordName(This,wRecordNumber,pwszRecordName)    ( (This)->lpVtbl -> SetRecordName(This,wRecordNumber,pwszRecordName) ) 
#define IWMMutualExclusion2_GetStreamsForRecord(This,wRecordNumber,pwStreamNumArray,pcStreams)    ( (This)->lpVtbl -> GetStreamsForRecord(This,wRecordNumber,pwStreamNumArray,pcStreams) ) 
#define IWMMutualExclusion2_AddStreamForRecord(This,wRecordNumber,wStreamNumber)    ( (This)->lpVtbl -> AddStreamForRecord(This,wRecordNumber,wStreamNumber) ) 
#define IWMMutualExclusion2_RemoveStreamForRecord(This,wRecordNumber,wStreamNumber)    ( (This)->lpVtbl -> RemoveStreamForRecord(This,wRecordNumber,wStreamNumber) ) 
#endif
#endif
#ifndef __IWMBandwidthSharing_INTERFACE_DEFINED__
#define __IWMBandwidthSharing_INTERFACE_DEFINED__ 
extern const IID IID_IWMBandwidthSharing;
typedef struct IWMBandwidthSharingVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMBandwidthSharing * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMBandwidthSharing * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMBandwidthSharing * This);
	HRESULT(STDMETHODCALLTYPE * GetStreams) (IWMBandwidthSharing * This, WORD * pwStreamNumArray, WORD * pcStreams);
	HRESULT(STDMETHODCALLTYPE * AddStream) (IWMBandwidthSharing * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * RemoveStream) (IWMBandwidthSharing * This, WORD wStreamNum);
	HRESULT(STDMETHODCALLTYPE * GetType) (IWMBandwidthSharing * This, GUID * pguidType);
	HRESULT(STDMETHODCALLTYPE * SetType) (IWMBandwidthSharing * This, REFGUID guidType);
	HRESULT(STDMETHODCALLTYPE * GetBandwidth) (IWMBandwidthSharing * This, DWORD * pdwBitrate, DWORD * pmsBufferWindow);
	HRESULT(STDMETHODCALLTYPE * SetBandwidth) (IWMBandwidthSharing * This, DWORD dwBitrate, DWORD msBufferWindow);
	END_INTERFACE
} IWMBandwidthSharingVtbl;
interface IWMBandwidthSharing
{
    CONST_VTBL struct IWMBandwidthSharingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMBandwidthSharing_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMBandwidthSharing_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMBandwidthSharing_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMBandwidthSharing_GetStreams(This,pwStreamNumArray,pcStreams)    ( (This)->lpVtbl -> GetStreams(This,pwStreamNumArray,pcStreams) ) 
#define IWMBandwidthSharing_AddStream(This,wStreamNum)    ( (This)->lpVtbl -> AddStream(This,wStreamNum) ) 
#define IWMBandwidthSharing_RemoveStream(This,wStreamNum)    ( (This)->lpVtbl -> RemoveStream(This,wStreamNum) ) 
#define IWMBandwidthSharing_GetType(This,pguidType)    ( (This)->lpVtbl -> GetType(This,pguidType) ) 
#define IWMBandwidthSharing_SetType(This,guidType)    ( (This)->lpVtbl -> SetType(This,guidType) ) 
#define IWMBandwidthSharing_GetBandwidth(This,pdwBitrate,pmsBufferWindow)    ( (This)->lpVtbl -> GetBandwidth(This,pdwBitrate,pmsBufferWindow) ) 
#define IWMBandwidthSharing_SetBandwidth(This,dwBitrate,msBufferWindow)    ( (This)->lpVtbl -> SetBandwidth(This,dwBitrate,msBufferWindow) ) 
#endif
#endif
#ifndef __IWMStreamPrioritization_INTERFACE_DEFINED__
#define __IWMStreamPrioritization_INTERFACE_DEFINED__ 
extern const IID IID_IWMStreamPrioritization;
typedef struct IWMStreamPrioritizationVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMStreamPrioritization * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMStreamPrioritization * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMStreamPrioritization * This);
	HRESULT(STDMETHODCALLTYPE * GetPriorityRecords) (IWMStreamPrioritization * This, WM_STREAM_PRIORITY_RECORD * pRecordArray, WORD * pcRecords);
	HRESULT(STDMETHODCALLTYPE * SetPriorityRecords) (IWMStreamPrioritization * This, WM_STREAM_PRIORITY_RECORD * pRecordArray, WORD cRecords);
	END_INTERFACE
} IWMStreamPrioritizationVtbl;
interface IWMStreamPrioritization
{
    CONST_VTBL struct IWMStreamPrioritizationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMStreamPrioritization_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMStreamPrioritization_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMStreamPrioritization_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMStreamPrioritization_GetPriorityRecords(This,pRecordArray,pcRecords)    ( (This)->lpVtbl -> GetPriorityRecords(This,pRecordArray,pcRecords) ) 
#define IWMStreamPrioritization_SetPriorityRecords(This,pRecordArray,cRecords)    ( (This)->lpVtbl -> SetPriorityRecords(This,pRecordArray,cRecords) ) 
#endif
#endif
#ifndef __IWMWriterAdvanced_INTERFACE_DEFINED__
#define __IWMWriterAdvanced_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterAdvanced;
typedef struct IWMWriterAdvancedVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterAdvanced * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterAdvanced * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterAdvanced * This);
	HRESULT(STDMETHODCALLTYPE * GetSinkCount) (IWMWriterAdvanced * This, DWORD * pcSinks);
	HRESULT(STDMETHODCALLTYPE * GetSink) (IWMWriterAdvanced * This, DWORD dwSinkNum, IWMWriterSink ** ppSink);
	HRESULT(STDMETHODCALLTYPE * AddSink) (IWMWriterAdvanced * This, IWMWriterSink * pSink);
	HRESULT(STDMETHODCALLTYPE * RemoveSink) (IWMWriterAdvanced * This, IWMWriterSink * pSink);
	HRESULT(STDMETHODCALLTYPE * WriteStreamSample) (IWMWriterAdvanced * This, WORD wStreamNum, QWORD cnsSampleTime, DWORD msSampleSendTime, QWORD cnsSampleDuration, DWORD dwFlags, INSSBuffer * pSample);
	HRESULT(STDMETHODCALLTYPE * SetLiveSource) (IWMWriterAdvanced * This, BOOL fIsLiveSource);
	HRESULT(STDMETHODCALLTYPE * IsRealTime) (IWMWriterAdvanced * This, BOOL * pfRealTime);
	HRESULT(STDMETHODCALLTYPE * GetWriterTime) (IWMWriterAdvanced * This, QWORD * pcnsCurrentTime);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (IWMWriterAdvanced * This, WORD wStreamNum, WM_WRITER_STATISTICS * pStats);
	HRESULT(STDMETHODCALLTYPE * SetSyncTolerance) (IWMWriterAdvanced * This, DWORD msWindow);
	HRESULT(STDMETHODCALLTYPE * GetSyncTolerance) (IWMWriterAdvanced * This, DWORD * pmsWindow);
	END_INTERFACE
} IWMWriterAdvancedVtbl;
interface IWMWriterAdvanced
{
    CONST_VTBL struct IWMWriterAdvancedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterAdvanced_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterAdvanced_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterAdvanced_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterAdvanced_GetSinkCount(This,pcSinks)    ( (This)->lpVtbl -> GetSinkCount(This,pcSinks) ) 
#define IWMWriterAdvanced_GetSink(This,dwSinkNum,ppSink)    ( (This)->lpVtbl -> GetSink(This,dwSinkNum,ppSink) ) 
#define IWMWriterAdvanced_AddSink(This,pSink)    ( (This)->lpVtbl -> AddSink(This,pSink) ) 
#define IWMWriterAdvanced_RemoveSink(This,pSink)    ( (This)->lpVtbl -> RemoveSink(This,pSink) ) 
#define IWMWriterAdvanced_WriteStreamSample(This,wStreamNum,cnsSampleTime,msSampleSendTime,cnsSampleDuration,dwFlags,pSample)    ( (This)->lpVtbl -> WriteStreamSample(This,wStreamNum,cnsSampleTime,msSampleSendTime,cnsSampleDuration,dwFlags,pSample) ) 
#define IWMWriterAdvanced_SetLiveSource(This,fIsLiveSource)    ( (This)->lpVtbl -> SetLiveSource(This,fIsLiveSource) ) 
#define IWMWriterAdvanced_IsRealTime(This,pfRealTime)    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) ) 
#define IWMWriterAdvanced_GetWriterTime(This,pcnsCurrentTime)    ( (This)->lpVtbl -> GetWriterTime(This,pcnsCurrentTime) ) 
#define IWMWriterAdvanced_GetStatistics(This,wStreamNum,pStats)    ( (This)->lpVtbl -> GetStatistics(This,wStreamNum,pStats) ) 
#define IWMWriterAdvanced_SetSyncTolerance(This,msWindow)    ( (This)->lpVtbl -> SetSyncTolerance(This,msWindow) ) 
#define IWMWriterAdvanced_GetSyncTolerance(This,pmsWindow)    ( (This)->lpVtbl -> GetSyncTolerance(This,pmsWindow) ) 
#endif
#endif
#ifndef __IWMWriterAdvanced2_INTERFACE_DEFINED__
#define __IWMWriterAdvanced2_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterAdvanced2;
typedef struct IWMWriterAdvanced2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterAdvanced2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterAdvanced2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterAdvanced2 * This);
	HRESULT(STDMETHODCALLTYPE * GetSinkCount) (IWMWriterAdvanced2 * This, DWORD * pcSinks);
	HRESULT(STDMETHODCALLTYPE * GetSink) (IWMWriterAdvanced2 * This, DWORD dwSinkNum, IWMWriterSink ** ppSink);
	HRESULT(STDMETHODCALLTYPE * AddSink) (IWMWriterAdvanced2 * This, IWMWriterSink * pSink);
	HRESULT(STDMETHODCALLTYPE * RemoveSink) (IWMWriterAdvanced2 * This, IWMWriterSink * pSink);
	HRESULT(STDMETHODCALLTYPE * WriteStreamSample) (IWMWriterAdvanced2 * This, WORD wStreamNum, QWORD cnsSampleTime, DWORD msSampleSendTime, QWORD cnsSampleDuration, DWORD dwFlags, INSSBuffer * pSample);
	HRESULT(STDMETHODCALLTYPE * SetLiveSource) (IWMWriterAdvanced2 * This, BOOL fIsLiveSource);
	HRESULT(STDMETHODCALLTYPE * IsRealTime) (IWMWriterAdvanced2 * This, BOOL * pfRealTime);
	HRESULT(STDMETHODCALLTYPE * GetWriterTime) (IWMWriterAdvanced2 * This, QWORD * pcnsCurrentTime);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (IWMWriterAdvanced2 * This, WORD wStreamNum, WM_WRITER_STATISTICS * pStats);
	HRESULT(STDMETHODCALLTYPE * SetSyncTolerance) (IWMWriterAdvanced2 * This, DWORD msWindow);
	HRESULT(STDMETHODCALLTYPE * GetSyncTolerance) (IWMWriterAdvanced2 * This, DWORD * pmsWindow);
	HRESULT(STDMETHODCALLTYPE * GetInputSetting) (IWMWriterAdvanced2 * This, DWORD dwInputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetInputSetting) (IWMWriterAdvanced2 * This, DWORD dwInputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	END_INTERFACE
} IWMWriterAdvanced2Vtbl;
interface IWMWriterAdvanced2
{
    CONST_VTBL struct IWMWriterAdvanced2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterAdvanced2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterAdvanced2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterAdvanced2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterAdvanced2_GetSinkCount(This,pcSinks)    ( (This)->lpVtbl -> GetSinkCount(This,pcSinks) ) 
#define IWMWriterAdvanced2_GetSink(This,dwSinkNum,ppSink)    ( (This)->lpVtbl -> GetSink(This,dwSinkNum,ppSink) ) 
#define IWMWriterAdvanced2_AddSink(This,pSink)    ( (This)->lpVtbl -> AddSink(This,pSink) ) 
#define IWMWriterAdvanced2_RemoveSink(This,pSink)    ( (This)->lpVtbl -> RemoveSink(This,pSink) ) 
#define IWMWriterAdvanced2_WriteStreamSample(This,wStreamNum,cnsSampleTime,msSampleSendTime,cnsSampleDuration,dwFlags,pSample)    ( (This)->lpVtbl -> WriteStreamSample(This,wStreamNum,cnsSampleTime,msSampleSendTime,cnsSampleDuration,dwFlags,pSample) ) 
#define IWMWriterAdvanced2_SetLiveSource(This,fIsLiveSource)    ( (This)->lpVtbl -> SetLiveSource(This,fIsLiveSource) ) 
#define IWMWriterAdvanced2_IsRealTime(This,pfRealTime)    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) ) 
#define IWMWriterAdvanced2_GetWriterTime(This,pcnsCurrentTime)    ( (This)->lpVtbl -> GetWriterTime(This,pcnsCurrentTime) ) 
#define IWMWriterAdvanced2_GetStatistics(This,wStreamNum,pStats)    ( (This)->lpVtbl -> GetStatistics(This,wStreamNum,pStats) ) 
#define IWMWriterAdvanced2_SetSyncTolerance(This,msWindow)    ( (This)->lpVtbl -> SetSyncTolerance(This,msWindow) ) 
#define IWMWriterAdvanced2_GetSyncTolerance(This,pmsWindow)    ( (This)->lpVtbl -> GetSyncTolerance(This,pmsWindow) ) 
#define IWMWriterAdvanced2_GetInputSetting(This,dwInputNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetInputSetting(This,dwInputNum,pszName,pType,pValue,pcbLength) ) 
#define IWMWriterAdvanced2_SetInputSetting(This,dwInputNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetInputSetting(This,dwInputNum,pszName,Type,pValue,cbLength) ) 
#endif
#endif
#ifndef __IWMWriterAdvanced3_INTERFACE_DEFINED__
#define __IWMWriterAdvanced3_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterAdvanced3;
typedef struct IWMWriterAdvanced3Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterAdvanced3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterAdvanced3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterAdvanced3 * This);
	HRESULT(STDMETHODCALLTYPE * GetSinkCount) (IWMWriterAdvanced3 * This, DWORD * pcSinks);
	HRESULT(STDMETHODCALLTYPE * GetSink) (IWMWriterAdvanced3 * This, DWORD dwSinkNum, IWMWriterSink ** ppSink);
	HRESULT(STDMETHODCALLTYPE * AddSink) (IWMWriterAdvanced3 * This, IWMWriterSink * pSink);
	HRESULT(STDMETHODCALLTYPE * RemoveSink) (IWMWriterAdvanced3 * This, IWMWriterSink * pSink);
	HRESULT(STDMETHODCALLTYPE * WriteStreamSample) (IWMWriterAdvanced3 * This, WORD wStreamNum, QWORD cnsSampleTime, DWORD msSampleSendTime, QWORD cnsSampleDuration, DWORD dwFlags, INSSBuffer * pSample);
	HRESULT(STDMETHODCALLTYPE * SetLiveSource) (IWMWriterAdvanced3 * This, BOOL fIsLiveSource);
	HRESULT(STDMETHODCALLTYPE * IsRealTime) (IWMWriterAdvanced3 * This, BOOL * pfRealTime);
	HRESULT(STDMETHODCALLTYPE * GetWriterTime) (IWMWriterAdvanced3 * This, QWORD * pcnsCurrentTime);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (IWMWriterAdvanced3 * This, WORD wStreamNum, WM_WRITER_STATISTICS * pStats);
	HRESULT(STDMETHODCALLTYPE * SetSyncTolerance) (IWMWriterAdvanced3 * This, DWORD msWindow);
	HRESULT(STDMETHODCALLTYPE * GetSyncTolerance) (IWMWriterAdvanced3 * This, DWORD * pmsWindow);
	HRESULT(STDMETHODCALLTYPE * GetInputSetting) (IWMWriterAdvanced3 * This, DWORD dwInputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetInputSetting) (IWMWriterAdvanced3 * This, DWORD dwInputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * GetStatisticsEx) (IWMWriterAdvanced3 * This, WORD wStreamNum, WM_WRITER_STATISTICS_EX * pStats);
	HRESULT(STDMETHODCALLTYPE * SetNonBlocking) (IWMWriterAdvanced3 * This);
	END_INTERFACE
} IWMWriterAdvanced3Vtbl;
interface IWMWriterAdvanced3
{
    CONST_VTBL struct IWMWriterAdvanced3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterAdvanced3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterAdvanced3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterAdvanced3_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterAdvanced3_GetSinkCount(This,pcSinks)    ( (This)->lpVtbl -> GetSinkCount(This,pcSinks) ) 
#define IWMWriterAdvanced3_GetSink(This,dwSinkNum,ppSink)    ( (This)->lpVtbl -> GetSink(This,dwSinkNum,ppSink) ) 
#define IWMWriterAdvanced3_AddSink(This,pSink)    ( (This)->lpVtbl -> AddSink(This,pSink) ) 
#define IWMWriterAdvanced3_RemoveSink(This,pSink)    ( (This)->lpVtbl -> RemoveSink(This,pSink) ) 
#define IWMWriterAdvanced3_WriteStreamSample(This,wStreamNum,cnsSampleTime,msSampleSendTime,cnsSampleDuration,dwFlags,pSample)    ( (This)->lpVtbl -> WriteStreamSample(This,wStreamNum,cnsSampleTime,msSampleSendTime,cnsSampleDuration,dwFlags,pSample) ) 
#define IWMWriterAdvanced3_SetLiveSource(This,fIsLiveSource)    ( (This)->lpVtbl -> SetLiveSource(This,fIsLiveSource) ) 
#define IWMWriterAdvanced3_IsRealTime(This,pfRealTime)    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) ) 
#define IWMWriterAdvanced3_GetWriterTime(This,pcnsCurrentTime)    ( (This)->lpVtbl -> GetWriterTime(This,pcnsCurrentTime) ) 
#define IWMWriterAdvanced3_GetStatistics(This,wStreamNum,pStats)    ( (This)->lpVtbl -> GetStatistics(This,wStreamNum,pStats) ) 
#define IWMWriterAdvanced3_SetSyncTolerance(This,msWindow)    ( (This)->lpVtbl -> SetSyncTolerance(This,msWindow) ) 
#define IWMWriterAdvanced3_GetSyncTolerance(This,pmsWindow)    ( (This)->lpVtbl -> GetSyncTolerance(This,pmsWindow) ) 
#define IWMWriterAdvanced3_GetInputSetting(This,dwInputNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetInputSetting(This,dwInputNum,pszName,pType,pValue,pcbLength) ) 
#define IWMWriterAdvanced3_SetInputSetting(This,dwInputNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetInputSetting(This,dwInputNum,pszName,Type,pValue,cbLength) ) 
#define IWMWriterAdvanced3_GetStatisticsEx(This,wStreamNum,pStats)    ( (This)->lpVtbl -> GetStatisticsEx(This,wStreamNum,pStats) ) 
#define IWMWriterAdvanced3_SetNonBlocking(This)    ( (This)->lpVtbl -> SetNonBlocking(This) ) 
#endif
#endif
#ifndef __IWMWriterPreprocess_INTERFACE_DEFINED__
#define __IWMWriterPreprocess_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterPreprocess;
typedef struct IWMWriterPreprocessVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterPreprocess * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterPreprocess * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterPreprocess * This);
	HRESULT(STDMETHODCALLTYPE * GetMaxPreprocessingPasses) (IWMWriterPreprocess * This, DWORD dwInputNum, DWORD dwFlags, DWORD * pdwMaxNumPasses);
	HRESULT(STDMETHODCALLTYPE * SetNumPreprocessingPasses) (IWMWriterPreprocess * This, DWORD dwInputNum, DWORD dwFlags, DWORD dwNumPasses);
	HRESULT(STDMETHODCALLTYPE * BeginPreprocessingPass) (IWMWriterPreprocess * This, DWORD dwInputNum, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * PreprocessSample) (IWMWriterPreprocess * This, DWORD dwInputNum, QWORD cnsSampleTime, DWORD dwFlags, INSSBuffer * pSample);
	HRESULT(STDMETHODCALLTYPE * EndPreprocessingPass) (IWMWriterPreprocess * This, DWORD dwInputNum, DWORD dwFlags);
	END_INTERFACE
} IWMWriterPreprocessVtbl;
interface IWMWriterPreprocess
{
    CONST_VTBL struct IWMWriterPreprocessVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterPreprocess_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterPreprocess_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterPreprocess_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterPreprocess_GetMaxPreprocessingPasses(This,dwInputNum,dwFlags,pdwMaxNumPasses)    ( (This)->lpVtbl -> GetMaxPreprocessingPasses(This,dwInputNum,dwFlags,pdwMaxNumPasses) ) 
#define IWMWriterPreprocess_SetNumPreprocessingPasses(This,dwInputNum,dwFlags,dwNumPasses)    ( (This)->lpVtbl -> SetNumPreprocessingPasses(This,dwInputNum,dwFlags,dwNumPasses) ) 
#define IWMWriterPreprocess_BeginPreprocessingPass(This,dwInputNum,dwFlags)    ( (This)->lpVtbl -> BeginPreprocessingPass(This,dwInputNum,dwFlags) ) 
#define IWMWriterPreprocess_PreprocessSample(This,dwInputNum,cnsSampleTime,dwFlags,pSample)    ( (This)->lpVtbl -> PreprocessSample(This,dwInputNum,cnsSampleTime,dwFlags,pSample) ) 
#define IWMWriterPreprocess_EndPreprocessingPass(This,dwInputNum,dwFlags)    ( (This)->lpVtbl -> EndPreprocessingPass(This,dwInputNum,dwFlags) ) 
#endif
#endif
#ifndef __IWMWriterPostViewCallback_INTERFACE_DEFINED__
#define __IWMWriterPostViewCallback_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterPostViewCallback;
typedef struct IWMWriterPostViewCallbackVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterPostViewCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterPostViewCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterPostViewCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnStatus) (IWMWriterPostViewCallback * This, WMT_STATUS Status, HRESULT hr, WMT_ATTR_DATATYPE dwType, BYTE * pValue, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * OnPostViewSample) (IWMWriterPostViewCallback * This, WORD wStreamNumber, QWORD cnsSampleTime, QWORD cnsSampleDuration, DWORD dwFlags, INSSBuffer * pSample, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * AllocateForPostView) (IWMWriterPostViewCallback * This, WORD wStreamNum, DWORD cbBuffer, INSSBuffer ** ppBuffer, void *pvContext);
	END_INTERFACE
} IWMWriterPostViewCallbackVtbl;
interface IWMWriterPostViewCallback
{
    CONST_VTBL struct IWMWriterPostViewCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterPostViewCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterPostViewCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterPostViewCallback_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterPostViewCallback_OnStatus(This,Status,hr,dwType,pValue,pvContext)    ( (This)->lpVtbl -> OnStatus(This,Status,hr,dwType,pValue,pvContext) ) 
#define IWMWriterPostViewCallback_OnPostViewSample(This,wStreamNumber,cnsSampleTime,cnsSampleDuration,dwFlags,pSample,pvContext)    ( (This)->lpVtbl -> OnPostViewSample(This,wStreamNumber,cnsSampleTime,cnsSampleDuration,dwFlags,pSample,pvContext) ) 
#define IWMWriterPostViewCallback_AllocateForPostView(This,wStreamNum,cbBuffer,ppBuffer,pvContext)    ( (This)->lpVtbl -> AllocateForPostView(This,wStreamNum,cbBuffer,ppBuffer,pvContext) ) 
#endif
#endif
#ifndef __IWMWriterPostView_INTERFACE_DEFINED__
#define __IWMWriterPostView_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterPostView;
typedef struct IWMWriterPostViewVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterPostView * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterPostView * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterPostView * This);
	HRESULT(STDMETHODCALLTYPE * SetPostViewCallback) (IWMWriterPostView * This, IWMWriterPostViewCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * SetReceivePostViewSamples) (IWMWriterPostView * This, WORD wStreamNum, BOOL fReceivePostViewSamples);
	HRESULT(STDMETHODCALLTYPE * GetReceivePostViewSamples) (IWMWriterPostView * This, WORD wStreamNum, BOOL * pfReceivePostViewSamples);
	HRESULT(STDMETHODCALLTYPE * GetPostViewProps) (IWMWriterPostView * This, WORD wStreamNumber, IWMMediaProps ** ppOutput);
	HRESULT(STDMETHODCALLTYPE * SetPostViewProps) (IWMWriterPostView * This, WORD wStreamNumber, IWMMediaProps * pOutput);
	HRESULT(STDMETHODCALLTYPE * GetPostViewFormatCount) (IWMWriterPostView * This, WORD wStreamNumber, DWORD * pcFormats);
	HRESULT(STDMETHODCALLTYPE * GetPostViewFormat) (IWMWriterPostView * This, WORD wStreamNumber, DWORD dwFormatNumber, IWMMediaProps ** ppProps);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForPostView) (IWMWriterPostView * This, WORD wStreamNumber, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForPostView) (IWMWriterPostView * This, WORD wStreamNumber, BOOL * pfAllocate);
	END_INTERFACE
} IWMWriterPostViewVtbl;
interface IWMWriterPostView
{
    CONST_VTBL struct IWMWriterPostViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterPostView_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterPostView_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterPostView_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterPostView_SetPostViewCallback(This,pCallback,pvContext)    ( (This)->lpVtbl -> SetPostViewCallback(This,pCallback,pvContext) ) 
#define IWMWriterPostView_SetReceivePostViewSamples(This,wStreamNum,fReceivePostViewSamples)    ( (This)->lpVtbl -> SetReceivePostViewSamples(This,wStreamNum,fReceivePostViewSamples) ) 
#define IWMWriterPostView_GetReceivePostViewSamples(This,wStreamNum,pfReceivePostViewSamples)    ( (This)->lpVtbl -> GetReceivePostViewSamples(This,wStreamNum,pfReceivePostViewSamples) ) 
#define IWMWriterPostView_GetPostViewProps(This,wStreamNumber,ppOutput)    ( (This)->lpVtbl -> GetPostViewProps(This,wStreamNumber,ppOutput) ) 
#define IWMWriterPostView_SetPostViewProps(This,wStreamNumber,pOutput)    ( (This)->lpVtbl -> SetPostViewProps(This,wStreamNumber,pOutput) ) 
#define IWMWriterPostView_GetPostViewFormatCount(This,wStreamNumber,pcFormats)    ( (This)->lpVtbl -> GetPostViewFormatCount(This,wStreamNumber,pcFormats) ) 
#define IWMWriterPostView_GetPostViewFormat(This,wStreamNumber,dwFormatNumber,ppProps)    ( (This)->lpVtbl -> GetPostViewFormat(This,wStreamNumber,dwFormatNumber,ppProps) ) 
#define IWMWriterPostView_SetAllocateForPostView(This,wStreamNumber,fAllocate)    ( (This)->lpVtbl -> SetAllocateForPostView(This,wStreamNumber,fAllocate) ) 
#define IWMWriterPostView_GetAllocateForPostView(This,wStreamNumber,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForPostView(This,wStreamNumber,pfAllocate) ) 
#endif
#endif
#ifndef __IWMWriterSink_INTERFACE_DEFINED__
#define __IWMWriterSink_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterSink;
typedef struct IWMWriterSinkVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterSink * This);
	HRESULT(STDMETHODCALLTYPE * OnHeader) (IWMWriterSink * This, INSSBuffer * pHeader);
	HRESULT(STDMETHODCALLTYPE * IsRealTime) (IWMWriterSink * This, BOOL * pfRealTime);
	HRESULT(STDMETHODCALLTYPE * AllocateDataUnit) (IWMWriterSink * This, DWORD cbDataUnit, INSSBuffer ** ppDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnDataUnit) (IWMWriterSink * This, INSSBuffer * pDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnEndWriting) (IWMWriterSink * This);
	END_INTERFACE
} IWMWriterSinkVtbl;
interface IWMWriterSink
{
    CONST_VTBL struct IWMWriterSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterSink_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterSink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterSink_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterSink_OnHeader(This,pHeader)    ( (This)->lpVtbl -> OnHeader(This,pHeader) ) 
#define IWMWriterSink_IsRealTime(This,pfRealTime)    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) ) 
#define IWMWriterSink_AllocateDataUnit(This,cbDataUnit,ppDataUnit)    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) ) 
#define IWMWriterSink_OnDataUnit(This,pDataUnit)    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) ) 
#define IWMWriterSink_OnEndWriting(This)    ( (This)->lpVtbl -> OnEndWriting(This) ) 
#endif
#endif
#ifndef __IWMRegisterCallback_INTERFACE_DEFINED__
#define __IWMRegisterCallback_INTERFACE_DEFINED__ 
extern const IID IID_IWMRegisterCallback;
typedef struct IWMRegisterCallbackVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMRegisterCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMRegisterCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMRegisterCallback * This);
	HRESULT(STDMETHODCALLTYPE * Advise) (IWMRegisterCallback * This, IWMStatusCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (IWMRegisterCallback * This, IWMStatusCallback * pCallback, void *pvContext);
	END_INTERFACE
} IWMRegisterCallbackVtbl;
interface IWMRegisterCallback
{
    CONST_VTBL struct IWMRegisterCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMRegisterCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMRegisterCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMRegisterCallback_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMRegisterCallback_Advise(This,pCallback,pvContext)    ( (This)->lpVtbl -> Advise(This,pCallback,pvContext) ) 
#define IWMRegisterCallback_Unadvise(This,pCallback,pvContext)    ( (This)->lpVtbl -> Unadvise(This,pCallback,pvContext) ) 
#endif
#endif
#ifndef __IWMWriterFileSink_INTERFACE_DEFINED__
#define __IWMWriterFileSink_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterFileSink;
typedef struct IWMWriterFileSinkVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterFileSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterFileSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterFileSink * This);
	HRESULT(STDMETHODCALLTYPE * OnHeader) (IWMWriterFileSink * This, INSSBuffer * pHeader);
	HRESULT(STDMETHODCALLTYPE * IsRealTime) (IWMWriterFileSink * This, BOOL * pfRealTime);
	HRESULT(STDMETHODCALLTYPE * AllocateDataUnit) (IWMWriterFileSink * This, DWORD cbDataUnit, INSSBuffer ** ppDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnDataUnit) (IWMWriterFileSink * This, INSSBuffer * pDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnEndWriting) (IWMWriterFileSink * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IWMWriterFileSink * This, const WCHAR * pwszFilename);
	END_INTERFACE
} IWMWriterFileSinkVtbl;
interface IWMWriterFileSink
{
    CONST_VTBL struct IWMWriterFileSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterFileSink_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterFileSink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterFileSink_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterFileSink_OnHeader(This,pHeader)    ( (This)->lpVtbl -> OnHeader(This,pHeader) ) 
#define IWMWriterFileSink_IsRealTime(This,pfRealTime)    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) ) 
#define IWMWriterFileSink_AllocateDataUnit(This,cbDataUnit,ppDataUnit)    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) ) 
#define IWMWriterFileSink_OnDataUnit(This,pDataUnit)    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) ) 
#define IWMWriterFileSink_OnEndWriting(This)    ( (This)->lpVtbl -> OnEndWriting(This) ) 
#define IWMWriterFileSink_Open(This,pwszFilename)    ( (This)->lpVtbl -> Open(This,pwszFilename) ) 
#endif
#endif
#ifndef __IWMWriterFileSink2_INTERFACE_DEFINED__
#define __IWMWriterFileSink2_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterFileSink2;
typedef struct IWMWriterFileSink2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterFileSink2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterFileSink2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterFileSink2 * This);
	HRESULT(STDMETHODCALLTYPE * OnHeader) (IWMWriterFileSink2 * This, INSSBuffer * pHeader);
	HRESULT(STDMETHODCALLTYPE * IsRealTime) (IWMWriterFileSink2 * This, BOOL * pfRealTime);
	HRESULT(STDMETHODCALLTYPE * AllocateDataUnit) (IWMWriterFileSink2 * This, DWORD cbDataUnit, INSSBuffer ** ppDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnDataUnit) (IWMWriterFileSink2 * This, INSSBuffer * pDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnEndWriting) (IWMWriterFileSink2 * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IWMWriterFileSink2 * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * Start) (IWMWriterFileSink2 * This, QWORD cnsStartTime);
	HRESULT(STDMETHODCALLTYPE * Stop) (IWMWriterFileSink2 * This, QWORD cnsStopTime);
	HRESULT(STDMETHODCALLTYPE * IsStopped) (IWMWriterFileSink2 * This, BOOL * pfStopped);
	HRESULT(STDMETHODCALLTYPE * GetFileDuration) (IWMWriterFileSink2 * This, QWORD * pcnsDuration);
	HRESULT(STDMETHODCALLTYPE * GetFileSize) (IWMWriterFileSink2 * This, QWORD * pcbFile);
	HRESULT(STDMETHODCALLTYPE * Close) (IWMWriterFileSink2 * This);
	HRESULT(STDMETHODCALLTYPE * IsClosed) (IWMWriterFileSink2 * This, BOOL * pfClosed);
	END_INTERFACE
} IWMWriterFileSink2Vtbl;
interface IWMWriterFileSink2
{
    CONST_VTBL struct IWMWriterFileSink2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterFileSink2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterFileSink2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterFileSink2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterFileSink2_OnHeader(This,pHeader)    ( (This)->lpVtbl -> OnHeader(This,pHeader) ) 
#define IWMWriterFileSink2_IsRealTime(This,pfRealTime)    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) ) 
#define IWMWriterFileSink2_AllocateDataUnit(This,cbDataUnit,ppDataUnit)    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) ) 
#define IWMWriterFileSink2_OnDataUnit(This,pDataUnit)    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) ) 
#define IWMWriterFileSink2_OnEndWriting(This)    ( (This)->lpVtbl -> OnEndWriting(This) ) 
#define IWMWriterFileSink2_Open(This,pwszFilename)    ( (This)->lpVtbl -> Open(This,pwszFilename) ) 
#define IWMWriterFileSink2_Start(This,cnsStartTime)    ( (This)->lpVtbl -> Start(This,cnsStartTime) ) 
#define IWMWriterFileSink2_Stop(This,cnsStopTime)    ( (This)->lpVtbl -> Stop(This,cnsStopTime) ) 
#define IWMWriterFileSink2_IsStopped(This,pfStopped)    ( (This)->lpVtbl -> IsStopped(This,pfStopped) ) 
#define IWMWriterFileSink2_GetFileDuration(This,pcnsDuration)    ( (This)->lpVtbl -> GetFileDuration(This,pcnsDuration) ) 
#define IWMWriterFileSink2_GetFileSize(This,pcbFile)    ( (This)->lpVtbl -> GetFileSize(This,pcbFile) ) 
#define IWMWriterFileSink2_Close(This)    ( (This)->lpVtbl -> Close(This) ) 
#define IWMWriterFileSink2_IsClosed(This,pfClosed)    ( (This)->lpVtbl -> IsClosed(This,pfClosed) ) 
#endif
#endif
#ifndef __IWMWriterFileSink3_INTERFACE_DEFINED__
#define __IWMWriterFileSink3_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterFileSink3;
typedef struct IWMWriterFileSink3Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterFileSink3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterFileSink3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterFileSink3 * This);
	HRESULT(STDMETHODCALLTYPE * OnHeader) (IWMWriterFileSink3 * This, INSSBuffer * pHeader);
	HRESULT(STDMETHODCALLTYPE * IsRealTime) (IWMWriterFileSink3 * This, BOOL * pfRealTime);
	HRESULT(STDMETHODCALLTYPE * AllocateDataUnit) (IWMWriterFileSink3 * This, DWORD cbDataUnit, INSSBuffer ** ppDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnDataUnit) (IWMWriterFileSink3 * This, INSSBuffer * pDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnEndWriting) (IWMWriterFileSink3 * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IWMWriterFileSink3 * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * Start) (IWMWriterFileSink3 * This, QWORD cnsStartTime);
	HRESULT(STDMETHODCALLTYPE * Stop) (IWMWriterFileSink3 * This, QWORD cnsStopTime);
	HRESULT(STDMETHODCALLTYPE * IsStopped) (IWMWriterFileSink3 * This, BOOL * pfStopped);
	HRESULT(STDMETHODCALLTYPE * GetFileDuration) (IWMWriterFileSink3 * This, QWORD * pcnsDuration);
	HRESULT(STDMETHODCALLTYPE * GetFileSize) (IWMWriterFileSink3 * This, QWORD * pcbFile);
	HRESULT(STDMETHODCALLTYPE * Close) (IWMWriterFileSink3 * This);
	HRESULT(STDMETHODCALLTYPE * IsClosed) (IWMWriterFileSink3 * This, BOOL * pfClosed);
	HRESULT(STDMETHODCALLTYPE * SetAutoIndexing) (IWMWriterFileSink3 * This, BOOL fDoAutoIndexing);
	HRESULT(STDMETHODCALLTYPE * GetAutoIndexing) (IWMWriterFileSink3 * This, BOOL * pfAutoIndexing);
	HRESULT(STDMETHODCALLTYPE * SetControlStream) (IWMWriterFileSink3 * This, WORD wStreamNumber, BOOL fShouldControlStartAndStop);
	HRESULT(STDMETHODCALLTYPE * GetMode) (IWMWriterFileSink3 * This, DWORD * pdwFileSinkMode);
	HRESULT(STDMETHODCALLTYPE * OnDataUnitEx) (IWMWriterFileSink3 * This, WMT_FILESINK_DATA_UNIT * pFileSinkDataUnit);
	HRESULT(STDMETHODCALLTYPE * SetUnbufferedIO) (IWMWriterFileSink3 * This, BOOL fUnbufferedIO, BOOL fRestrictMemUsage);
	HRESULT(STDMETHODCALLTYPE * GetUnbufferedIO) (IWMWriterFileSink3 * This, BOOL * pfUnbufferedIO);
	HRESULT(STDMETHODCALLTYPE * CompleteOperations) (IWMWriterFileSink3 * This);
	END_INTERFACE
} IWMWriterFileSink3Vtbl;
interface IWMWriterFileSink3
{
    CONST_VTBL struct IWMWriterFileSink3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterFileSink3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterFileSink3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterFileSink3_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterFileSink3_OnHeader(This,pHeader)    ( (This)->lpVtbl -> OnHeader(This,pHeader) ) 
#define IWMWriterFileSink3_IsRealTime(This,pfRealTime)    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) ) 
#define IWMWriterFileSink3_AllocateDataUnit(This,cbDataUnit,ppDataUnit)    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) ) 
#define IWMWriterFileSink3_OnDataUnit(This,pDataUnit)    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) ) 
#define IWMWriterFileSink3_OnEndWriting(This)    ( (This)->lpVtbl -> OnEndWriting(This) ) 
#define IWMWriterFileSink3_Open(This,pwszFilename)    ( (This)->lpVtbl -> Open(This,pwszFilename) ) 
#define IWMWriterFileSink3_Start(This,cnsStartTime)    ( (This)->lpVtbl -> Start(This,cnsStartTime) ) 
#define IWMWriterFileSink3_Stop(This,cnsStopTime)    ( (This)->lpVtbl -> Stop(This,cnsStopTime) ) 
#define IWMWriterFileSink3_IsStopped(This,pfStopped)    ( (This)->lpVtbl -> IsStopped(This,pfStopped) ) 
#define IWMWriterFileSink3_GetFileDuration(This,pcnsDuration)    ( (This)->lpVtbl -> GetFileDuration(This,pcnsDuration) ) 
#define IWMWriterFileSink3_GetFileSize(This,pcbFile)    ( (This)->lpVtbl -> GetFileSize(This,pcbFile) ) 
#define IWMWriterFileSink3_Close(This)    ( (This)->lpVtbl -> Close(This) ) 
#define IWMWriterFileSink3_IsClosed(This,pfClosed)    ( (This)->lpVtbl -> IsClosed(This,pfClosed) ) 
#define IWMWriterFileSink3_SetAutoIndexing(This,fDoAutoIndexing)    ( (This)->lpVtbl -> SetAutoIndexing(This,fDoAutoIndexing) ) 
#define IWMWriterFileSink3_GetAutoIndexing(This,pfAutoIndexing)    ( (This)->lpVtbl -> GetAutoIndexing(This,pfAutoIndexing) ) 
#define IWMWriterFileSink3_SetControlStream(This,wStreamNumber,fShouldControlStartAndStop)    ( (This)->lpVtbl -> SetControlStream(This,wStreamNumber,fShouldControlStartAndStop) ) 
#define IWMWriterFileSink3_GetMode(This,pdwFileSinkMode)    ( (This)->lpVtbl -> GetMode(This,pdwFileSinkMode) ) 
#define IWMWriterFileSink3_OnDataUnitEx(This,pFileSinkDataUnit)    ( (This)->lpVtbl -> OnDataUnitEx(This,pFileSinkDataUnit) ) 
#define IWMWriterFileSink3_SetUnbufferedIO(This,fUnbufferedIO,fRestrictMemUsage)    ( (This)->lpVtbl -> SetUnbufferedIO(This,fUnbufferedIO,fRestrictMemUsage) ) 
#define IWMWriterFileSink3_GetUnbufferedIO(This,pfUnbufferedIO)    ( (This)->lpVtbl -> GetUnbufferedIO(This,pfUnbufferedIO) ) 
#define IWMWriterFileSink3_CompleteOperations(This)    ( (This)->lpVtbl -> CompleteOperations(This) ) 
#endif
#endif
#ifndef __IWMWriterNetworkSink_INTERFACE_DEFINED__
#define __IWMWriterNetworkSink_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterNetworkSink;
typedef struct IWMWriterNetworkSinkVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterNetworkSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterNetworkSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterNetworkSink * This);
	HRESULT(STDMETHODCALLTYPE * OnHeader) (IWMWriterNetworkSink * This, INSSBuffer * pHeader);
	HRESULT(STDMETHODCALLTYPE * IsRealTime) (IWMWriterNetworkSink * This, BOOL * pfRealTime);
	HRESULT(STDMETHODCALLTYPE * AllocateDataUnit) (IWMWriterNetworkSink * This, DWORD cbDataUnit, INSSBuffer ** ppDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnDataUnit) (IWMWriterNetworkSink * This, INSSBuffer * pDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnEndWriting) (IWMWriterNetworkSink * This);
	HRESULT(STDMETHODCALLTYPE * SetMaximumClients) (IWMWriterNetworkSink * This, DWORD dwMaxClients);
	HRESULT(STDMETHODCALLTYPE * GetMaximumClients) (IWMWriterNetworkSink * This, DWORD * pdwMaxClients);
	HRESULT(STDMETHODCALLTYPE * SetNetworkProtocol) (IWMWriterNetworkSink * This, WMT_NET_PROTOCOL protocol);
	HRESULT(STDMETHODCALLTYPE * GetNetworkProtocol) (IWMWriterNetworkSink * This, WMT_NET_PROTOCOL * pProtocol);
	HRESULT(STDMETHODCALLTYPE * GetHostURL) (IWMWriterNetworkSink * This, WCHAR * pwszURL, DWORD * pcchURL);
	HRESULT(STDMETHODCALLTYPE * Open) (IWMWriterNetworkSink * This, DWORD * pdwPortNum);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IWMWriterNetworkSink * This);
	HRESULT(STDMETHODCALLTYPE * Close) (IWMWriterNetworkSink * This);
	END_INTERFACE
} IWMWriterNetworkSinkVtbl;
interface IWMWriterNetworkSink
{
    CONST_VTBL struct IWMWriterNetworkSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterNetworkSink_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterNetworkSink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterNetworkSink_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterNetworkSink_OnHeader(This,pHeader)    ( (This)->lpVtbl -> OnHeader(This,pHeader) ) 
#define IWMWriterNetworkSink_IsRealTime(This,pfRealTime)    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) ) 
#define IWMWriterNetworkSink_AllocateDataUnit(This,cbDataUnit,ppDataUnit)    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) ) 
#define IWMWriterNetworkSink_OnDataUnit(This,pDataUnit)    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) ) 
#define IWMWriterNetworkSink_OnEndWriting(This)    ( (This)->lpVtbl -> OnEndWriting(This) ) 
#define IWMWriterNetworkSink_SetMaximumClients(This,dwMaxClients)    ( (This)->lpVtbl -> SetMaximumClients(This,dwMaxClients) ) 
#define IWMWriterNetworkSink_GetMaximumClients(This,pdwMaxClients)    ( (This)->lpVtbl -> GetMaximumClients(This,pdwMaxClients) ) 
#define IWMWriterNetworkSink_SetNetworkProtocol(This,protocol)    ( (This)->lpVtbl -> SetNetworkProtocol(This,protocol) ) 
#define IWMWriterNetworkSink_GetNetworkProtocol(This,pProtocol)    ( (This)->lpVtbl -> GetNetworkProtocol(This,pProtocol) ) 
#define IWMWriterNetworkSink_GetHostURL(This,pwszURL,pcchURL)    ( (This)->lpVtbl -> GetHostURL(This,pwszURL,pcchURL) ) 
#define IWMWriterNetworkSink_Open(This,pdwPortNum)    ( (This)->lpVtbl -> Open(This,pdwPortNum) ) 
#define IWMWriterNetworkSink_Disconnect(This)    ( (This)->lpVtbl -> Disconnect(This) ) 
#define IWMWriterNetworkSink_Close(This)    ( (This)->lpVtbl -> Close(This) ) 
#endif
#endif
#ifndef __IWMClientConnections_INTERFACE_DEFINED__
#define __IWMClientConnections_INTERFACE_DEFINED__ 
extern const IID IID_IWMClientConnections;
typedef struct IWMClientConnectionsVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMClientConnections * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMClientConnections * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMClientConnections * This);
	HRESULT(STDMETHODCALLTYPE * GetClientCount) (IWMClientConnections * This, DWORD * pcClients);
	HRESULT(STDMETHODCALLTYPE * GetClientProperties) (IWMClientConnections * This, DWORD dwClientNum, WM_CLIENT_PROPERTIES * pClientProperties);
	END_INTERFACE
} IWMClientConnectionsVtbl;
interface IWMClientConnections
{
    CONST_VTBL struct IWMClientConnectionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMClientConnections_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMClientConnections_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMClientConnections_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMClientConnections_GetClientCount(This,pcClients)    ( (This)->lpVtbl -> GetClientCount(This,pcClients) ) 
#define IWMClientConnections_GetClientProperties(This,dwClientNum,pClientProperties)    ( (This)->lpVtbl -> GetClientProperties(This,dwClientNum,pClientProperties) ) 
#endif
#endif
#ifndef __IWMClientConnections2_INTERFACE_DEFINED__
#define __IWMClientConnections2_INTERFACE_DEFINED__ 
extern const IID IID_IWMClientConnections2;
typedef struct IWMClientConnections2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMClientConnections2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMClientConnections2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMClientConnections2 * This);
	HRESULT(STDMETHODCALLTYPE * GetClientCount) (IWMClientConnections2 * This, DWORD * pcClients);
	HRESULT(STDMETHODCALLTYPE * GetClientProperties) (IWMClientConnections2 * This, DWORD dwClientNum, WM_CLIENT_PROPERTIES * pClientProperties);
	HRESULT(STDMETHODCALLTYPE * GetClientInfo) (IWMClientConnections2 * This, DWORD dwClientNum, WCHAR * pwszNetworkAddress, DWORD * pcchNetworkAddress, WCHAR * pwszPort, DWORD * pcchPort, WCHAR * pwszDNSName, DWORD * pcchDNSName);
	END_INTERFACE
} IWMClientConnections2Vtbl;
interface IWMClientConnections2
{
    CONST_VTBL struct IWMClientConnections2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMClientConnections2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMClientConnections2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMClientConnections2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMClientConnections2_GetClientCount(This,pcClients)    ( (This)->lpVtbl -> GetClientCount(This,pcClients) ) 
#define IWMClientConnections2_GetClientProperties(This,dwClientNum,pClientProperties)    ( (This)->lpVtbl -> GetClientProperties(This,dwClientNum,pClientProperties) ) 
#define IWMClientConnections2_GetClientInfo(This,dwClientNum,pwszNetworkAddress,pcchNetworkAddress,pwszPort,pcchPort,pwszDNSName,pcchDNSName)    ( (This)->lpVtbl -> GetClientInfo(This,dwClientNum,pwszNetworkAddress,pcchNetworkAddress,pwszPort,pcchPort,pwszDNSName,pcchDNSName) ) 
#endif
#endif
#ifndef __IWMReaderAdvanced_INTERFACE_DEFINED__
#define __IWMReaderAdvanced_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderAdvanced;
typedef struct IWMReaderAdvancedVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderAdvanced * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderAdvanced * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderAdvanced * This);
	HRESULT(STDMETHODCALLTYPE * SetUserProvidedClock) (IWMReaderAdvanced * This, BOOL fUserClock);
	HRESULT(STDMETHODCALLTYPE * GetUserProvidedClock) (IWMReaderAdvanced * This, BOOL * pfUserClock);
	HRESULT(STDMETHODCALLTYPE * DeliverTime) (IWMReaderAdvanced * This, QWORD cnsTime);
	HRESULT(STDMETHODCALLTYPE * SetManualStreamSelection) (IWMReaderAdvanced * This, BOOL fSelection);
	HRESULT(STDMETHODCALLTYPE * GetManualStreamSelection) (IWMReaderAdvanced * This, BOOL * pfSelection);
	HRESULT(STDMETHODCALLTYPE * SetStreamsSelected) (IWMReaderAdvanced * This, WORD cStreamCount, WORD * pwStreamNumbers, WMT_STREAM_SELECTION * pSelections);
	HRESULT(STDMETHODCALLTYPE * GetStreamSelected) (IWMReaderAdvanced * This, WORD wStreamNum, WMT_STREAM_SELECTION * pSelection);
	HRESULT(STDMETHODCALLTYPE * SetReceiveSelectionCallbacks) (IWMReaderAdvanced * This, BOOL fGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * GetReceiveSelectionCallbacks) (IWMReaderAdvanced * This, BOOL * pfGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * SetReceiveStreamSamples) (IWMReaderAdvanced * This, WORD wStreamNum, BOOL fReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * GetReceiveStreamSamples) (IWMReaderAdvanced * This, WORD wStreamNum, BOOL * pfReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForOutput) (IWMReaderAdvanced * This, DWORD dwOutputNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForOutput) (IWMReaderAdvanced * This, DWORD dwOutputNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForStream) (IWMReaderAdvanced * This, WORD wStreamNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForStream) (IWMReaderAdvanced * This, WORD dwSreamNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (IWMReaderAdvanced * This, WM_READER_STATISTICS * pStatistics);
	HRESULT(STDMETHODCALLTYPE * SetClientInfo) (IWMReaderAdvanced * This, WM_READER_CLIENTINFO * pClientInfo);
	HRESULT(STDMETHODCALLTYPE * GetMaxOutputSampleSize) (IWMReaderAdvanced * This, DWORD dwOutput, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * GetMaxStreamSampleSize) (IWMReaderAdvanced * This, WORD wStream, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * NotifyLateDelivery) (IWMReaderAdvanced * This, QWORD cnsLateness);
	END_INTERFACE
} IWMReaderAdvancedVtbl;
interface IWMReaderAdvanced
{
    CONST_VTBL struct IWMReaderAdvancedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderAdvanced_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderAdvanced_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderAdvanced_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderAdvanced_SetUserProvidedClock(This,fUserClock)    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) ) 
#define IWMReaderAdvanced_GetUserProvidedClock(This,pfUserClock)    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) ) 
#define IWMReaderAdvanced_DeliverTime(This,cnsTime)    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) ) 
#define IWMReaderAdvanced_SetManualStreamSelection(This,fSelection)    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) ) 
#define IWMReaderAdvanced_GetManualStreamSelection(This,pfSelection)    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) ) 
#define IWMReaderAdvanced_SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections)    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) ) 
#define IWMReaderAdvanced_GetStreamSelected(This,wStreamNum,pSelection)    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) ) 
#define IWMReaderAdvanced_SetReceiveSelectionCallbacks(This,fGetCallbacks)    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) ) 
#define IWMReaderAdvanced_GetReceiveSelectionCallbacks(This,pfGetCallbacks)    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) ) 
#define IWMReaderAdvanced_SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples)    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) ) 
#define IWMReaderAdvanced_GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples)    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) ) 
#define IWMReaderAdvanced_SetAllocateForOutput(This,dwOutputNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) ) 
#define IWMReaderAdvanced_GetAllocateForOutput(This,dwOutputNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) ) 
#define IWMReaderAdvanced_SetAllocateForStream(This,wStreamNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) ) 
#define IWMReaderAdvanced_GetAllocateForStream(This,dwSreamNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) ) 
#define IWMReaderAdvanced_GetStatistics(This,pStatistics)    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) ) 
#define IWMReaderAdvanced_SetClientInfo(This,pClientInfo)    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) ) 
#define IWMReaderAdvanced_GetMaxOutputSampleSize(This,dwOutput,pcbMax)    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) ) 
#define IWMReaderAdvanced_GetMaxStreamSampleSize(This,wStream,pcbMax)    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) ) 
#define IWMReaderAdvanced_NotifyLateDelivery(This,cnsLateness)    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) ) 
#endif
#endif
#ifndef __IWMReaderAdvanced2_INTERFACE_DEFINED__
#define __IWMReaderAdvanced2_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderAdvanced2;
typedef struct IWMReaderAdvanced2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderAdvanced2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderAdvanced2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderAdvanced2 * This);
	HRESULT(STDMETHODCALLTYPE * SetUserProvidedClock) (IWMReaderAdvanced2 * This, BOOL fUserClock);
	HRESULT(STDMETHODCALLTYPE * GetUserProvidedClock) (IWMReaderAdvanced2 * This, BOOL * pfUserClock);
	HRESULT(STDMETHODCALLTYPE * DeliverTime) (IWMReaderAdvanced2 * This, QWORD cnsTime);
	HRESULT(STDMETHODCALLTYPE * SetManualStreamSelection) (IWMReaderAdvanced2 * This, BOOL fSelection);
	HRESULT(STDMETHODCALLTYPE * GetManualStreamSelection) (IWMReaderAdvanced2 * This, BOOL * pfSelection);
	HRESULT(STDMETHODCALLTYPE * SetStreamsSelected) (IWMReaderAdvanced2 * This, WORD cStreamCount, WORD * pwStreamNumbers, WMT_STREAM_SELECTION * pSelections);
	HRESULT(STDMETHODCALLTYPE * GetStreamSelected) (IWMReaderAdvanced2 * This, WORD wStreamNum, WMT_STREAM_SELECTION * pSelection);
	HRESULT(STDMETHODCALLTYPE * SetReceiveSelectionCallbacks) (IWMReaderAdvanced2 * This, BOOL fGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * GetReceiveSelectionCallbacks) (IWMReaderAdvanced2 * This, BOOL * pfGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * SetReceiveStreamSamples) (IWMReaderAdvanced2 * This, WORD wStreamNum, BOOL fReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * GetReceiveStreamSamples) (IWMReaderAdvanced2 * This, WORD wStreamNum, BOOL * pfReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForOutput) (IWMReaderAdvanced2 * This, DWORD dwOutputNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForOutput) (IWMReaderAdvanced2 * This, DWORD dwOutputNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForStream) (IWMReaderAdvanced2 * This, WORD wStreamNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForStream) (IWMReaderAdvanced2 * This, WORD dwSreamNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (IWMReaderAdvanced2 * This, WM_READER_STATISTICS * pStatistics);
	HRESULT(STDMETHODCALLTYPE * SetClientInfo) (IWMReaderAdvanced2 * This, WM_READER_CLIENTINFO * pClientInfo);
	HRESULT(STDMETHODCALLTYPE * GetMaxOutputSampleSize) (IWMReaderAdvanced2 * This, DWORD dwOutput, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * GetMaxStreamSampleSize) (IWMReaderAdvanced2 * This, WORD wStream, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * NotifyLateDelivery) (IWMReaderAdvanced2 * This, QWORD cnsLateness);
	HRESULT(STDMETHODCALLTYPE * SetPlayMode) (IWMReaderAdvanced2 * This, WMT_PLAY_MODE Mode);
	HRESULT(STDMETHODCALLTYPE * GetPlayMode) (IWMReaderAdvanced2 * This, WMT_PLAY_MODE * pMode);
	HRESULT(STDMETHODCALLTYPE * GetBufferProgress) (IWMReaderAdvanced2 * This, DWORD * pdwPercent, QWORD * pcnsBuffering);
	HRESULT(STDMETHODCALLTYPE * GetDownloadProgress) (IWMReaderAdvanced2 * This, DWORD * pdwPercent, QWORD * pqwBytesDownloaded, QWORD * pcnsDownload);
	HRESULT(STDMETHODCALLTYPE * GetSaveAsProgress) (IWMReaderAdvanced2 * This, DWORD * pdwPercent);
	HRESULT(STDMETHODCALLTYPE * SaveFileAs) (IWMReaderAdvanced2 * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * GetProtocolName) (IWMReaderAdvanced2 * This, WCHAR * pwszProtocol, DWORD * pcchProtocol);
	HRESULT(STDMETHODCALLTYPE * StartAtMarker) (IWMReaderAdvanced2 * This, WORD wMarkerIndex, QWORD cnsDuration, float fRate, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * GetOutputSetting) (IWMReaderAdvanced2 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetOutputSetting) (IWMReaderAdvanced2 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * Preroll) (IWMReaderAdvanced2 * This, QWORD cnsStart, QWORD cnsDuration, float fRate);
	HRESULT(STDMETHODCALLTYPE * SetLogClientID) (IWMReaderAdvanced2 * This, BOOL fLogClientID);
	HRESULT(STDMETHODCALLTYPE * GetLogClientID) (IWMReaderAdvanced2 * This, BOOL * pfLogClientID);
	HRESULT(STDMETHODCALLTYPE * StopBuffering) (IWMReaderAdvanced2 * This);
	HRESULT(STDMETHODCALLTYPE * OpenStream) (IWMReaderAdvanced2 * This, IStream * pStream, IWMReaderCallback * pCallback, void *pvContext);
	END_INTERFACE
} IWMReaderAdvanced2Vtbl;
interface IWMReaderAdvanced2
{
    CONST_VTBL struct IWMReaderAdvanced2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderAdvanced2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderAdvanced2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderAdvanced2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderAdvanced2_SetUserProvidedClock(This,fUserClock)    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) ) 
#define IWMReaderAdvanced2_GetUserProvidedClock(This,pfUserClock)    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) ) 
#define IWMReaderAdvanced2_DeliverTime(This,cnsTime)    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) ) 
#define IWMReaderAdvanced2_SetManualStreamSelection(This,fSelection)    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) ) 
#define IWMReaderAdvanced2_GetManualStreamSelection(This,pfSelection)    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) ) 
#define IWMReaderAdvanced2_SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections)    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) ) 
#define IWMReaderAdvanced2_GetStreamSelected(This,wStreamNum,pSelection)    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) ) 
#define IWMReaderAdvanced2_SetReceiveSelectionCallbacks(This,fGetCallbacks)    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) ) 
#define IWMReaderAdvanced2_GetReceiveSelectionCallbacks(This,pfGetCallbacks)    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) ) 
#define IWMReaderAdvanced2_SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples)    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) ) 
#define IWMReaderAdvanced2_GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples)    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) ) 
#define IWMReaderAdvanced2_SetAllocateForOutput(This,dwOutputNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) ) 
#define IWMReaderAdvanced2_GetAllocateForOutput(This,dwOutputNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) ) 
#define IWMReaderAdvanced2_SetAllocateForStream(This,wStreamNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) ) 
#define IWMReaderAdvanced2_GetAllocateForStream(This,dwSreamNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) ) 
#define IWMReaderAdvanced2_GetStatistics(This,pStatistics)    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) ) 
#define IWMReaderAdvanced2_SetClientInfo(This,pClientInfo)    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) ) 
#define IWMReaderAdvanced2_GetMaxOutputSampleSize(This,dwOutput,pcbMax)    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) ) 
#define IWMReaderAdvanced2_GetMaxStreamSampleSize(This,wStream,pcbMax)    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) ) 
#define IWMReaderAdvanced2_NotifyLateDelivery(This,cnsLateness)    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) ) 
#define IWMReaderAdvanced2_SetPlayMode(This,Mode)    ( (This)->lpVtbl -> SetPlayMode(This,Mode) ) 
#define IWMReaderAdvanced2_GetPlayMode(This,pMode)    ( (This)->lpVtbl -> GetPlayMode(This,pMode) ) 
#define IWMReaderAdvanced2_GetBufferProgress(This,pdwPercent,pcnsBuffering)    ( (This)->lpVtbl -> GetBufferProgress(This,pdwPercent,pcnsBuffering) ) 
#define IWMReaderAdvanced2_GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload)    ( (This)->lpVtbl -> GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload) ) 
#define IWMReaderAdvanced2_GetSaveAsProgress(This,pdwPercent)    ( (This)->lpVtbl -> GetSaveAsProgress(This,pdwPercent) ) 
#define IWMReaderAdvanced2_SaveFileAs(This,pwszFilename)    ( (This)->lpVtbl -> SaveFileAs(This,pwszFilename) ) 
#define IWMReaderAdvanced2_GetProtocolName(This,pwszProtocol,pcchProtocol)    ( (This)->lpVtbl -> GetProtocolName(This,pwszProtocol,pcchProtocol) ) 
#define IWMReaderAdvanced2_StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext)    ( (This)->lpVtbl -> StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext) ) 
#define IWMReaderAdvanced2_GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) ) 
#define IWMReaderAdvanced2_SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) ) 
#define IWMReaderAdvanced2_Preroll(This,cnsStart,cnsDuration,fRate)    ( (This)->lpVtbl -> Preroll(This,cnsStart,cnsDuration,fRate) ) 
#define IWMReaderAdvanced2_SetLogClientID(This,fLogClientID)    ( (This)->lpVtbl -> SetLogClientID(This,fLogClientID) ) 
#define IWMReaderAdvanced2_GetLogClientID(This,pfLogClientID)    ( (This)->lpVtbl -> GetLogClientID(This,pfLogClientID) ) 
#define IWMReaderAdvanced2_StopBuffering(This)    ( (This)->lpVtbl -> StopBuffering(This) ) 
#define IWMReaderAdvanced2_OpenStream(This,pStream,pCallback,pvContext)    ( (This)->lpVtbl -> OpenStream(This,pStream,pCallback,pvContext) ) 
#endif
#endif
#ifndef __IWMReaderAdvanced3_INTERFACE_DEFINED__
#define __IWMReaderAdvanced3_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderAdvanced3;
typedef struct IWMReaderAdvanced3Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderAdvanced3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderAdvanced3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderAdvanced3 * This);
	HRESULT(STDMETHODCALLTYPE * SetUserProvidedClock) (IWMReaderAdvanced3 * This, BOOL fUserClock);
	HRESULT(STDMETHODCALLTYPE * GetUserProvidedClock) (IWMReaderAdvanced3 * This, BOOL * pfUserClock);
	HRESULT(STDMETHODCALLTYPE * DeliverTime) (IWMReaderAdvanced3 * This, QWORD cnsTime);
	HRESULT(STDMETHODCALLTYPE * SetManualStreamSelection) (IWMReaderAdvanced3 * This, BOOL fSelection);
	HRESULT(STDMETHODCALLTYPE * GetManualStreamSelection) (IWMReaderAdvanced3 * This, BOOL * pfSelection);
	HRESULT(STDMETHODCALLTYPE * SetStreamsSelected) (IWMReaderAdvanced3 * This, WORD cStreamCount, WORD * pwStreamNumbers, WMT_STREAM_SELECTION * pSelections);
	HRESULT(STDMETHODCALLTYPE * GetStreamSelected) (IWMReaderAdvanced3 * This, WORD wStreamNum, WMT_STREAM_SELECTION * pSelection);
	HRESULT(STDMETHODCALLTYPE * SetReceiveSelectionCallbacks) (IWMReaderAdvanced3 * This, BOOL fGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * GetReceiveSelectionCallbacks) (IWMReaderAdvanced3 * This, BOOL * pfGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * SetReceiveStreamSamples) (IWMReaderAdvanced3 * This, WORD wStreamNum, BOOL fReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * GetReceiveStreamSamples) (IWMReaderAdvanced3 * This, WORD wStreamNum, BOOL * pfReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForOutput) (IWMReaderAdvanced3 * This, DWORD dwOutputNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForOutput) (IWMReaderAdvanced3 * This, DWORD dwOutputNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForStream) (IWMReaderAdvanced3 * This, WORD wStreamNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForStream) (IWMReaderAdvanced3 * This, WORD dwSreamNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (IWMReaderAdvanced3 * This, WM_READER_STATISTICS * pStatistics);
	HRESULT(STDMETHODCALLTYPE * SetClientInfo) (IWMReaderAdvanced3 * This, WM_READER_CLIENTINFO * pClientInfo);
	HRESULT(STDMETHODCALLTYPE * GetMaxOutputSampleSize) (IWMReaderAdvanced3 * This, DWORD dwOutput, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * GetMaxStreamSampleSize) (IWMReaderAdvanced3 * This, WORD wStream, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * NotifyLateDelivery) (IWMReaderAdvanced3 * This, QWORD cnsLateness);
	HRESULT(STDMETHODCALLTYPE * SetPlayMode) (IWMReaderAdvanced3 * This, WMT_PLAY_MODE Mode);
	HRESULT(STDMETHODCALLTYPE * GetPlayMode) (IWMReaderAdvanced3 * This, WMT_PLAY_MODE * pMode);
	HRESULT(STDMETHODCALLTYPE * GetBufferProgress) (IWMReaderAdvanced3 * This, DWORD * pdwPercent, QWORD * pcnsBuffering);
	HRESULT(STDMETHODCALLTYPE * GetDownloadProgress) (IWMReaderAdvanced3 * This, DWORD * pdwPercent, QWORD * pqwBytesDownloaded, QWORD * pcnsDownload);
	HRESULT(STDMETHODCALLTYPE * GetSaveAsProgress) (IWMReaderAdvanced3 * This, DWORD * pdwPercent);
	HRESULT(STDMETHODCALLTYPE * SaveFileAs) (IWMReaderAdvanced3 * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * GetProtocolName) (IWMReaderAdvanced3 * This, WCHAR * pwszProtocol, DWORD * pcchProtocol);
	HRESULT(STDMETHODCALLTYPE * StartAtMarker) (IWMReaderAdvanced3 * This, WORD wMarkerIndex, QWORD cnsDuration, float fRate, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * GetOutputSetting) (IWMReaderAdvanced3 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetOutputSetting) (IWMReaderAdvanced3 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * Preroll) (IWMReaderAdvanced3 * This, QWORD cnsStart, QWORD cnsDuration, float fRate);
	HRESULT(STDMETHODCALLTYPE * SetLogClientID) (IWMReaderAdvanced3 * This, BOOL fLogClientID);
	HRESULT(STDMETHODCALLTYPE * GetLogClientID) (IWMReaderAdvanced3 * This, BOOL * pfLogClientID);
	HRESULT(STDMETHODCALLTYPE * StopBuffering) (IWMReaderAdvanced3 * This);
	HRESULT(STDMETHODCALLTYPE * OpenStream) (IWMReaderAdvanced3 * This, IStream * pStream, IWMReaderCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * StopNetStreaming) (IWMReaderAdvanced3 * This);
	HRESULT(STDMETHODCALLTYPE * StartAtPosition) (IWMReaderAdvanced3 * This, WORD wStreamNum, void *pvOffsetStart, void *pvDuration, WMT_OFFSET_FORMAT dwOffsetFormat, float fRate, void *pvContext);
	END_INTERFACE
} IWMReaderAdvanced3Vtbl;
interface IWMReaderAdvanced3
{
    CONST_VTBL struct IWMReaderAdvanced3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderAdvanced3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderAdvanced3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderAdvanced3_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderAdvanced3_SetUserProvidedClock(This,fUserClock)    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) ) 
#define IWMReaderAdvanced3_GetUserProvidedClock(This,pfUserClock)    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) ) 
#define IWMReaderAdvanced3_DeliverTime(This,cnsTime)    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) ) 
#define IWMReaderAdvanced3_SetManualStreamSelection(This,fSelection)    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) ) 
#define IWMReaderAdvanced3_GetManualStreamSelection(This,pfSelection)    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) ) 
#define IWMReaderAdvanced3_SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections)    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) ) 
#define IWMReaderAdvanced3_GetStreamSelected(This,wStreamNum,pSelection)    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) ) 
#define IWMReaderAdvanced3_SetReceiveSelectionCallbacks(This,fGetCallbacks)    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) ) 
#define IWMReaderAdvanced3_GetReceiveSelectionCallbacks(This,pfGetCallbacks)    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) ) 
#define IWMReaderAdvanced3_SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples)    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) ) 
#define IWMReaderAdvanced3_GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples)    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) ) 
#define IWMReaderAdvanced3_SetAllocateForOutput(This,dwOutputNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) ) 
#define IWMReaderAdvanced3_GetAllocateForOutput(This,dwOutputNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) ) 
#define IWMReaderAdvanced3_SetAllocateForStream(This,wStreamNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) ) 
#define IWMReaderAdvanced3_GetAllocateForStream(This,dwSreamNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) ) 
#define IWMReaderAdvanced3_GetStatistics(This,pStatistics)    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) ) 
#define IWMReaderAdvanced3_SetClientInfo(This,pClientInfo)    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) ) 
#define IWMReaderAdvanced3_GetMaxOutputSampleSize(This,dwOutput,pcbMax)    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) ) 
#define IWMReaderAdvanced3_GetMaxStreamSampleSize(This,wStream,pcbMax)    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) ) 
#define IWMReaderAdvanced3_NotifyLateDelivery(This,cnsLateness)    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) ) 
#define IWMReaderAdvanced3_SetPlayMode(This,Mode)    ( (This)->lpVtbl -> SetPlayMode(This,Mode) ) 
#define IWMReaderAdvanced3_GetPlayMode(This,pMode)    ( (This)->lpVtbl -> GetPlayMode(This,pMode) ) 
#define IWMReaderAdvanced3_GetBufferProgress(This,pdwPercent,pcnsBuffering)    ( (This)->lpVtbl -> GetBufferProgress(This,pdwPercent,pcnsBuffering) ) 
#define IWMReaderAdvanced3_GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload)    ( (This)->lpVtbl -> GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload) ) 
#define IWMReaderAdvanced3_GetSaveAsProgress(This,pdwPercent)    ( (This)->lpVtbl -> GetSaveAsProgress(This,pdwPercent) ) 
#define IWMReaderAdvanced3_SaveFileAs(This,pwszFilename)    ( (This)->lpVtbl -> SaveFileAs(This,pwszFilename) ) 
#define IWMReaderAdvanced3_GetProtocolName(This,pwszProtocol,pcchProtocol)    ( (This)->lpVtbl -> GetProtocolName(This,pwszProtocol,pcchProtocol) ) 
#define IWMReaderAdvanced3_StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext)    ( (This)->lpVtbl -> StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext) ) 
#define IWMReaderAdvanced3_GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) ) 
#define IWMReaderAdvanced3_SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) ) 
#define IWMReaderAdvanced3_Preroll(This,cnsStart,cnsDuration,fRate)    ( (This)->lpVtbl -> Preroll(This,cnsStart,cnsDuration,fRate) ) 
#define IWMReaderAdvanced3_SetLogClientID(This,fLogClientID)    ( (This)->lpVtbl -> SetLogClientID(This,fLogClientID) ) 
#define IWMReaderAdvanced3_GetLogClientID(This,pfLogClientID)    ( (This)->lpVtbl -> GetLogClientID(This,pfLogClientID) ) 
#define IWMReaderAdvanced3_StopBuffering(This)    ( (This)->lpVtbl -> StopBuffering(This) ) 
#define IWMReaderAdvanced3_OpenStream(This,pStream,pCallback,pvContext)    ( (This)->lpVtbl -> OpenStream(This,pStream,pCallback,pvContext) ) 
#define IWMReaderAdvanced3_StopNetStreaming(This)    ( (This)->lpVtbl -> StopNetStreaming(This) ) 
#define IWMReaderAdvanced3_StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext)    ( (This)->lpVtbl -> StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext) ) 
#endif
#endif
#ifndef __IWMReaderAdvanced4_INTERFACE_DEFINED__
#define __IWMReaderAdvanced4_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderAdvanced4;
typedef struct IWMReaderAdvanced4Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderAdvanced4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderAdvanced4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderAdvanced4 * This);
	HRESULT(STDMETHODCALLTYPE * SetUserProvidedClock) (IWMReaderAdvanced4 * This, BOOL fUserClock);
	HRESULT(STDMETHODCALLTYPE * GetUserProvidedClock) (IWMReaderAdvanced4 * This, BOOL * pfUserClock);
	HRESULT(STDMETHODCALLTYPE * DeliverTime) (IWMReaderAdvanced4 * This, QWORD cnsTime);
	HRESULT(STDMETHODCALLTYPE * SetManualStreamSelection) (IWMReaderAdvanced4 * This, BOOL fSelection);
	HRESULT(STDMETHODCALLTYPE * GetManualStreamSelection) (IWMReaderAdvanced4 * This, BOOL * pfSelection);
	HRESULT(STDMETHODCALLTYPE * SetStreamsSelected) (IWMReaderAdvanced4 * This, WORD cStreamCount, WORD * pwStreamNumbers, WMT_STREAM_SELECTION * pSelections);
	HRESULT(STDMETHODCALLTYPE * GetStreamSelected) (IWMReaderAdvanced4 * This, WORD wStreamNum, WMT_STREAM_SELECTION * pSelection);
	HRESULT(STDMETHODCALLTYPE * SetReceiveSelectionCallbacks) (IWMReaderAdvanced4 * This, BOOL fGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * GetReceiveSelectionCallbacks) (IWMReaderAdvanced4 * This, BOOL * pfGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * SetReceiveStreamSamples) (IWMReaderAdvanced4 * This, WORD wStreamNum, BOOL fReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * GetReceiveStreamSamples) (IWMReaderAdvanced4 * This, WORD wStreamNum, BOOL * pfReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForOutput) (IWMReaderAdvanced4 * This, DWORD dwOutputNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForOutput) (IWMReaderAdvanced4 * This, DWORD dwOutputNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForStream) (IWMReaderAdvanced4 * This, WORD wStreamNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForStream) (IWMReaderAdvanced4 * This, WORD dwSreamNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (IWMReaderAdvanced4 * This, WM_READER_STATISTICS * pStatistics);
	HRESULT(STDMETHODCALLTYPE * SetClientInfo) (IWMReaderAdvanced4 * This, WM_READER_CLIENTINFO * pClientInfo);
	HRESULT(STDMETHODCALLTYPE * GetMaxOutputSampleSize) (IWMReaderAdvanced4 * This, DWORD dwOutput, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * GetMaxStreamSampleSize) (IWMReaderAdvanced4 * This, WORD wStream, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * NotifyLateDelivery) (IWMReaderAdvanced4 * This, QWORD cnsLateness);
	HRESULT(STDMETHODCALLTYPE * SetPlayMode) (IWMReaderAdvanced4 * This, WMT_PLAY_MODE Mode);
	HRESULT(STDMETHODCALLTYPE * GetPlayMode) (IWMReaderAdvanced4 * This, WMT_PLAY_MODE * pMode);
	HRESULT(STDMETHODCALLTYPE * GetBufferProgress) (IWMReaderAdvanced4 * This, DWORD * pdwPercent, QWORD * pcnsBuffering);
	HRESULT(STDMETHODCALLTYPE * GetDownloadProgress) (IWMReaderAdvanced4 * This, DWORD * pdwPercent, QWORD * pqwBytesDownloaded, QWORD * pcnsDownload);
	HRESULT(STDMETHODCALLTYPE * GetSaveAsProgress) (IWMReaderAdvanced4 * This, DWORD * pdwPercent);
	HRESULT(STDMETHODCALLTYPE * SaveFileAs) (IWMReaderAdvanced4 * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * GetProtocolName) (IWMReaderAdvanced4 * This, WCHAR * pwszProtocol, DWORD * pcchProtocol);
	HRESULT(STDMETHODCALLTYPE * StartAtMarker) (IWMReaderAdvanced4 * This, WORD wMarkerIndex, QWORD cnsDuration, float fRate, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * GetOutputSetting) (IWMReaderAdvanced4 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetOutputSetting) (IWMReaderAdvanced4 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * Preroll) (IWMReaderAdvanced4 * This, QWORD cnsStart, QWORD cnsDuration, float fRate);
	HRESULT(STDMETHODCALLTYPE * SetLogClientID) (IWMReaderAdvanced4 * This, BOOL fLogClientID);
	HRESULT(STDMETHODCALLTYPE * GetLogClientID) (IWMReaderAdvanced4 * This, BOOL * pfLogClientID);
	HRESULT(STDMETHODCALLTYPE * StopBuffering) (IWMReaderAdvanced4 * This);
	HRESULT(STDMETHODCALLTYPE * OpenStream) (IWMReaderAdvanced4 * This, IStream * pStream, IWMReaderCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * StopNetStreaming) (IWMReaderAdvanced4 * This);
	HRESULT(STDMETHODCALLTYPE * StartAtPosition) (IWMReaderAdvanced4 * This, WORD wStreamNum, void *pvOffsetStart, void *pvDuration, WMT_OFFSET_FORMAT dwOffsetFormat, float fRate, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * GetLanguageCount) (IWMReaderAdvanced4 * This, DWORD dwOutputNum, WORD * pwLanguageCount);
	HRESULT(STDMETHODCALLTYPE * GetLanguage) (IWMReaderAdvanced4 * This, DWORD dwOutputNum, WORD wLanguage, WCHAR * pwszLanguageString, WORD * pcchLanguageStringLength);
	HRESULT(STDMETHODCALLTYPE * GetMaxSpeedFactor) (IWMReaderAdvanced4 * This, double *pdblFactor);
	HRESULT(STDMETHODCALLTYPE * IsUsingFastCache) (IWMReaderAdvanced4 * This, BOOL * pfUsingFastCache);
	HRESULT(STDMETHODCALLTYPE * AddLogParam) (IWMReaderAdvanced4 * This, LPCWSTR wszNameSpace, LPCWSTR wszName, LPCWSTR wszValue);
	HRESULT(STDMETHODCALLTYPE * SendLogParams) (IWMReaderAdvanced4 * This);
	HRESULT(STDMETHODCALLTYPE * CanSaveFileAs) (IWMReaderAdvanced4 * This, BOOL * pfCanSave);
	HRESULT(STDMETHODCALLTYPE * CancelSaveFileAs) (IWMReaderAdvanced4 * This);
	HRESULT(STDMETHODCALLTYPE * GetURL) (IWMReaderAdvanced4 * This, WCHAR * pwszURL, DWORD * pcchURL);
	END_INTERFACE
} IWMReaderAdvanced4Vtbl;
interface IWMReaderAdvanced4
{
    CONST_VTBL struct IWMReaderAdvanced4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderAdvanced4_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderAdvanced4_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderAdvanced4_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderAdvanced4_SetUserProvidedClock(This,fUserClock)    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) ) 
#define IWMReaderAdvanced4_GetUserProvidedClock(This,pfUserClock)    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) ) 
#define IWMReaderAdvanced4_DeliverTime(This,cnsTime)    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) ) 
#define IWMReaderAdvanced4_SetManualStreamSelection(This,fSelection)    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) ) 
#define IWMReaderAdvanced4_GetManualStreamSelection(This,pfSelection)    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) ) 
#define IWMReaderAdvanced4_SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections)    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) ) 
#define IWMReaderAdvanced4_GetStreamSelected(This,wStreamNum,pSelection)    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) ) 
#define IWMReaderAdvanced4_SetReceiveSelectionCallbacks(This,fGetCallbacks)    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) ) 
#define IWMReaderAdvanced4_GetReceiveSelectionCallbacks(This,pfGetCallbacks)    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) ) 
#define IWMReaderAdvanced4_SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples)    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) ) 
#define IWMReaderAdvanced4_GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples)    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) ) 
#define IWMReaderAdvanced4_SetAllocateForOutput(This,dwOutputNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) ) 
#define IWMReaderAdvanced4_GetAllocateForOutput(This,dwOutputNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) ) 
#define IWMReaderAdvanced4_SetAllocateForStream(This,wStreamNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) ) 
#define IWMReaderAdvanced4_GetAllocateForStream(This,dwSreamNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) ) 
#define IWMReaderAdvanced4_GetStatistics(This,pStatistics)    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) ) 
#define IWMReaderAdvanced4_SetClientInfo(This,pClientInfo)    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) ) 
#define IWMReaderAdvanced4_GetMaxOutputSampleSize(This,dwOutput,pcbMax)    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) ) 
#define IWMReaderAdvanced4_GetMaxStreamSampleSize(This,wStream,pcbMax)    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) ) 
#define IWMReaderAdvanced4_NotifyLateDelivery(This,cnsLateness)    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) ) 
#define IWMReaderAdvanced4_SetPlayMode(This,Mode)    ( (This)->lpVtbl -> SetPlayMode(This,Mode) ) 
#define IWMReaderAdvanced4_GetPlayMode(This,pMode)    ( (This)->lpVtbl -> GetPlayMode(This,pMode) ) 
#define IWMReaderAdvanced4_GetBufferProgress(This,pdwPercent,pcnsBuffering)    ( (This)->lpVtbl -> GetBufferProgress(This,pdwPercent,pcnsBuffering) ) 
#define IWMReaderAdvanced4_GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload)    ( (This)->lpVtbl -> GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload) ) 
#define IWMReaderAdvanced4_GetSaveAsProgress(This,pdwPercent)    ( (This)->lpVtbl -> GetSaveAsProgress(This,pdwPercent) ) 
#define IWMReaderAdvanced4_SaveFileAs(This,pwszFilename)    ( (This)->lpVtbl -> SaveFileAs(This,pwszFilename) ) 
#define IWMReaderAdvanced4_GetProtocolName(This,pwszProtocol,pcchProtocol)    ( (This)->lpVtbl -> GetProtocolName(This,pwszProtocol,pcchProtocol) ) 
#define IWMReaderAdvanced4_StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext)    ( (This)->lpVtbl -> StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext) ) 
#define IWMReaderAdvanced4_GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) ) 
#define IWMReaderAdvanced4_SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) ) 
#define IWMReaderAdvanced4_Preroll(This,cnsStart,cnsDuration,fRate)    ( (This)->lpVtbl -> Preroll(This,cnsStart,cnsDuration,fRate) ) 
#define IWMReaderAdvanced4_SetLogClientID(This,fLogClientID)    ( (This)->lpVtbl -> SetLogClientID(This,fLogClientID) ) 
#define IWMReaderAdvanced4_GetLogClientID(This,pfLogClientID)    ( (This)->lpVtbl -> GetLogClientID(This,pfLogClientID) ) 
#define IWMReaderAdvanced4_StopBuffering(This)    ( (This)->lpVtbl -> StopBuffering(This) ) 
#define IWMReaderAdvanced4_OpenStream(This,pStream,pCallback,pvContext)    ( (This)->lpVtbl -> OpenStream(This,pStream,pCallback,pvContext) ) 
#define IWMReaderAdvanced4_StopNetStreaming(This)    ( (This)->lpVtbl -> StopNetStreaming(This) ) 
#define IWMReaderAdvanced4_StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext)    ( (This)->lpVtbl -> StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext) ) 
#define IWMReaderAdvanced4_GetLanguageCount(This,dwOutputNum,pwLanguageCount)    ( (This)->lpVtbl -> GetLanguageCount(This,dwOutputNum,pwLanguageCount) ) 
#define IWMReaderAdvanced4_GetLanguage(This,dwOutputNum,wLanguage,pwszLanguageString,pcchLanguageStringLength)    ( (This)->lpVtbl -> GetLanguage(This,dwOutputNum,wLanguage,pwszLanguageString,pcchLanguageStringLength) ) 
#define IWMReaderAdvanced4_GetMaxSpeedFactor(This,pdblFactor)    ( (This)->lpVtbl -> GetMaxSpeedFactor(This,pdblFactor) ) 
#define IWMReaderAdvanced4_IsUsingFastCache(This,pfUsingFastCache)    ( (This)->lpVtbl -> IsUsingFastCache(This,pfUsingFastCache) ) 
#define IWMReaderAdvanced4_AddLogParam(This,wszNameSpace,wszName,wszValue)    ( (This)->lpVtbl -> AddLogParam(This,wszNameSpace,wszName,wszValue) ) 
#define IWMReaderAdvanced4_SendLogParams(This)    ( (This)->lpVtbl -> SendLogParams(This) ) 
#define IWMReaderAdvanced4_CanSaveFileAs(This,pfCanSave)    ( (This)->lpVtbl -> CanSaveFileAs(This,pfCanSave) ) 
#define IWMReaderAdvanced4_CancelSaveFileAs(This)    ( (This)->lpVtbl -> CancelSaveFileAs(This) ) 
#define IWMReaderAdvanced4_GetURL(This,pwszURL,pcchURL)    ( (This)->lpVtbl -> GetURL(This,pwszURL,pcchURL) ) 
#endif
#endif
#ifndef __IWMReaderAdvanced5_INTERFACE_DEFINED__
#define __IWMReaderAdvanced5_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderAdvanced5;
typedef struct IWMReaderAdvanced5Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderAdvanced5 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderAdvanced5 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderAdvanced5 * This);
	HRESULT(STDMETHODCALLTYPE * SetUserProvidedClock) (IWMReaderAdvanced5 * This, BOOL fUserClock);
	HRESULT(STDMETHODCALLTYPE * GetUserProvidedClock) (IWMReaderAdvanced5 * This, BOOL * pfUserClock);
	HRESULT(STDMETHODCALLTYPE * DeliverTime) (IWMReaderAdvanced5 * This, QWORD cnsTime);
	HRESULT(STDMETHODCALLTYPE * SetManualStreamSelection) (IWMReaderAdvanced5 * This, BOOL fSelection);
	HRESULT(STDMETHODCALLTYPE * GetManualStreamSelection) (IWMReaderAdvanced5 * This, BOOL * pfSelection);
	HRESULT(STDMETHODCALLTYPE * SetStreamsSelected) (IWMReaderAdvanced5 * This, WORD cStreamCount, WORD * pwStreamNumbers, WMT_STREAM_SELECTION * pSelections);
	HRESULT(STDMETHODCALLTYPE * GetStreamSelected) (IWMReaderAdvanced5 * This, WORD wStreamNum, WMT_STREAM_SELECTION * pSelection);
	HRESULT(STDMETHODCALLTYPE * SetReceiveSelectionCallbacks) (IWMReaderAdvanced5 * This, BOOL fGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * GetReceiveSelectionCallbacks) (IWMReaderAdvanced5 * This, BOOL * pfGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * SetReceiveStreamSamples) (IWMReaderAdvanced5 * This, WORD wStreamNum, BOOL fReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * GetReceiveStreamSamples) (IWMReaderAdvanced5 * This, WORD wStreamNum, BOOL * pfReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForOutput) (IWMReaderAdvanced5 * This, DWORD dwOutputNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForOutput) (IWMReaderAdvanced5 * This, DWORD dwOutputNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForStream) (IWMReaderAdvanced5 * This, WORD wStreamNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForStream) (IWMReaderAdvanced5 * This, WORD dwSreamNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (IWMReaderAdvanced5 * This, WM_READER_STATISTICS * pStatistics);
	HRESULT(STDMETHODCALLTYPE * SetClientInfo) (IWMReaderAdvanced5 * This, WM_READER_CLIENTINFO * pClientInfo);
	HRESULT(STDMETHODCALLTYPE * GetMaxOutputSampleSize) (IWMReaderAdvanced5 * This, DWORD dwOutput, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * GetMaxStreamSampleSize) (IWMReaderAdvanced5 * This, WORD wStream, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * NotifyLateDelivery) (IWMReaderAdvanced5 * This, QWORD cnsLateness);
	HRESULT(STDMETHODCALLTYPE * SetPlayMode) (IWMReaderAdvanced5 * This, WMT_PLAY_MODE Mode);
	HRESULT(STDMETHODCALLTYPE * GetPlayMode) (IWMReaderAdvanced5 * This, WMT_PLAY_MODE * pMode);
	HRESULT(STDMETHODCALLTYPE * GetBufferProgress) (IWMReaderAdvanced5 * This, DWORD * pdwPercent, QWORD * pcnsBuffering);
	HRESULT(STDMETHODCALLTYPE * GetDownloadProgress) (IWMReaderAdvanced5 * This, DWORD * pdwPercent, QWORD * pqwBytesDownloaded, QWORD * pcnsDownload);
	HRESULT(STDMETHODCALLTYPE * GetSaveAsProgress) (IWMReaderAdvanced5 * This, DWORD * pdwPercent);
	HRESULT(STDMETHODCALLTYPE * SaveFileAs) (IWMReaderAdvanced5 * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * GetProtocolName) (IWMReaderAdvanced5 * This, WCHAR * pwszProtocol, DWORD * pcchProtocol);
	HRESULT(STDMETHODCALLTYPE * StartAtMarker) (IWMReaderAdvanced5 * This, WORD wMarkerIndex, QWORD cnsDuration, float fRate, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * GetOutputSetting) (IWMReaderAdvanced5 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetOutputSetting) (IWMReaderAdvanced5 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * Preroll) (IWMReaderAdvanced5 * This, QWORD cnsStart, QWORD cnsDuration, float fRate);
	HRESULT(STDMETHODCALLTYPE * SetLogClientID) (IWMReaderAdvanced5 * This, BOOL fLogClientID);
	HRESULT(STDMETHODCALLTYPE * GetLogClientID) (IWMReaderAdvanced5 * This, BOOL * pfLogClientID);
	HRESULT(STDMETHODCALLTYPE * StopBuffering) (IWMReaderAdvanced5 * This);
	HRESULT(STDMETHODCALLTYPE * OpenStream) (IWMReaderAdvanced5 * This, IStream * pStream, IWMReaderCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * StopNetStreaming) (IWMReaderAdvanced5 * This);
	HRESULT(STDMETHODCALLTYPE * StartAtPosition) (IWMReaderAdvanced5 * This, WORD wStreamNum, void *pvOffsetStart, void *pvDuration, WMT_OFFSET_FORMAT dwOffsetFormat, float fRate, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * GetLanguageCount) (IWMReaderAdvanced5 * This, DWORD dwOutputNum, WORD * pwLanguageCount);
	HRESULT(STDMETHODCALLTYPE * GetLanguage) (IWMReaderAdvanced5 * This, DWORD dwOutputNum, WORD wLanguage, WCHAR * pwszLanguageString, WORD * pcchLanguageStringLength);
	HRESULT(STDMETHODCALLTYPE * GetMaxSpeedFactor) (IWMReaderAdvanced5 * This, double *pdblFactor);
	HRESULT(STDMETHODCALLTYPE * IsUsingFastCache) (IWMReaderAdvanced5 * This, BOOL * pfUsingFastCache);
	HRESULT(STDMETHODCALLTYPE * AddLogParam) (IWMReaderAdvanced5 * This, LPCWSTR wszNameSpace, LPCWSTR wszName, LPCWSTR wszValue);
	HRESULT(STDMETHODCALLTYPE * SendLogParams) (IWMReaderAdvanced5 * This);
	HRESULT(STDMETHODCALLTYPE * CanSaveFileAs) (IWMReaderAdvanced5 * This, BOOL * pfCanSave);
	HRESULT(STDMETHODCALLTYPE * CancelSaveFileAs) (IWMReaderAdvanced5 * This);
	HRESULT(STDMETHODCALLTYPE * GetURL) (IWMReaderAdvanced5 * This, WCHAR * pwszURL, DWORD * pcchURL);
	HRESULT(STDMETHODCALLTYPE * SetPlayerHook) (IWMReaderAdvanced5 * This, DWORD dwOutputNum, IWMPlayerHook * pHook);
	END_INTERFACE
} IWMReaderAdvanced5Vtbl;
interface IWMReaderAdvanced5
{
    CONST_VTBL struct IWMReaderAdvanced5Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderAdvanced5_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderAdvanced5_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderAdvanced5_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderAdvanced5_SetUserProvidedClock(This,fUserClock)    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) ) 
#define IWMReaderAdvanced5_GetUserProvidedClock(This,pfUserClock)    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) ) 
#define IWMReaderAdvanced5_DeliverTime(This,cnsTime)    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) ) 
#define IWMReaderAdvanced5_SetManualStreamSelection(This,fSelection)    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) ) 
#define IWMReaderAdvanced5_GetManualStreamSelection(This,pfSelection)    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) ) 
#define IWMReaderAdvanced5_SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections)    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) ) 
#define IWMReaderAdvanced5_GetStreamSelected(This,wStreamNum,pSelection)    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) ) 
#define IWMReaderAdvanced5_SetReceiveSelectionCallbacks(This,fGetCallbacks)    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) ) 
#define IWMReaderAdvanced5_GetReceiveSelectionCallbacks(This,pfGetCallbacks)    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) ) 
#define IWMReaderAdvanced5_SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples)    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) ) 
#define IWMReaderAdvanced5_GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples)    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) ) 
#define IWMReaderAdvanced5_SetAllocateForOutput(This,dwOutputNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) ) 
#define IWMReaderAdvanced5_GetAllocateForOutput(This,dwOutputNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) ) 
#define IWMReaderAdvanced5_SetAllocateForStream(This,wStreamNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) ) 
#define IWMReaderAdvanced5_GetAllocateForStream(This,dwSreamNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) ) 
#define IWMReaderAdvanced5_GetStatistics(This,pStatistics)    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) ) 
#define IWMReaderAdvanced5_SetClientInfo(This,pClientInfo)    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) ) 
#define IWMReaderAdvanced5_GetMaxOutputSampleSize(This,dwOutput,pcbMax)    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) ) 
#define IWMReaderAdvanced5_GetMaxStreamSampleSize(This,wStream,pcbMax)    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) ) 
#define IWMReaderAdvanced5_NotifyLateDelivery(This,cnsLateness)    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) ) 
#define IWMReaderAdvanced5_SetPlayMode(This,Mode)    ( (This)->lpVtbl -> SetPlayMode(This,Mode) ) 
#define IWMReaderAdvanced5_GetPlayMode(This,pMode)    ( (This)->lpVtbl -> GetPlayMode(This,pMode) ) 
#define IWMReaderAdvanced5_GetBufferProgress(This,pdwPercent,pcnsBuffering)    ( (This)->lpVtbl -> GetBufferProgress(This,pdwPercent,pcnsBuffering) ) 
#define IWMReaderAdvanced5_GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload)    ( (This)->lpVtbl -> GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload) ) 
#define IWMReaderAdvanced5_GetSaveAsProgress(This,pdwPercent)    ( (This)->lpVtbl -> GetSaveAsProgress(This,pdwPercent) ) 
#define IWMReaderAdvanced5_SaveFileAs(This,pwszFilename)    ( (This)->lpVtbl -> SaveFileAs(This,pwszFilename) ) 
#define IWMReaderAdvanced5_GetProtocolName(This,pwszProtocol,pcchProtocol)    ( (This)->lpVtbl -> GetProtocolName(This,pwszProtocol,pcchProtocol) ) 
#define IWMReaderAdvanced5_StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext)    ( (This)->lpVtbl -> StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext) ) 
#define IWMReaderAdvanced5_GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) ) 
#define IWMReaderAdvanced5_SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) ) 
#define IWMReaderAdvanced5_Preroll(This,cnsStart,cnsDuration,fRate)    ( (This)->lpVtbl -> Preroll(This,cnsStart,cnsDuration,fRate) ) 
#define IWMReaderAdvanced5_SetLogClientID(This,fLogClientID)    ( (This)->lpVtbl -> SetLogClientID(This,fLogClientID) ) 
#define IWMReaderAdvanced5_GetLogClientID(This,pfLogClientID)    ( (This)->lpVtbl -> GetLogClientID(This,pfLogClientID) ) 
#define IWMReaderAdvanced5_StopBuffering(This)    ( (This)->lpVtbl -> StopBuffering(This) ) 
#define IWMReaderAdvanced5_OpenStream(This,pStream,pCallback,pvContext)    ( (This)->lpVtbl -> OpenStream(This,pStream,pCallback,pvContext) ) 
#define IWMReaderAdvanced5_StopNetStreaming(This)    ( (This)->lpVtbl -> StopNetStreaming(This) ) 
#define IWMReaderAdvanced5_StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext)    ( (This)->lpVtbl -> StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext) ) 
#define IWMReaderAdvanced5_GetLanguageCount(This,dwOutputNum,pwLanguageCount)    ( (This)->lpVtbl -> GetLanguageCount(This,dwOutputNum,pwLanguageCount) ) 
#define IWMReaderAdvanced5_GetLanguage(This,dwOutputNum,wLanguage,pwszLanguageString,pcchLanguageStringLength)    ( (This)->lpVtbl -> GetLanguage(This,dwOutputNum,wLanguage,pwszLanguageString,pcchLanguageStringLength) ) 
#define IWMReaderAdvanced5_GetMaxSpeedFactor(This,pdblFactor)    ( (This)->lpVtbl -> GetMaxSpeedFactor(This,pdblFactor) ) 
#define IWMReaderAdvanced5_IsUsingFastCache(This,pfUsingFastCache)    ( (This)->lpVtbl -> IsUsingFastCache(This,pfUsingFastCache) ) 
#define IWMReaderAdvanced5_AddLogParam(This,wszNameSpace,wszName,wszValue)    ( (This)->lpVtbl -> AddLogParam(This,wszNameSpace,wszName,wszValue) ) 
#define IWMReaderAdvanced5_SendLogParams(This)    ( (This)->lpVtbl -> SendLogParams(This) ) 
#define IWMReaderAdvanced5_CanSaveFileAs(This,pfCanSave)    ( (This)->lpVtbl -> CanSaveFileAs(This,pfCanSave) ) 
#define IWMReaderAdvanced5_CancelSaveFileAs(This)    ( (This)->lpVtbl -> CancelSaveFileAs(This) ) 
#define IWMReaderAdvanced5_GetURL(This,pwszURL,pcchURL)    ( (This)->lpVtbl -> GetURL(This,pwszURL,pcchURL) ) 
#define IWMReaderAdvanced5_SetPlayerHook(This,dwOutputNum,pHook)    ( (This)->lpVtbl -> SetPlayerHook(This,dwOutputNum,pHook) ) 
#endif
#endif
#ifndef __IWMReaderAdvanced6_INTERFACE_DEFINED__
#define __IWMReaderAdvanced6_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderAdvanced6;
typedef struct IWMReaderAdvanced6Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderAdvanced6 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderAdvanced6 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderAdvanced6 * This);
	HRESULT(STDMETHODCALLTYPE * SetUserProvidedClock) (IWMReaderAdvanced6 * This, BOOL fUserClock);
	HRESULT(STDMETHODCALLTYPE * GetUserProvidedClock) (IWMReaderAdvanced6 * This, BOOL * pfUserClock);
	HRESULT(STDMETHODCALLTYPE * DeliverTime) (IWMReaderAdvanced6 * This, QWORD cnsTime);
	HRESULT(STDMETHODCALLTYPE * SetManualStreamSelection) (IWMReaderAdvanced6 * This, BOOL fSelection);
	HRESULT(STDMETHODCALLTYPE * GetManualStreamSelection) (IWMReaderAdvanced6 * This, BOOL * pfSelection);
	HRESULT(STDMETHODCALLTYPE * SetStreamsSelected) (IWMReaderAdvanced6 * This, WORD cStreamCount, WORD * pwStreamNumbers, WMT_STREAM_SELECTION * pSelections);
	HRESULT(STDMETHODCALLTYPE * GetStreamSelected) (IWMReaderAdvanced6 * This, WORD wStreamNum, WMT_STREAM_SELECTION * pSelection);
	HRESULT(STDMETHODCALLTYPE * SetReceiveSelectionCallbacks) (IWMReaderAdvanced6 * This, BOOL fGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * GetReceiveSelectionCallbacks) (IWMReaderAdvanced6 * This, BOOL * pfGetCallbacks);
	HRESULT(STDMETHODCALLTYPE * SetReceiveStreamSamples) (IWMReaderAdvanced6 * This, WORD wStreamNum, BOOL fReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * GetReceiveStreamSamples) (IWMReaderAdvanced6 * This, WORD wStreamNum, BOOL * pfReceiveStreamSamples);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForOutput) (IWMReaderAdvanced6 * This, DWORD dwOutputNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForOutput) (IWMReaderAdvanced6 * This, DWORD dwOutputNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * SetAllocateForStream) (IWMReaderAdvanced6 * This, WORD wStreamNum, BOOL fAllocate);
	HRESULT(STDMETHODCALLTYPE * GetAllocateForStream) (IWMReaderAdvanced6 * This, WORD dwSreamNum, BOOL * pfAllocate);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (IWMReaderAdvanced6 * This, WM_READER_STATISTICS * pStatistics);
	HRESULT(STDMETHODCALLTYPE * SetClientInfo) (IWMReaderAdvanced6 * This, WM_READER_CLIENTINFO * pClientInfo);
	HRESULT(STDMETHODCALLTYPE * GetMaxOutputSampleSize) (IWMReaderAdvanced6 * This, DWORD dwOutput, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * GetMaxStreamSampleSize) (IWMReaderAdvanced6 * This, WORD wStream, DWORD * pcbMax);
	HRESULT(STDMETHODCALLTYPE * NotifyLateDelivery) (IWMReaderAdvanced6 * This, QWORD cnsLateness);
	HRESULT(STDMETHODCALLTYPE * SetPlayMode) (IWMReaderAdvanced6 * This, WMT_PLAY_MODE Mode);
	HRESULT(STDMETHODCALLTYPE * GetPlayMode) (IWMReaderAdvanced6 * This, WMT_PLAY_MODE * pMode);
	HRESULT(STDMETHODCALLTYPE * GetBufferProgress) (IWMReaderAdvanced6 * This, DWORD * pdwPercent, QWORD * pcnsBuffering);
	HRESULT(STDMETHODCALLTYPE * GetDownloadProgress) (IWMReaderAdvanced6 * This, DWORD * pdwPercent, QWORD * pqwBytesDownloaded, QWORD * pcnsDownload);
	HRESULT(STDMETHODCALLTYPE * GetSaveAsProgress) (IWMReaderAdvanced6 * This, DWORD * pdwPercent);
	HRESULT(STDMETHODCALLTYPE * SaveFileAs) (IWMReaderAdvanced6 * This, const WCHAR * pwszFilename);
	HRESULT(STDMETHODCALLTYPE * GetProtocolName) (IWMReaderAdvanced6 * This, WCHAR * pwszProtocol, DWORD * pcchProtocol);
	HRESULT(STDMETHODCALLTYPE * StartAtMarker) (IWMReaderAdvanced6 * This, WORD wMarkerIndex, QWORD cnsDuration, float fRate, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * GetOutputSetting) (IWMReaderAdvanced6 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetOutputSetting) (IWMReaderAdvanced6 * This, DWORD dwOutputNum, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * Preroll) (IWMReaderAdvanced6 * This, QWORD cnsStart, QWORD cnsDuration, float fRate);
	HRESULT(STDMETHODCALLTYPE * SetLogClientID) (IWMReaderAdvanced6 * This, BOOL fLogClientID);
	HRESULT(STDMETHODCALLTYPE * GetLogClientID) (IWMReaderAdvanced6 * This, BOOL * pfLogClientID);
	HRESULT(STDMETHODCALLTYPE * StopBuffering) (IWMReaderAdvanced6 * This);
	HRESULT(STDMETHODCALLTYPE * OpenStream) (IWMReaderAdvanced6 * This, IStream * pStream, IWMReaderCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * StopNetStreaming) (IWMReaderAdvanced6 * This);
	HRESULT(STDMETHODCALLTYPE * StartAtPosition) (IWMReaderAdvanced6 * This, WORD wStreamNum, void *pvOffsetStart, void *pvDuration, WMT_OFFSET_FORMAT dwOffsetFormat, float fRate, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * GetLanguageCount) (IWMReaderAdvanced6 * This, DWORD dwOutputNum, WORD * pwLanguageCount);
	HRESULT(STDMETHODCALLTYPE * GetLanguage) (IWMReaderAdvanced6 * This, DWORD dwOutputNum, WORD wLanguage, WCHAR * pwszLanguageString, WORD * pcchLanguageStringLength);
	HRESULT(STDMETHODCALLTYPE * GetMaxSpeedFactor) (IWMReaderAdvanced6 * This, double *pdblFactor);
	HRESULT(STDMETHODCALLTYPE * IsUsingFastCache) (IWMReaderAdvanced6 * This, BOOL * pfUsingFastCache);
	HRESULT(STDMETHODCALLTYPE * AddLogParam) (IWMReaderAdvanced6 * This, LPCWSTR wszNameSpace, LPCWSTR wszName, LPCWSTR wszValue);
	HRESULT(STDMETHODCALLTYPE * SendLogParams) (IWMReaderAdvanced6 * This);
	HRESULT(STDMETHODCALLTYPE * CanSaveFileAs) (IWMReaderAdvanced6 * This, BOOL * pfCanSave);
	HRESULT(STDMETHODCALLTYPE * CancelSaveFileAs) (IWMReaderAdvanced6 * This);
	HRESULT(STDMETHODCALLTYPE * GetURL) (IWMReaderAdvanced6 * This, WCHAR * pwszURL, DWORD * pcchURL);
	HRESULT(STDMETHODCALLTYPE * SetPlayerHook) (IWMReaderAdvanced6 * This, DWORD dwOutputNum, IWMPlayerHook * pHook);
	HRESULT(STDMETHODCALLTYPE * SetProtectStreamSamples) (IWMReaderAdvanced6 * This, BYTE * pbCertificate, DWORD cbCertificate, DWORD dwCertificateType, DWORD dwFlags, BYTE * pbInitializationVector, DWORD * pcbInitializationVector);
	END_INTERFACE
} IWMReaderAdvanced6Vtbl;
interface IWMReaderAdvanced6
{
    CONST_VTBL struct IWMReaderAdvanced6Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderAdvanced6_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderAdvanced6_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderAdvanced6_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderAdvanced6_SetUserProvidedClock(This,fUserClock)    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) ) 
#define IWMReaderAdvanced6_GetUserProvidedClock(This,pfUserClock)    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) ) 
#define IWMReaderAdvanced6_DeliverTime(This,cnsTime)    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) ) 
#define IWMReaderAdvanced6_SetManualStreamSelection(This,fSelection)    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) ) 
#define IWMReaderAdvanced6_GetManualStreamSelection(This,pfSelection)    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) ) 
#define IWMReaderAdvanced6_SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections)    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) ) 
#define IWMReaderAdvanced6_GetStreamSelected(This,wStreamNum,pSelection)    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) ) 
#define IWMReaderAdvanced6_SetReceiveSelectionCallbacks(This,fGetCallbacks)    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) ) 
#define IWMReaderAdvanced6_GetReceiveSelectionCallbacks(This,pfGetCallbacks)    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) ) 
#define IWMReaderAdvanced6_SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples)    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) ) 
#define IWMReaderAdvanced6_GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples)    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) ) 
#define IWMReaderAdvanced6_SetAllocateForOutput(This,dwOutputNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) ) 
#define IWMReaderAdvanced6_GetAllocateForOutput(This,dwOutputNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) ) 
#define IWMReaderAdvanced6_SetAllocateForStream(This,wStreamNum,fAllocate)    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) ) 
#define IWMReaderAdvanced6_GetAllocateForStream(This,dwSreamNum,pfAllocate)    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) ) 
#define IWMReaderAdvanced6_GetStatistics(This,pStatistics)    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) ) 
#define IWMReaderAdvanced6_SetClientInfo(This,pClientInfo)    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) ) 
#define IWMReaderAdvanced6_GetMaxOutputSampleSize(This,dwOutput,pcbMax)    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) ) 
#define IWMReaderAdvanced6_GetMaxStreamSampleSize(This,wStream,pcbMax)    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) ) 
#define IWMReaderAdvanced6_NotifyLateDelivery(This,cnsLateness)    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) ) 
#define IWMReaderAdvanced6_SetPlayMode(This,Mode)    ( (This)->lpVtbl -> SetPlayMode(This,Mode) ) 
#define IWMReaderAdvanced6_GetPlayMode(This,pMode)    ( (This)->lpVtbl -> GetPlayMode(This,pMode) ) 
#define IWMReaderAdvanced6_GetBufferProgress(This,pdwPercent,pcnsBuffering)    ( (This)->lpVtbl -> GetBufferProgress(This,pdwPercent,pcnsBuffering) ) 
#define IWMReaderAdvanced6_GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload)    ( (This)->lpVtbl -> GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload) ) 
#define IWMReaderAdvanced6_GetSaveAsProgress(This,pdwPercent)    ( (This)->lpVtbl -> GetSaveAsProgress(This,pdwPercent) ) 
#define IWMReaderAdvanced6_SaveFileAs(This,pwszFilename)    ( (This)->lpVtbl -> SaveFileAs(This,pwszFilename) ) 
#define IWMReaderAdvanced6_GetProtocolName(This,pwszProtocol,pcchProtocol)    ( (This)->lpVtbl -> GetProtocolName(This,pwszProtocol,pcchProtocol) ) 
#define IWMReaderAdvanced6_StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext)    ( (This)->lpVtbl -> StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext) ) 
#define IWMReaderAdvanced6_GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) ) 
#define IWMReaderAdvanced6_SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) ) 
#define IWMReaderAdvanced6_Preroll(This,cnsStart,cnsDuration,fRate)    ( (This)->lpVtbl -> Preroll(This,cnsStart,cnsDuration,fRate) ) 
#define IWMReaderAdvanced6_SetLogClientID(This,fLogClientID)    ( (This)->lpVtbl -> SetLogClientID(This,fLogClientID) ) 
#define IWMReaderAdvanced6_GetLogClientID(This,pfLogClientID)    ( (This)->lpVtbl -> GetLogClientID(This,pfLogClientID) ) 
#define IWMReaderAdvanced6_StopBuffering(This)    ( (This)->lpVtbl -> StopBuffering(This) ) 
#define IWMReaderAdvanced6_OpenStream(This,pStream,pCallback,pvContext)    ( (This)->lpVtbl -> OpenStream(This,pStream,pCallback,pvContext) ) 
#define IWMReaderAdvanced6_StopNetStreaming(This)    ( (This)->lpVtbl -> StopNetStreaming(This) ) 
#define IWMReaderAdvanced6_StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext)    ( (This)->lpVtbl -> StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext) ) 
#define IWMReaderAdvanced6_GetLanguageCount(This,dwOutputNum,pwLanguageCount)    ( (This)->lpVtbl -> GetLanguageCount(This,dwOutputNum,pwLanguageCount) ) 
#define IWMReaderAdvanced6_GetLanguage(This,dwOutputNum,wLanguage,pwszLanguageString,pcchLanguageStringLength)    ( (This)->lpVtbl -> GetLanguage(This,dwOutputNum,wLanguage,pwszLanguageString,pcchLanguageStringLength) ) 
#define IWMReaderAdvanced6_GetMaxSpeedFactor(This,pdblFactor)    ( (This)->lpVtbl -> GetMaxSpeedFactor(This,pdblFactor) ) 
#define IWMReaderAdvanced6_IsUsingFastCache(This,pfUsingFastCache)    ( (This)->lpVtbl -> IsUsingFastCache(This,pfUsingFastCache) ) 
#define IWMReaderAdvanced6_AddLogParam(This,wszNameSpace,wszName,wszValue)    ( (This)->lpVtbl -> AddLogParam(This,wszNameSpace,wszName,wszValue) ) 
#define IWMReaderAdvanced6_SendLogParams(This)    ( (This)->lpVtbl -> SendLogParams(This) ) 
#define IWMReaderAdvanced6_CanSaveFileAs(This,pfCanSave)    ( (This)->lpVtbl -> CanSaveFileAs(This,pfCanSave) ) 
#define IWMReaderAdvanced6_CancelSaveFileAs(This)    ( (This)->lpVtbl -> CancelSaveFileAs(This) ) 
#define IWMReaderAdvanced6_GetURL(This,pwszURL,pcchURL)    ( (This)->lpVtbl -> GetURL(This,pwszURL,pcchURL) ) 
#define IWMReaderAdvanced6_SetPlayerHook(This,dwOutputNum,pHook)    ( (This)->lpVtbl -> SetPlayerHook(This,dwOutputNum,pHook) ) 
#define IWMReaderAdvanced6_SetProtectStreamSamples(This,pbCertificate,cbCertificate,dwCertificateType,dwFlags,pbInitializationVector,pcbInitializationVector)    ( (This)->lpVtbl -> SetProtectStreamSamples(This,pbCertificate,cbCertificate,dwCertificateType,dwFlags,pbInitializationVector,pcbInitializationVector) ) 
#endif
#endif
#ifndef __IWMPlayerHook_INTERFACE_DEFINED__
#define __IWMPlayerHook_INTERFACE_DEFINED__ 
extern const IID IID_IWMPlayerHook;
typedef struct IWMPlayerHookVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPlayerHook * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPlayerHook * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPlayerHook * This);
	HRESULT(STDMETHODCALLTYPE * PreDecode) (IWMPlayerHook * This);
	END_INTERFACE
} IWMPlayerHookVtbl;
interface IWMPlayerHook
{
    CONST_VTBL struct IWMPlayerHookVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPlayerHook_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMPlayerHook_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMPlayerHook_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMPlayerHook_PreDecode(This)    ( (This)->lpVtbl -> PreDecode(This) ) 
#endif
#endif
#ifndef __IWMReaderAllocatorEx_INTERFACE_DEFINED__
#define __IWMReaderAllocatorEx_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderAllocatorEx;
typedef struct IWMReaderAllocatorExVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderAllocatorEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderAllocatorEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderAllocatorEx * This);
	HRESULT(STDMETHODCALLTYPE * AllocateForStreamEx) (IWMReaderAllocatorEx * This, WORD wStreamNum, DWORD cbBuffer, INSSBuffer ** ppBuffer, DWORD dwFlags, QWORD cnsSampleTime, QWORD cnsSampleDuration, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * AllocateForOutputEx) (IWMReaderAllocatorEx * This, DWORD dwOutputNum, DWORD cbBuffer, INSSBuffer ** ppBuffer, DWORD dwFlags, QWORD cnsSampleTime, QWORD cnsSampleDuration, void *pvContext);
	END_INTERFACE
} IWMReaderAllocatorExVtbl;
interface IWMReaderAllocatorEx
{
    CONST_VTBL struct IWMReaderAllocatorExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderAllocatorEx_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderAllocatorEx_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderAllocatorEx_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderAllocatorEx_AllocateForStreamEx(This,wStreamNum,cbBuffer,ppBuffer,dwFlags,cnsSampleTime,cnsSampleDuration,pvContext)    ( (This)->lpVtbl -> AllocateForStreamEx(This,wStreamNum,cbBuffer,ppBuffer,dwFlags,cnsSampleTime,cnsSampleDuration,pvContext) ) 
#define IWMReaderAllocatorEx_AllocateForOutputEx(This,dwOutputNum,cbBuffer,ppBuffer,dwFlags,cnsSampleTime,cnsSampleDuration,pvContext)    ( (This)->lpVtbl -> AllocateForOutputEx(This,dwOutputNum,cbBuffer,ppBuffer,dwFlags,cnsSampleTime,cnsSampleDuration,pvContext) ) 
#endif
#endif
#ifndef __IWMReaderTypeNegotiation_INTERFACE_DEFINED__
#define __IWMReaderTypeNegotiation_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderTypeNegotiation;
typedef struct IWMReaderTypeNegotiationVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderTypeNegotiation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderTypeNegotiation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderTypeNegotiation * This);
	HRESULT(STDMETHODCALLTYPE * TryOutputProps) (IWMReaderTypeNegotiation * This, DWORD dwOutputNum, IWMOutputMediaProps * pOutput);
	END_INTERFACE
} IWMReaderTypeNegotiationVtbl;
interface IWMReaderTypeNegotiation
{
    CONST_VTBL struct IWMReaderTypeNegotiationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderTypeNegotiation_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderTypeNegotiation_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderTypeNegotiation_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderTypeNegotiation_TryOutputProps(This,dwOutputNum,pOutput)    ( (This)->lpVtbl -> TryOutputProps(This,dwOutputNum,pOutput) ) 
#endif
#endif
#ifndef __IWMReaderCallbackAdvanced_INTERFACE_DEFINED__
#define __IWMReaderCallbackAdvanced_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderCallbackAdvanced;
typedef struct IWMReaderCallbackAdvancedVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderCallbackAdvanced * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderCallbackAdvanced * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderCallbackAdvanced * This);
	HRESULT(STDMETHODCALLTYPE * OnStreamSample) (IWMReaderCallbackAdvanced * This, WORD wStreamNum, QWORD cnsSampleTime, QWORD cnsSampleDuration, DWORD dwFlags, INSSBuffer * pSample, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * OnTime) (IWMReaderCallbackAdvanced * This, QWORD cnsCurrentTime, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * OnStreamSelection) (IWMReaderCallbackAdvanced * This, WORD wStreamCount, WORD * pStreamNumbers, WMT_STREAM_SELECTION * pSelections, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * OnOutputPropsChanged) (IWMReaderCallbackAdvanced * This, DWORD dwOutputNum, WM_MEDIA_TYPE * pMediaType, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * AllocateForStream) (IWMReaderCallbackAdvanced * This, WORD wStreamNum, DWORD cbBuffer, INSSBuffer ** ppBuffer, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * AllocateForOutput) (IWMReaderCallbackAdvanced * This, DWORD dwOutputNum, DWORD cbBuffer, INSSBuffer ** ppBuffer, void *pvContext);
	END_INTERFACE
} IWMReaderCallbackAdvancedVtbl;
interface IWMReaderCallbackAdvanced
{
    CONST_VTBL struct IWMReaderCallbackAdvancedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderCallbackAdvanced_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderCallbackAdvanced_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderCallbackAdvanced_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderCallbackAdvanced_OnStreamSample(This,wStreamNum,cnsSampleTime,cnsSampleDuration,dwFlags,pSample,pvContext)    ( (This)->lpVtbl -> OnStreamSample(This,wStreamNum,cnsSampleTime,cnsSampleDuration,dwFlags,pSample,pvContext) ) 
#define IWMReaderCallbackAdvanced_OnTime(This,cnsCurrentTime,pvContext)    ( (This)->lpVtbl -> OnTime(This,cnsCurrentTime,pvContext) ) 
#define IWMReaderCallbackAdvanced_OnStreamSelection(This,wStreamCount,pStreamNumbers,pSelections,pvContext)    ( (This)->lpVtbl -> OnStreamSelection(This,wStreamCount,pStreamNumbers,pSelections,pvContext) ) 
#define IWMReaderCallbackAdvanced_OnOutputPropsChanged(This,dwOutputNum,pMediaType,pvContext)    ( (This)->lpVtbl -> OnOutputPropsChanged(This,dwOutputNum,pMediaType,pvContext) ) 
#define IWMReaderCallbackAdvanced_AllocateForStream(This,wStreamNum,cbBuffer,ppBuffer,pvContext)    ( (This)->lpVtbl -> AllocateForStream(This,wStreamNum,cbBuffer,ppBuffer,pvContext) ) 
#define IWMReaderCallbackAdvanced_AllocateForOutput(This,dwOutputNum,cbBuffer,ppBuffer,pvContext)    ( (This)->lpVtbl -> AllocateForOutput(This,dwOutputNum,cbBuffer,ppBuffer,pvContext) ) 
#endif
#endif
#ifndef __IWMDRMReader_INTERFACE_DEFINED__
#define __IWMDRMReader_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMReader;
typedef struct IWMDRMReaderVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMReader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMReader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMReader * This);
	HRESULT(STDMETHODCALLTYPE * AcquireLicense) (IWMDRMReader * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * CancelLicenseAcquisition) (IWMDRMReader * This);
	HRESULT(STDMETHODCALLTYPE * Individualize) (IWMDRMReader * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * CancelIndividualization) (IWMDRMReader * This);
	HRESULT(STDMETHODCALLTYPE * MonitorLicenseAcquisition) (IWMDRMReader * This);
	HRESULT(STDMETHODCALLTYPE * CancelMonitorLicenseAcquisition) (IWMDRMReader * This);
	HRESULT(STDMETHODCALLTYPE * SetDRMProperty) (IWMDRMReader * This, LPCWSTR pwstrName, WMT_ATTR_DATATYPE dwType, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * GetDRMProperty) (IWMDRMReader * This, LPCWSTR pwstrName, WMT_ATTR_DATATYPE * pdwType, BYTE * pValue, WORD * pcbLength);
	END_INTERFACE
} IWMDRMReaderVtbl;
interface IWMDRMReader
{
    CONST_VTBL struct IWMDRMReaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMReader_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMReader_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMReader_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMReader_AcquireLicense(This,dwFlags)    ( (This)->lpVtbl -> AcquireLicense(This,dwFlags) ) 
#define IWMDRMReader_CancelLicenseAcquisition(This)    ( (This)->lpVtbl -> CancelLicenseAcquisition(This) ) 
#define IWMDRMReader_Individualize(This,dwFlags)    ( (This)->lpVtbl -> Individualize(This,dwFlags) ) 
#define IWMDRMReader_CancelIndividualization(This)    ( (This)->lpVtbl -> CancelIndividualization(This) ) 
#define IWMDRMReader_MonitorLicenseAcquisition(This)    ( (This)->lpVtbl -> MonitorLicenseAcquisition(This) ) 
#define IWMDRMReader_CancelMonitorLicenseAcquisition(This)    ( (This)->lpVtbl -> CancelMonitorLicenseAcquisition(This) ) 
#define IWMDRMReader_SetDRMProperty(This,pwstrName,dwType,pValue,cbLength)    ( (This)->lpVtbl -> SetDRMProperty(This,pwstrName,dwType,pValue,cbLength) ) 
#define IWMDRMReader_GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength)    ( (This)->lpVtbl -> GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength) ) 
#endif
#endif
#ifndef __IWMDRMReader2_INTERFACE_DEFINED__
#define __IWMDRMReader2_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMReader2;
typedef struct IWMDRMReader2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMReader2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMReader2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMReader2 * This);
	HRESULT(STDMETHODCALLTYPE * AcquireLicense) (IWMDRMReader2 * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * CancelLicenseAcquisition) (IWMDRMReader2 * This);
	HRESULT(STDMETHODCALLTYPE * Individualize) (IWMDRMReader2 * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * CancelIndividualization) (IWMDRMReader2 * This);
	HRESULT(STDMETHODCALLTYPE * MonitorLicenseAcquisition) (IWMDRMReader2 * This);
	HRESULT(STDMETHODCALLTYPE * CancelMonitorLicenseAcquisition) (IWMDRMReader2 * This);
	HRESULT(STDMETHODCALLTYPE * SetDRMProperty) (IWMDRMReader2 * This, LPCWSTR pwstrName, WMT_ATTR_DATATYPE dwType, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * GetDRMProperty) (IWMDRMReader2 * This, LPCWSTR pwstrName, WMT_ATTR_DATATYPE * pdwType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetEvaluateOutputLevelLicenses) (IWMDRMReader2 * This, BOOL fEvaluate);
	HRESULT(STDMETHODCALLTYPE * GetPlayOutputLevels) (IWMDRMReader2 * This, DRM_PLAY_OPL * pPlayOPL, DWORD * pcbLength, DWORD * pdwMinAppComplianceLevel);
	HRESULT(STDMETHODCALLTYPE * GetCopyOutputLevels) (IWMDRMReader2 * This, DRM_COPY_OPL * pCopyOPL, DWORD * pcbLength, DWORD * pdwMinAppComplianceLevel);
	HRESULT(STDMETHODCALLTYPE * TryNextLicense) (IWMDRMReader2 * This);
	END_INTERFACE
} IWMDRMReader2Vtbl;
interface IWMDRMReader2
{
    CONST_VTBL struct IWMDRMReader2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMReader2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMReader2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMReader2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMReader2_AcquireLicense(This,dwFlags)    ( (This)->lpVtbl -> AcquireLicense(This,dwFlags) ) 
#define IWMDRMReader2_CancelLicenseAcquisition(This)    ( (This)->lpVtbl -> CancelLicenseAcquisition(This) ) 
#define IWMDRMReader2_Individualize(This,dwFlags)    ( (This)->lpVtbl -> Individualize(This,dwFlags) ) 
#define IWMDRMReader2_CancelIndividualization(This)    ( (This)->lpVtbl -> CancelIndividualization(This) ) 
#define IWMDRMReader2_MonitorLicenseAcquisition(This)    ( (This)->lpVtbl -> MonitorLicenseAcquisition(This) ) 
#define IWMDRMReader2_CancelMonitorLicenseAcquisition(This)    ( (This)->lpVtbl -> CancelMonitorLicenseAcquisition(This) ) 
#define IWMDRMReader2_SetDRMProperty(This,pwstrName,dwType,pValue,cbLength)    ( (This)->lpVtbl -> SetDRMProperty(This,pwstrName,dwType,pValue,cbLength) ) 
#define IWMDRMReader2_GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength)    ( (This)->lpVtbl -> GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength) ) 
#define IWMDRMReader2_SetEvaluateOutputLevelLicenses(This,fEvaluate)    ( (This)->lpVtbl -> SetEvaluateOutputLevelLicenses(This,fEvaluate) ) 
#define IWMDRMReader2_GetPlayOutputLevels(This,pPlayOPL,pcbLength,pdwMinAppComplianceLevel)    ( (This)->lpVtbl -> GetPlayOutputLevels(This,pPlayOPL,pcbLength,pdwMinAppComplianceLevel) ) 
#define IWMDRMReader2_GetCopyOutputLevels(This,pCopyOPL,pcbLength,pdwMinAppComplianceLevel)    ( (This)->lpVtbl -> GetCopyOutputLevels(This,pCopyOPL,pcbLength,pdwMinAppComplianceLevel) ) 
#define IWMDRMReader2_TryNextLicense(This)    ( (This)->lpVtbl -> TryNextLicense(This) ) 
#endif
#endif
#ifndef __IWMDRMReader3_INTERFACE_DEFINED__
#define __IWMDRMReader3_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMReader3;
typedef struct IWMDRMReader3Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMReader3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMReader3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMReader3 * This);
	HRESULT(STDMETHODCALLTYPE * AcquireLicense) (IWMDRMReader3 * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * CancelLicenseAcquisition) (IWMDRMReader3 * This);
	HRESULT(STDMETHODCALLTYPE * Individualize) (IWMDRMReader3 * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * CancelIndividualization) (IWMDRMReader3 * This);
	HRESULT(STDMETHODCALLTYPE * MonitorLicenseAcquisition) (IWMDRMReader3 * This);
	HRESULT(STDMETHODCALLTYPE * CancelMonitorLicenseAcquisition) (IWMDRMReader3 * This);
	HRESULT(STDMETHODCALLTYPE * SetDRMProperty) (IWMDRMReader3 * This, LPCWSTR pwstrName, WMT_ATTR_DATATYPE dwType, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * GetDRMProperty) (IWMDRMReader3 * This, LPCWSTR pwstrName, WMT_ATTR_DATATYPE * pdwType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetEvaluateOutputLevelLicenses) (IWMDRMReader3 * This, BOOL fEvaluate);
	HRESULT(STDMETHODCALLTYPE * GetPlayOutputLevels) (IWMDRMReader3 * This, DRM_PLAY_OPL * pPlayOPL, DWORD * pcbLength, DWORD * pdwMinAppComplianceLevel);
	HRESULT(STDMETHODCALLTYPE * GetCopyOutputLevels) (IWMDRMReader3 * This, DRM_COPY_OPL * pCopyOPL, DWORD * pcbLength, DWORD * pdwMinAppComplianceLevel);
	HRESULT(STDMETHODCALLTYPE * TryNextLicense) (IWMDRMReader3 * This);
	HRESULT(STDMETHODCALLTYPE * GetInclusionList) (IWMDRMReader3 * This, GUID ** ppGuids, DWORD * pcGuids);
	END_INTERFACE
} IWMDRMReader3Vtbl;
interface IWMDRMReader3
{
    CONST_VTBL struct IWMDRMReader3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMReader3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMReader3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMReader3_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMReader3_AcquireLicense(This,dwFlags)    ( (This)->lpVtbl -> AcquireLicense(This,dwFlags) ) 
#define IWMDRMReader3_CancelLicenseAcquisition(This)    ( (This)->lpVtbl -> CancelLicenseAcquisition(This) ) 
#define IWMDRMReader3_Individualize(This,dwFlags)    ( (This)->lpVtbl -> Individualize(This,dwFlags) ) 
#define IWMDRMReader3_CancelIndividualization(This)    ( (This)->lpVtbl -> CancelIndividualization(This) ) 
#define IWMDRMReader3_MonitorLicenseAcquisition(This)    ( (This)->lpVtbl -> MonitorLicenseAcquisition(This) ) 
#define IWMDRMReader3_CancelMonitorLicenseAcquisition(This)    ( (This)->lpVtbl -> CancelMonitorLicenseAcquisition(This) ) 
#define IWMDRMReader3_SetDRMProperty(This,pwstrName,dwType,pValue,cbLength)    ( (This)->lpVtbl -> SetDRMProperty(This,pwstrName,dwType,pValue,cbLength) ) 
#define IWMDRMReader3_GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength)    ( (This)->lpVtbl -> GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength) ) 
#define IWMDRMReader3_SetEvaluateOutputLevelLicenses(This,fEvaluate)    ( (This)->lpVtbl -> SetEvaluateOutputLevelLicenses(This,fEvaluate) ) 
#define IWMDRMReader3_GetPlayOutputLevels(This,pPlayOPL,pcbLength,pdwMinAppComplianceLevel)    ( (This)->lpVtbl -> GetPlayOutputLevels(This,pPlayOPL,pcbLength,pdwMinAppComplianceLevel) ) 
#define IWMDRMReader3_GetCopyOutputLevels(This,pCopyOPL,pcbLength,pdwMinAppComplianceLevel)    ( (This)->lpVtbl -> GetCopyOutputLevels(This,pCopyOPL,pcbLength,pdwMinAppComplianceLevel) ) 
#define IWMDRMReader3_TryNextLicense(This)    ( (This)->lpVtbl -> TryNextLicense(This) ) 
#define IWMDRMReader3_GetInclusionList(This,ppGuids,pcGuids)    ( (This)->lpVtbl -> GetInclusionList(This,ppGuids,pcGuids) ) 
#endif
#endif
#ifndef __IWMReaderPlaylistBurn_INTERFACE_DEFINED__
#define __IWMReaderPlaylistBurn_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderPlaylistBurn;
typedef struct IWMReaderPlaylistBurnVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderPlaylistBurn * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderPlaylistBurn * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderPlaylistBurn * This);
	HRESULT(STDMETHODCALLTYPE * InitPlaylistBurn) (IWMReaderPlaylistBurn * This, DWORD cFiles, LPCWSTR_WMSDK_TYPE_SAFE * ppwszFilenames, IWMStatusCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * GetInitResults) (IWMReaderPlaylistBurn * This, DWORD cFiles, HRESULT * phrStati);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IWMReaderPlaylistBurn * This);
	HRESULT(STDMETHODCALLTYPE * EndPlaylistBurn) (IWMReaderPlaylistBurn * This, HRESULT hrBurnResult);
	END_INTERFACE
} IWMReaderPlaylistBurnVtbl;
interface IWMReaderPlaylistBurn
{
    CONST_VTBL struct IWMReaderPlaylistBurnVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderPlaylistBurn_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderPlaylistBurn_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderPlaylistBurn_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderPlaylistBurn_InitPlaylistBurn(This,cFiles,ppwszFilenames,pCallback,pvContext)    ( (This)->lpVtbl -> InitPlaylistBurn(This,cFiles,ppwszFilenames,pCallback,pvContext) ) 
#define IWMReaderPlaylistBurn_GetInitResults(This,cFiles,phrStati)    ( (This)->lpVtbl -> GetInitResults(This,cFiles,phrStati) ) 
#define IWMReaderPlaylistBurn_Cancel(This)    ( (This)->lpVtbl -> Cancel(This) ) 
#define IWMReaderPlaylistBurn_EndPlaylistBurn(This,hrBurnResult)    ( (This)->lpVtbl -> EndPlaylistBurn(This,hrBurnResult) ) 
#endif
#endif
#ifndef __IWMReaderNetworkConfig_INTERFACE_DEFINED__
#define __IWMReaderNetworkConfig_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderNetworkConfig;
typedef struct IWMReaderNetworkConfigVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderNetworkConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderNetworkConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderNetworkConfig * This);
	HRESULT(STDMETHODCALLTYPE * GetBufferingTime) (IWMReaderNetworkConfig * This, QWORD * pcnsBufferingTime);
	HRESULT(STDMETHODCALLTYPE * SetBufferingTime) (IWMReaderNetworkConfig * This, QWORD cnsBufferingTime);
	HRESULT(STDMETHODCALLTYPE * GetUDPPortRanges) (IWMReaderNetworkConfig * This, WM_PORT_NUMBER_RANGE * pRangeArray, DWORD * pcRanges);
	HRESULT(STDMETHODCALLTYPE * SetUDPPortRanges) (IWMReaderNetworkConfig * This, WM_PORT_NUMBER_RANGE * pRangeArray, DWORD cRanges);
	HRESULT(STDMETHODCALLTYPE * GetProxySettings) (IWMReaderNetworkConfig * This, LPCWSTR pwszProtocol, WMT_PROXY_SETTINGS * pProxySetting);
	HRESULT(STDMETHODCALLTYPE * SetProxySettings) (IWMReaderNetworkConfig * This, LPCWSTR pwszProtocol, WMT_PROXY_SETTINGS ProxySetting);
	HRESULT(STDMETHODCALLTYPE * GetProxyHostName) (IWMReaderNetworkConfig * This, LPCWSTR pwszProtocol, WCHAR * pwszHostName, DWORD * pcchHostName);
	HRESULT(STDMETHODCALLTYPE * SetProxyHostName) (IWMReaderNetworkConfig * This, LPCWSTR pwszProtocol, LPCWSTR pwszHostName);
	HRESULT(STDMETHODCALLTYPE * GetProxyPort) (IWMReaderNetworkConfig * This, LPCWSTR pwszProtocol, DWORD * pdwPort);
	HRESULT(STDMETHODCALLTYPE * SetProxyPort) (IWMReaderNetworkConfig * This, LPCWSTR pwszProtocol, DWORD dwPort);
	HRESULT(STDMETHODCALLTYPE * GetProxyExceptionList) (IWMReaderNetworkConfig * This, LPCWSTR pwszProtocol, WCHAR * pwszExceptionList, DWORD * pcchExceptionList);
	HRESULT(STDMETHODCALLTYPE * SetProxyExceptionList) (IWMReaderNetworkConfig * This, LPCWSTR pwszProtocol, LPCWSTR pwszExceptionList);
	HRESULT(STDMETHODCALLTYPE * GetProxyBypassForLocal) (IWMReaderNetworkConfig * This, LPCWSTR pwszProtocol, BOOL * pfBypassForLocal);
	HRESULT(STDMETHODCALLTYPE * SetProxyBypassForLocal) (IWMReaderNetworkConfig * This, LPCWSTR pwszProtocol, BOOL fBypassForLocal);
	HRESULT(STDMETHODCALLTYPE * GetForceRerunAutoProxyDetection) (IWMReaderNetworkConfig * This, BOOL * pfForceRerunDetection);
	HRESULT(STDMETHODCALLTYPE * SetForceRerunAutoProxyDetection) (IWMReaderNetworkConfig * This, BOOL fForceRerunDetection);
	HRESULT(STDMETHODCALLTYPE * GetEnableMulticast) (IWMReaderNetworkConfig * This, BOOL * pfEnableMulticast);
	HRESULT(STDMETHODCALLTYPE * SetEnableMulticast) (IWMReaderNetworkConfig * This, BOOL fEnableMulticast);
	HRESULT(STDMETHODCALLTYPE * GetEnableHTTP) (IWMReaderNetworkConfig * This, BOOL * pfEnableHTTP);
	HRESULT(STDMETHODCALLTYPE * SetEnableHTTP) (IWMReaderNetworkConfig * This, BOOL fEnableHTTP);
	HRESULT(STDMETHODCALLTYPE * GetEnableUDP) (IWMReaderNetworkConfig * This, BOOL * pfEnableUDP);
	HRESULT(STDMETHODCALLTYPE * SetEnableUDP) (IWMReaderNetworkConfig * This, BOOL fEnableUDP);
	HRESULT(STDMETHODCALLTYPE * GetEnableTCP) (IWMReaderNetworkConfig * This, BOOL * pfEnableTCP);
	HRESULT(STDMETHODCALLTYPE * SetEnableTCP) (IWMReaderNetworkConfig * This, BOOL fEnableTCP);
	HRESULT(STDMETHODCALLTYPE * ResetProtocolRollover) (IWMReaderNetworkConfig * This);
	HRESULT(STDMETHODCALLTYPE * GetConnectionBandwidth) (IWMReaderNetworkConfig * This, DWORD * pdwConnectionBandwidth);
	HRESULT(STDMETHODCALLTYPE * SetConnectionBandwidth) (IWMReaderNetworkConfig * This, DWORD dwConnectionBandwidth);
	HRESULT(STDMETHODCALLTYPE * GetNumProtocolsSupported) (IWMReaderNetworkConfig * This, DWORD * pcProtocols);
	HRESULT(STDMETHODCALLTYPE * GetSupportedProtocolName) (IWMReaderNetworkConfig * This, DWORD dwProtocolNum, WCHAR * pwszProtocolName, DWORD * pcchProtocolName);
	HRESULT(STDMETHODCALLTYPE * AddLoggingUrl) (IWMReaderNetworkConfig * This, LPCWSTR pwszUrl);
	HRESULT(STDMETHODCALLTYPE * GetLoggingUrl) (IWMReaderNetworkConfig * This, DWORD dwIndex, LPWSTR pwszUrl, DWORD * pcchUrl);
	HRESULT(STDMETHODCALLTYPE * GetLoggingUrlCount) (IWMReaderNetworkConfig * This, DWORD * pdwUrlCount);
	HRESULT(STDMETHODCALLTYPE * ResetLoggingUrlList) (IWMReaderNetworkConfig * This);
	END_INTERFACE
} IWMReaderNetworkConfigVtbl;
interface IWMReaderNetworkConfig
{
    CONST_VTBL struct IWMReaderNetworkConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderNetworkConfig_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderNetworkConfig_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderNetworkConfig_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderNetworkConfig_GetBufferingTime(This,pcnsBufferingTime)    ( (This)->lpVtbl -> GetBufferingTime(This,pcnsBufferingTime) ) 
#define IWMReaderNetworkConfig_SetBufferingTime(This,cnsBufferingTime)    ( (This)->lpVtbl -> SetBufferingTime(This,cnsBufferingTime) ) 
#define IWMReaderNetworkConfig_GetUDPPortRanges(This,pRangeArray,pcRanges)    ( (This)->lpVtbl -> GetUDPPortRanges(This,pRangeArray,pcRanges) ) 
#define IWMReaderNetworkConfig_SetUDPPortRanges(This,pRangeArray,cRanges)    ( (This)->lpVtbl -> SetUDPPortRanges(This,pRangeArray,cRanges) ) 
#define IWMReaderNetworkConfig_GetProxySettings(This,pwszProtocol,pProxySetting)    ( (This)->lpVtbl -> GetProxySettings(This,pwszProtocol,pProxySetting) ) 
#define IWMReaderNetworkConfig_SetProxySettings(This,pwszProtocol,ProxySetting)    ( (This)->lpVtbl -> SetProxySettings(This,pwszProtocol,ProxySetting) ) 
#define IWMReaderNetworkConfig_GetProxyHostName(This,pwszProtocol,pwszHostName,pcchHostName)    ( (This)->lpVtbl -> GetProxyHostName(This,pwszProtocol,pwszHostName,pcchHostName) ) 
#define IWMReaderNetworkConfig_SetProxyHostName(This,pwszProtocol,pwszHostName)    ( (This)->lpVtbl -> SetProxyHostName(This,pwszProtocol,pwszHostName) ) 
#define IWMReaderNetworkConfig_GetProxyPort(This,pwszProtocol,pdwPort)    ( (This)->lpVtbl -> GetProxyPort(This,pwszProtocol,pdwPort) ) 
#define IWMReaderNetworkConfig_SetProxyPort(This,pwszProtocol,dwPort)    ( (This)->lpVtbl -> SetProxyPort(This,pwszProtocol,dwPort) ) 
#define IWMReaderNetworkConfig_GetProxyExceptionList(This,pwszProtocol,pwszExceptionList,pcchExceptionList)    ( (This)->lpVtbl -> GetProxyExceptionList(This,pwszProtocol,pwszExceptionList,pcchExceptionList) ) 
#define IWMReaderNetworkConfig_SetProxyExceptionList(This,pwszProtocol,pwszExceptionList)    ( (This)->lpVtbl -> SetProxyExceptionList(This,pwszProtocol,pwszExceptionList) ) 
#define IWMReaderNetworkConfig_GetProxyBypassForLocal(This,pwszProtocol,pfBypassForLocal)    ( (This)->lpVtbl -> GetProxyBypassForLocal(This,pwszProtocol,pfBypassForLocal) ) 
#define IWMReaderNetworkConfig_SetProxyBypassForLocal(This,pwszProtocol,fBypassForLocal)    ( (This)->lpVtbl -> SetProxyBypassForLocal(This,pwszProtocol,fBypassForLocal) ) 
#define IWMReaderNetworkConfig_GetForceRerunAutoProxyDetection(This,pfForceRerunDetection)    ( (This)->lpVtbl -> GetForceRerunAutoProxyDetection(This,pfForceRerunDetection) ) 
#define IWMReaderNetworkConfig_SetForceRerunAutoProxyDetection(This,fForceRerunDetection)    ( (This)->lpVtbl -> SetForceRerunAutoProxyDetection(This,fForceRerunDetection) ) 
#define IWMReaderNetworkConfig_GetEnableMulticast(This,pfEnableMulticast)    ( (This)->lpVtbl -> GetEnableMulticast(This,pfEnableMulticast) ) 
#define IWMReaderNetworkConfig_SetEnableMulticast(This,fEnableMulticast)    ( (This)->lpVtbl -> SetEnableMulticast(This,fEnableMulticast) ) 
#define IWMReaderNetworkConfig_GetEnableHTTP(This,pfEnableHTTP)    ( (This)->lpVtbl -> GetEnableHTTP(This,pfEnableHTTP) ) 
#define IWMReaderNetworkConfig_SetEnableHTTP(This,fEnableHTTP)    ( (This)->lpVtbl -> SetEnableHTTP(This,fEnableHTTP) ) 
#define IWMReaderNetworkConfig_GetEnableUDP(This,pfEnableUDP)    ( (This)->lpVtbl -> GetEnableUDP(This,pfEnableUDP) ) 
#define IWMReaderNetworkConfig_SetEnableUDP(This,fEnableUDP)    ( (This)->lpVtbl -> SetEnableUDP(This,fEnableUDP) ) 
#define IWMReaderNetworkConfig_GetEnableTCP(This,pfEnableTCP)    ( (This)->lpVtbl -> GetEnableTCP(This,pfEnableTCP) ) 
#define IWMReaderNetworkConfig_SetEnableTCP(This,fEnableTCP)    ( (This)->lpVtbl -> SetEnableTCP(This,fEnableTCP) ) 
#define IWMReaderNetworkConfig_ResetProtocolRollover(This)    ( (This)->lpVtbl -> ResetProtocolRollover(This) ) 
#define IWMReaderNetworkConfig_GetConnectionBandwidth(This,pdwConnectionBandwidth)    ( (This)->lpVtbl -> GetConnectionBandwidth(This,pdwConnectionBandwidth) ) 
#define IWMReaderNetworkConfig_SetConnectionBandwidth(This,dwConnectionBandwidth)    ( (This)->lpVtbl -> SetConnectionBandwidth(This,dwConnectionBandwidth) ) 
#define IWMReaderNetworkConfig_GetNumProtocolsSupported(This,pcProtocols)    ( (This)->lpVtbl -> GetNumProtocolsSupported(This,pcProtocols) ) 
#define IWMReaderNetworkConfig_GetSupportedProtocolName(This,dwProtocolNum,pwszProtocolName,pcchProtocolName)    ( (This)->lpVtbl -> GetSupportedProtocolName(This,dwProtocolNum,pwszProtocolName,pcchProtocolName) ) 
#define IWMReaderNetworkConfig_AddLoggingUrl(This,pwszUrl)    ( (This)->lpVtbl -> AddLoggingUrl(This,pwszUrl) ) 
#define IWMReaderNetworkConfig_GetLoggingUrl(This,dwIndex,pwszUrl,pcchUrl)    ( (This)->lpVtbl -> GetLoggingUrl(This,dwIndex,pwszUrl,pcchUrl) ) 
#define IWMReaderNetworkConfig_GetLoggingUrlCount(This,pdwUrlCount)    ( (This)->lpVtbl -> GetLoggingUrlCount(This,pdwUrlCount) ) 
#define IWMReaderNetworkConfig_ResetLoggingUrlList(This)    ( (This)->lpVtbl -> ResetLoggingUrlList(This) ) 
#endif
#endif
#ifndef __IWMReaderNetworkConfig2_INTERFACE_DEFINED__
#define __IWMReaderNetworkConfig2_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderNetworkConfig2;
typedef struct IWMReaderNetworkConfig2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderNetworkConfig2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderNetworkConfig2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderNetworkConfig2 * This);
	HRESULT(STDMETHODCALLTYPE * GetBufferingTime) (IWMReaderNetworkConfig2 * This, QWORD * pcnsBufferingTime);
	HRESULT(STDMETHODCALLTYPE * SetBufferingTime) (IWMReaderNetworkConfig2 * This, QWORD cnsBufferingTime);
	HRESULT(STDMETHODCALLTYPE * GetUDPPortRanges) (IWMReaderNetworkConfig2 * This, WM_PORT_NUMBER_RANGE * pRangeArray, DWORD * pcRanges);
	HRESULT(STDMETHODCALLTYPE * SetUDPPortRanges) (IWMReaderNetworkConfig2 * This, WM_PORT_NUMBER_RANGE * pRangeArray, DWORD cRanges);
	HRESULT(STDMETHODCALLTYPE * GetProxySettings) (IWMReaderNetworkConfig2 * This, LPCWSTR pwszProtocol, WMT_PROXY_SETTINGS * pProxySetting);
	HRESULT(STDMETHODCALLTYPE * SetProxySettings) (IWMReaderNetworkConfig2 * This, LPCWSTR pwszProtocol, WMT_PROXY_SETTINGS ProxySetting);
	HRESULT(STDMETHODCALLTYPE * GetProxyHostName) (IWMReaderNetworkConfig2 * This, LPCWSTR pwszProtocol, WCHAR * pwszHostName, DWORD * pcchHostName);
	HRESULT(STDMETHODCALLTYPE * SetProxyHostName) (IWMReaderNetworkConfig2 * This, LPCWSTR pwszProtocol, LPCWSTR pwszHostName);
	HRESULT(STDMETHODCALLTYPE * GetProxyPort) (IWMReaderNetworkConfig2 * This, LPCWSTR pwszProtocol, DWORD * pdwPort);
	HRESULT(STDMETHODCALLTYPE * SetProxyPort) (IWMReaderNetworkConfig2 * This, LPCWSTR pwszProtocol, DWORD dwPort);
	HRESULT(STDMETHODCALLTYPE * GetProxyExceptionList) (IWMReaderNetworkConfig2 * This, LPCWSTR pwszProtocol, WCHAR * pwszExceptionList, DWORD * pcchExceptionList);
	HRESULT(STDMETHODCALLTYPE * SetProxyExceptionList) (IWMReaderNetworkConfig2 * This, LPCWSTR pwszProtocol, LPCWSTR pwszExceptionList);
	HRESULT(STDMETHODCALLTYPE * GetProxyBypassForLocal) (IWMReaderNetworkConfig2 * This, LPCWSTR pwszProtocol, BOOL * pfBypassForLocal);
	HRESULT(STDMETHODCALLTYPE * SetProxyBypassForLocal) (IWMReaderNetworkConfig2 * This, LPCWSTR pwszProtocol, BOOL fBypassForLocal);
	HRESULT(STDMETHODCALLTYPE * GetForceRerunAutoProxyDetection) (IWMReaderNetworkConfig2 * This, BOOL * pfForceRerunDetection);
	HRESULT(STDMETHODCALLTYPE * SetForceRerunAutoProxyDetection) (IWMReaderNetworkConfig2 * This, BOOL fForceRerunDetection);
	HRESULT(STDMETHODCALLTYPE * GetEnableMulticast) (IWMReaderNetworkConfig2 * This, BOOL * pfEnableMulticast);
	HRESULT(STDMETHODCALLTYPE * SetEnableMulticast) (IWMReaderNetworkConfig2 * This, BOOL fEnableMulticast);
	HRESULT(STDMETHODCALLTYPE * GetEnableHTTP) (IWMReaderNetworkConfig2 * This, BOOL * pfEnableHTTP);
	HRESULT(STDMETHODCALLTYPE * SetEnableHTTP) (IWMReaderNetworkConfig2 * This, BOOL fEnableHTTP);
	HRESULT(STDMETHODCALLTYPE * GetEnableUDP) (IWMReaderNetworkConfig2 * This, BOOL * pfEnableUDP);
	HRESULT(STDMETHODCALLTYPE * SetEnableUDP) (IWMReaderNetworkConfig2 * This, BOOL fEnableUDP);
	HRESULT(STDMETHODCALLTYPE * GetEnableTCP) (IWMReaderNetworkConfig2 * This, BOOL * pfEnableTCP);
	HRESULT(STDMETHODCALLTYPE * SetEnableTCP) (IWMReaderNetworkConfig2 * This, BOOL fEnableTCP);
	HRESULT(STDMETHODCALLTYPE * ResetProtocolRollover) (IWMReaderNetworkConfig2 * This);
	HRESULT(STDMETHODCALLTYPE * GetConnectionBandwidth) (IWMReaderNetworkConfig2 * This, DWORD * pdwConnectionBandwidth);
	HRESULT(STDMETHODCALLTYPE * SetConnectionBandwidth) (IWMReaderNetworkConfig2 * This, DWORD dwConnectionBandwidth);
	HRESULT(STDMETHODCALLTYPE * GetNumProtocolsSupported) (IWMReaderNetworkConfig2 * This, DWORD * pcProtocols);
	HRESULT(STDMETHODCALLTYPE * GetSupportedProtocolName) (IWMReaderNetworkConfig2 * This, DWORD dwProtocolNum, WCHAR * pwszProtocolName, DWORD * pcchProtocolName);
	HRESULT(STDMETHODCALLTYPE * AddLoggingUrl) (IWMReaderNetworkConfig2 * This, LPCWSTR pwszUrl);
	HRESULT(STDMETHODCALLTYPE * GetLoggingUrl) (IWMReaderNetworkConfig2 * This, DWORD dwIndex, LPWSTR pwszUrl, DWORD * pcchUrl);
	HRESULT(STDMETHODCALLTYPE * GetLoggingUrlCount) (IWMReaderNetworkConfig2 * This, DWORD * pdwUrlCount);
	HRESULT(STDMETHODCALLTYPE * ResetLoggingUrlList) (IWMReaderNetworkConfig2 * This);
	HRESULT(STDMETHODCALLTYPE * GetEnableContentCaching) (IWMReaderNetworkConfig2 * This, BOOL * pfEnableContentCaching);
	HRESULT(STDMETHODCALLTYPE * SetEnableContentCaching) (IWMReaderNetworkConfig2 * This, BOOL fEnableContentCaching);
	HRESULT(STDMETHODCALLTYPE * GetEnableFastCache) (IWMReaderNetworkConfig2 * This, BOOL * pfEnableFastCache);
	HRESULT(STDMETHODCALLTYPE * SetEnableFastCache) (IWMReaderNetworkConfig2 * This, BOOL fEnableFastCache);
	HRESULT(STDMETHODCALLTYPE * GetAcceleratedStreamingDuration) (IWMReaderNetworkConfig2 * This, QWORD * pcnsAccelDuration);
	HRESULT(STDMETHODCALLTYPE * SetAcceleratedStreamingDuration) (IWMReaderNetworkConfig2 * This, QWORD cnsAccelDuration);
	HRESULT(STDMETHODCALLTYPE * GetAutoReconnectLimit) (IWMReaderNetworkConfig2 * This, DWORD * pdwAutoReconnectLimit);
	HRESULT(STDMETHODCALLTYPE * SetAutoReconnectLimit) (IWMReaderNetworkConfig2 * This, DWORD dwAutoReconnectLimit);
	HRESULT(STDMETHODCALLTYPE * GetEnableResends) (IWMReaderNetworkConfig2 * This, BOOL * pfEnableResends);
	HRESULT(STDMETHODCALLTYPE * SetEnableResends) (IWMReaderNetworkConfig2 * This, BOOL fEnableResends);
	HRESULT(STDMETHODCALLTYPE * GetEnableThinning) (IWMReaderNetworkConfig2 * This, BOOL * pfEnableThinning);
	HRESULT(STDMETHODCALLTYPE * SetEnableThinning) (IWMReaderNetworkConfig2 * This, BOOL fEnableThinning);
	HRESULT(STDMETHODCALLTYPE * GetMaxNetPacketSize) (IWMReaderNetworkConfig2 * This, DWORD * pdwMaxNetPacketSize);
	END_INTERFACE
} IWMReaderNetworkConfig2Vtbl;
interface IWMReaderNetworkConfig2
{
    CONST_VTBL struct IWMReaderNetworkConfig2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderNetworkConfig2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderNetworkConfig2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderNetworkConfig2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderNetworkConfig2_GetBufferingTime(This,pcnsBufferingTime)    ( (This)->lpVtbl -> GetBufferingTime(This,pcnsBufferingTime) ) 
#define IWMReaderNetworkConfig2_SetBufferingTime(This,cnsBufferingTime)    ( (This)->lpVtbl -> SetBufferingTime(This,cnsBufferingTime) ) 
#define IWMReaderNetworkConfig2_GetUDPPortRanges(This,pRangeArray,pcRanges)    ( (This)->lpVtbl -> GetUDPPortRanges(This,pRangeArray,pcRanges) ) 
#define IWMReaderNetworkConfig2_SetUDPPortRanges(This,pRangeArray,cRanges)    ( (This)->lpVtbl -> SetUDPPortRanges(This,pRangeArray,cRanges) ) 
#define IWMReaderNetworkConfig2_GetProxySettings(This,pwszProtocol,pProxySetting)    ( (This)->lpVtbl -> GetProxySettings(This,pwszProtocol,pProxySetting) ) 
#define IWMReaderNetworkConfig2_SetProxySettings(This,pwszProtocol,ProxySetting)    ( (This)->lpVtbl -> SetProxySettings(This,pwszProtocol,ProxySetting) ) 
#define IWMReaderNetworkConfig2_GetProxyHostName(This,pwszProtocol,pwszHostName,pcchHostName)    ( (This)->lpVtbl -> GetProxyHostName(This,pwszProtocol,pwszHostName,pcchHostName) ) 
#define IWMReaderNetworkConfig2_SetProxyHostName(This,pwszProtocol,pwszHostName)    ( (This)->lpVtbl -> SetProxyHostName(This,pwszProtocol,pwszHostName) ) 
#define IWMReaderNetworkConfig2_GetProxyPort(This,pwszProtocol,pdwPort)    ( (This)->lpVtbl -> GetProxyPort(This,pwszProtocol,pdwPort) ) 
#define IWMReaderNetworkConfig2_SetProxyPort(This,pwszProtocol,dwPort)    ( (This)->lpVtbl -> SetProxyPort(This,pwszProtocol,dwPort) ) 
#define IWMReaderNetworkConfig2_GetProxyExceptionList(This,pwszProtocol,pwszExceptionList,pcchExceptionList)    ( (This)->lpVtbl -> GetProxyExceptionList(This,pwszProtocol,pwszExceptionList,pcchExceptionList) ) 
#define IWMReaderNetworkConfig2_SetProxyExceptionList(This,pwszProtocol,pwszExceptionList)    ( (This)->lpVtbl -> SetProxyExceptionList(This,pwszProtocol,pwszExceptionList) ) 
#define IWMReaderNetworkConfig2_GetProxyBypassForLocal(This,pwszProtocol,pfBypassForLocal)    ( (This)->lpVtbl -> GetProxyBypassForLocal(This,pwszProtocol,pfBypassForLocal) ) 
#define IWMReaderNetworkConfig2_SetProxyBypassForLocal(This,pwszProtocol,fBypassForLocal)    ( (This)->lpVtbl -> SetProxyBypassForLocal(This,pwszProtocol,fBypassForLocal) ) 
#define IWMReaderNetworkConfig2_GetForceRerunAutoProxyDetection(This,pfForceRerunDetection)    ( (This)->lpVtbl -> GetForceRerunAutoProxyDetection(This,pfForceRerunDetection) ) 
#define IWMReaderNetworkConfig2_SetForceRerunAutoProxyDetection(This,fForceRerunDetection)    ( (This)->lpVtbl -> SetForceRerunAutoProxyDetection(This,fForceRerunDetection) ) 
#define IWMReaderNetworkConfig2_GetEnableMulticast(This,pfEnableMulticast)    ( (This)->lpVtbl -> GetEnableMulticast(This,pfEnableMulticast) ) 
#define IWMReaderNetworkConfig2_SetEnableMulticast(This,fEnableMulticast)    ( (This)->lpVtbl -> SetEnableMulticast(This,fEnableMulticast) ) 
#define IWMReaderNetworkConfig2_GetEnableHTTP(This,pfEnableHTTP)    ( (This)->lpVtbl -> GetEnableHTTP(This,pfEnableHTTP) ) 
#define IWMReaderNetworkConfig2_SetEnableHTTP(This,fEnableHTTP)    ( (This)->lpVtbl -> SetEnableHTTP(This,fEnableHTTP) ) 
#define IWMReaderNetworkConfig2_GetEnableUDP(This,pfEnableUDP)    ( (This)->lpVtbl -> GetEnableUDP(This,pfEnableUDP) ) 
#define IWMReaderNetworkConfig2_SetEnableUDP(This,fEnableUDP)    ( (This)->lpVtbl -> SetEnableUDP(This,fEnableUDP) ) 
#define IWMReaderNetworkConfig2_GetEnableTCP(This,pfEnableTCP)    ( (This)->lpVtbl -> GetEnableTCP(This,pfEnableTCP) ) 
#define IWMReaderNetworkConfig2_SetEnableTCP(This,fEnableTCP)    ( (This)->lpVtbl -> SetEnableTCP(This,fEnableTCP) ) 
#define IWMReaderNetworkConfig2_ResetProtocolRollover(This)    ( (This)->lpVtbl -> ResetProtocolRollover(This) ) 
#define IWMReaderNetworkConfig2_GetConnectionBandwidth(This,pdwConnectionBandwidth)    ( (This)->lpVtbl -> GetConnectionBandwidth(This,pdwConnectionBandwidth) ) 
#define IWMReaderNetworkConfig2_SetConnectionBandwidth(This,dwConnectionBandwidth)    ( (This)->lpVtbl -> SetConnectionBandwidth(This,dwConnectionBandwidth) ) 
#define IWMReaderNetworkConfig2_GetNumProtocolsSupported(This,pcProtocols)    ( (This)->lpVtbl -> GetNumProtocolsSupported(This,pcProtocols) ) 
#define IWMReaderNetworkConfig2_GetSupportedProtocolName(This,dwProtocolNum,pwszProtocolName,pcchProtocolName)    ( (This)->lpVtbl -> GetSupportedProtocolName(This,dwProtocolNum,pwszProtocolName,pcchProtocolName) ) 
#define IWMReaderNetworkConfig2_AddLoggingUrl(This,pwszUrl)    ( (This)->lpVtbl -> AddLoggingUrl(This,pwszUrl) ) 
#define IWMReaderNetworkConfig2_GetLoggingUrl(This,dwIndex,pwszUrl,pcchUrl)    ( (This)->lpVtbl -> GetLoggingUrl(This,dwIndex,pwszUrl,pcchUrl) ) 
#define IWMReaderNetworkConfig2_GetLoggingUrlCount(This,pdwUrlCount)    ( (This)->lpVtbl -> GetLoggingUrlCount(This,pdwUrlCount) ) 
#define IWMReaderNetworkConfig2_ResetLoggingUrlList(This)    ( (This)->lpVtbl -> ResetLoggingUrlList(This) ) 
#define IWMReaderNetworkConfig2_GetEnableContentCaching(This,pfEnableContentCaching)    ( (This)->lpVtbl -> GetEnableContentCaching(This,pfEnableContentCaching) ) 
#define IWMReaderNetworkConfig2_SetEnableContentCaching(This,fEnableContentCaching)    ( (This)->lpVtbl -> SetEnableContentCaching(This,fEnableContentCaching) ) 
#define IWMReaderNetworkConfig2_GetEnableFastCache(This,pfEnableFastCache)    ( (This)->lpVtbl -> GetEnableFastCache(This,pfEnableFastCache) ) 
#define IWMReaderNetworkConfig2_SetEnableFastCache(This,fEnableFastCache)    ( (This)->lpVtbl -> SetEnableFastCache(This,fEnableFastCache) ) 
#define IWMReaderNetworkConfig2_GetAcceleratedStreamingDuration(This,pcnsAccelDuration)    ( (This)->lpVtbl -> GetAcceleratedStreamingDuration(This,pcnsAccelDuration) ) 
#define IWMReaderNetworkConfig2_SetAcceleratedStreamingDuration(This,cnsAccelDuration)    ( (This)->lpVtbl -> SetAcceleratedStreamingDuration(This,cnsAccelDuration) ) 
#define IWMReaderNetworkConfig2_GetAutoReconnectLimit(This,pdwAutoReconnectLimit)    ( (This)->lpVtbl -> GetAutoReconnectLimit(This,pdwAutoReconnectLimit) ) 
#define IWMReaderNetworkConfig2_SetAutoReconnectLimit(This,dwAutoReconnectLimit)    ( (This)->lpVtbl -> SetAutoReconnectLimit(This,dwAutoReconnectLimit) ) 
#define IWMReaderNetworkConfig2_GetEnableResends(This,pfEnableResends)    ( (This)->lpVtbl -> GetEnableResends(This,pfEnableResends) ) 
#define IWMReaderNetworkConfig2_SetEnableResends(This,fEnableResends)    ( (This)->lpVtbl -> SetEnableResends(This,fEnableResends) ) 
#define IWMReaderNetworkConfig2_GetEnableThinning(This,pfEnableThinning)    ( (This)->lpVtbl -> GetEnableThinning(This,pfEnableThinning) ) 
#define IWMReaderNetworkConfig2_SetEnableThinning(This,fEnableThinning)    ( (This)->lpVtbl -> SetEnableThinning(This,fEnableThinning) ) 
#define IWMReaderNetworkConfig2_GetMaxNetPacketSize(This,pdwMaxNetPacketSize)    ( (This)->lpVtbl -> GetMaxNetPacketSize(This,pdwMaxNetPacketSize) ) 
#endif
#endif
#ifndef __IWMReaderStreamClock_INTERFACE_DEFINED__
#define __IWMReaderStreamClock_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderStreamClock;
typedef struct IWMReaderStreamClockVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderStreamClock * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderStreamClock * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderStreamClock * This);
	HRESULT(STDMETHODCALLTYPE * GetTime) (IWMReaderStreamClock * This, QWORD * pcnsNow);
	HRESULT(STDMETHODCALLTYPE * SetTimer) (IWMReaderStreamClock * This, QWORD cnsWhen, void *pvParam, DWORD * pdwTimerId);
	HRESULT(STDMETHODCALLTYPE * KillTimer) (IWMReaderStreamClock * This, DWORD dwTimerId);
	END_INTERFACE
} IWMReaderStreamClockVtbl;
interface IWMReaderStreamClock
{
    CONST_VTBL struct IWMReaderStreamClockVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderStreamClock_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderStreamClock_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderStreamClock_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderStreamClock_GetTime(This,pcnsNow)    ( (This)->lpVtbl -> GetTime(This,pcnsNow) ) 
#define IWMReaderStreamClock_SetTimer(This,cnsWhen,pvParam,pdwTimerId)    ( (This)->lpVtbl -> SetTimer(This,cnsWhen,pvParam,pdwTimerId) ) 
#define IWMReaderStreamClock_KillTimer(This,dwTimerId)    ( (This)->lpVtbl -> KillTimer(This,dwTimerId) ) 
#endif
#endif
#ifndef __IWMIndexer_INTERFACE_DEFINED__
#define __IWMIndexer_INTERFACE_DEFINED__ 
extern const IID IID_IWMIndexer;
typedef struct IWMIndexerVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMIndexer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMIndexer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMIndexer * This);
	HRESULT(STDMETHODCALLTYPE * StartIndexing) (IWMIndexer * This, const WCHAR * pwszURL, IWMStatusCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IWMIndexer * This);
	END_INTERFACE
} IWMIndexerVtbl;
interface IWMIndexer
{
    CONST_VTBL struct IWMIndexerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMIndexer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMIndexer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMIndexer_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMIndexer_StartIndexing(This,pwszURL,pCallback,pvContext)    ( (This)->lpVtbl -> StartIndexing(This,pwszURL,pCallback,pvContext) ) 
#define IWMIndexer_Cancel(This)    ( (This)->lpVtbl -> Cancel(This) ) 
#endif
#endif
#ifndef __IWMIndexer2_INTERFACE_DEFINED__
#define __IWMIndexer2_INTERFACE_DEFINED__ 
extern const IID IID_IWMIndexer2;
typedef struct IWMIndexer2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMIndexer2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMIndexer2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMIndexer2 * This);
	HRESULT(STDMETHODCALLTYPE * StartIndexing) (IWMIndexer2 * This, const WCHAR * pwszURL, IWMStatusCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IWMIndexer2 * This);
	HRESULT(STDMETHODCALLTYPE * Configure) (IWMIndexer2 * This, WORD wStreamNum, WMT_INDEXER_TYPE nIndexerType, void *pvInterval, void *pvIndexType);
	END_INTERFACE
} IWMIndexer2Vtbl;
interface IWMIndexer2
{
    CONST_VTBL struct IWMIndexer2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMIndexer2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMIndexer2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMIndexer2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMIndexer2_StartIndexing(This,pwszURL,pCallback,pvContext)    ( (This)->lpVtbl -> StartIndexing(This,pwszURL,pCallback,pvContext) ) 
#define IWMIndexer2_Cancel(This)    ( (This)->lpVtbl -> Cancel(This) ) 
#define IWMIndexer2_Configure(This,wStreamNum,nIndexerType,pvInterval,pvIndexType)    ( (This)->lpVtbl -> Configure(This,wStreamNum,nIndexerType,pvInterval,pvIndexType) ) 
#endif
#endif
#ifndef __IWMLicenseBackup_INTERFACE_DEFINED__
#define __IWMLicenseBackup_INTERFACE_DEFINED__ 
extern const IID IID_IWMLicenseBackup;
typedef struct IWMLicenseBackupVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMLicenseBackup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMLicenseBackup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMLicenseBackup * This);
	HRESULT(STDMETHODCALLTYPE * BackupLicenses) (IWMLicenseBackup * This, DWORD dwFlags, IWMStatusCallback * pCallback);
	HRESULT(STDMETHODCALLTYPE * CancelLicenseBackup) (IWMLicenseBackup * This);
	END_INTERFACE
} IWMLicenseBackupVtbl;
interface IWMLicenseBackup
{
    CONST_VTBL struct IWMLicenseBackupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMLicenseBackup_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMLicenseBackup_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMLicenseBackup_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMLicenseBackup_BackupLicenses(This,dwFlags,pCallback)    ( (This)->lpVtbl -> BackupLicenses(This,dwFlags,pCallback) ) 
#define IWMLicenseBackup_CancelLicenseBackup(This)    ( (This)->lpVtbl -> CancelLicenseBackup(This) ) 
#endif
#endif
#ifndef __IWMLicenseRestore_INTERFACE_DEFINED__
#define __IWMLicenseRestore_INTERFACE_DEFINED__ 
extern const IID IID_IWMLicenseRestore;
typedef struct IWMLicenseRestoreVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMLicenseRestore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMLicenseRestore * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMLicenseRestore * This);
	HRESULT(STDMETHODCALLTYPE * RestoreLicenses) (IWMLicenseRestore * This, DWORD dwFlags, IWMStatusCallback * pCallback);
	HRESULT(STDMETHODCALLTYPE * CancelLicenseRestore) (IWMLicenseRestore * This);
	END_INTERFACE
} IWMLicenseRestoreVtbl;
interface IWMLicenseRestore
{
    CONST_VTBL struct IWMLicenseRestoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMLicenseRestore_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMLicenseRestore_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMLicenseRestore_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMLicenseRestore_RestoreLicenses(This,dwFlags,pCallback)    ( (This)->lpVtbl -> RestoreLicenses(This,dwFlags,pCallback) ) 
#define IWMLicenseRestore_CancelLicenseRestore(This)    ( (This)->lpVtbl -> CancelLicenseRestore(This) ) 
#endif
#endif
#ifndef __IWMBackupRestoreProps_INTERFACE_DEFINED__
#define __IWMBackupRestoreProps_INTERFACE_DEFINED__ 
extern const IID IID_IWMBackupRestoreProps;
typedef struct IWMBackupRestorePropsVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMBackupRestoreProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMBackupRestoreProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMBackupRestoreProps * This);
	HRESULT(STDMETHODCALLTYPE * GetPropCount) (IWMBackupRestoreProps * This, WORD * pcProps);
	HRESULT(STDMETHODCALLTYPE * GetPropByIndex) (IWMBackupRestoreProps * This, WORD wIndex, WCHAR * pwszName, WORD * pcchNameLen, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * GetPropByName) (IWMBackupRestoreProps * This, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * SetProp) (IWMBackupRestoreProps * This, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, WORD cbLength);
	HRESULT(STDMETHODCALLTYPE * RemoveProp) (IWMBackupRestoreProps * This, LPCWSTR pcwszName);
	HRESULT(STDMETHODCALLTYPE * RemoveAllProps) (IWMBackupRestoreProps * This);
	END_INTERFACE
} IWMBackupRestorePropsVtbl;
interface IWMBackupRestoreProps
{
    CONST_VTBL struct IWMBackupRestorePropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMBackupRestoreProps_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMBackupRestoreProps_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMBackupRestoreProps_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMBackupRestoreProps_GetPropCount(This,pcProps)    ( (This)->lpVtbl -> GetPropCount(This,pcProps) ) 
#define IWMBackupRestoreProps_GetPropByIndex(This,wIndex,pwszName,pcchNameLen,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetPropByIndex(This,wIndex,pwszName,pcchNameLen,pType,pValue,pcbLength) ) 
#define IWMBackupRestoreProps_GetPropByName(This,pszName,pType,pValue,pcbLength)    ( (This)->lpVtbl -> GetPropByName(This,pszName,pType,pValue,pcbLength) ) 
#define IWMBackupRestoreProps_SetProp(This,pszName,Type,pValue,cbLength)    ( (This)->lpVtbl -> SetProp(This,pszName,Type,pValue,cbLength) ) 
#define IWMBackupRestoreProps_RemoveProp(This,pcwszName)    ( (This)->lpVtbl -> RemoveProp(This,pcwszName) ) 
#define IWMBackupRestoreProps_RemoveAllProps(This)    ( (This)->lpVtbl -> RemoveAllProps(This) ) 
#endif
#endif
#ifndef __IWMCodecInfo_INTERFACE_DEFINED__
#define __IWMCodecInfo_INTERFACE_DEFINED__ 
extern const IID IID_IWMCodecInfo;
typedef struct IWMCodecInfoVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMCodecInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMCodecInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMCodecInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetCodecInfoCount) (IWMCodecInfo * This, REFGUID guidType, DWORD * pcCodecs);
	HRESULT(STDMETHODCALLTYPE * GetCodecFormatCount) (IWMCodecInfo * This, REFGUID guidType, DWORD dwCodecIndex, DWORD * pcFormat);
	HRESULT(STDMETHODCALLTYPE * GetCodecFormat) (IWMCodecInfo * This, REFGUID guidType, DWORD dwCodecIndex, DWORD dwFormatIndex, IWMStreamConfig ** ppIStreamConfig);
	END_INTERFACE
} IWMCodecInfoVtbl;
interface IWMCodecInfo
{
    CONST_VTBL struct IWMCodecInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMCodecInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMCodecInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMCodecInfo_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMCodecInfo_GetCodecInfoCount(This,guidType,pcCodecs)    ( (This)->lpVtbl -> GetCodecInfoCount(This,guidType,pcCodecs) ) 
#define IWMCodecInfo_GetCodecFormatCount(This,guidType,dwCodecIndex,pcFormat)    ( (This)->lpVtbl -> GetCodecFormatCount(This,guidType,dwCodecIndex,pcFormat) ) 
#define IWMCodecInfo_GetCodecFormat(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig)    ( (This)->lpVtbl -> GetCodecFormat(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig) ) 
#endif
#endif
#ifndef __IWMCodecInfo2_INTERFACE_DEFINED__
#define __IWMCodecInfo2_INTERFACE_DEFINED__ 
extern const IID IID_IWMCodecInfo2;
typedef struct IWMCodecInfo2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMCodecInfo2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMCodecInfo2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMCodecInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * GetCodecInfoCount) (IWMCodecInfo2 * This, REFGUID guidType, DWORD * pcCodecs);
	HRESULT(STDMETHODCALLTYPE * GetCodecFormatCount) (IWMCodecInfo2 * This, REFGUID guidType, DWORD dwCodecIndex, DWORD * pcFormat);
	HRESULT(STDMETHODCALLTYPE * GetCodecFormat) (IWMCodecInfo2 * This, REFGUID guidType, DWORD dwCodecIndex, DWORD dwFormatIndex, IWMStreamConfig ** ppIStreamConfig);
	HRESULT(STDMETHODCALLTYPE * GetCodecName) (IWMCodecInfo2 * This, REFGUID guidType, DWORD dwCodecIndex, WCHAR * wszName, DWORD * pcchName);
	HRESULT(STDMETHODCALLTYPE * GetCodecFormatDesc) (IWMCodecInfo2 * This, REFGUID guidType, DWORD dwCodecIndex, DWORD dwFormatIndex, IWMStreamConfig ** ppIStreamConfig, WCHAR * wszDesc, DWORD * pcchDesc);
	END_INTERFACE
} IWMCodecInfo2Vtbl;
interface IWMCodecInfo2
{
    CONST_VTBL struct IWMCodecInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMCodecInfo2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMCodecInfo2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMCodecInfo2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMCodecInfo2_GetCodecInfoCount(This,guidType,pcCodecs)    ( (This)->lpVtbl -> GetCodecInfoCount(This,guidType,pcCodecs) ) 
#define IWMCodecInfo2_GetCodecFormatCount(This,guidType,dwCodecIndex,pcFormat)    ( (This)->lpVtbl -> GetCodecFormatCount(This,guidType,dwCodecIndex,pcFormat) ) 
#define IWMCodecInfo2_GetCodecFormat(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig)    ( (This)->lpVtbl -> GetCodecFormat(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig) ) 
#define IWMCodecInfo2_GetCodecName(This,guidType,dwCodecIndex,wszName,pcchName)    ( (This)->lpVtbl -> GetCodecName(This,guidType,dwCodecIndex,wszName,pcchName) ) 
#define IWMCodecInfo2_GetCodecFormatDesc(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig,wszDesc,pcchDesc)    ( (This)->lpVtbl -> GetCodecFormatDesc(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig,wszDesc,pcchDesc) ) 
#endif
#endif
#ifndef __IWMCodecInfo3_INTERFACE_DEFINED__
#define __IWMCodecInfo3_INTERFACE_DEFINED__ 
extern const IID IID_IWMCodecInfo3;
typedef struct IWMCodecInfo3Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMCodecInfo3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMCodecInfo3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMCodecInfo3 * This);
	HRESULT(STDMETHODCALLTYPE * GetCodecInfoCount) (IWMCodecInfo3 * This, REFGUID guidType, DWORD * pcCodecs);
	HRESULT(STDMETHODCALLTYPE * GetCodecFormatCount) (IWMCodecInfo3 * This, REFGUID guidType, DWORD dwCodecIndex, DWORD * pcFormat);
	HRESULT(STDMETHODCALLTYPE * GetCodecFormat) (IWMCodecInfo3 * This, REFGUID guidType, DWORD dwCodecIndex, DWORD dwFormatIndex, IWMStreamConfig ** ppIStreamConfig);
	HRESULT(STDMETHODCALLTYPE * GetCodecName) (IWMCodecInfo3 * This, REFGUID guidType, DWORD dwCodecIndex, WCHAR * wszName, DWORD * pcchName);
	HRESULT(STDMETHODCALLTYPE * GetCodecFormatDesc) (IWMCodecInfo3 * This, REFGUID guidType, DWORD dwCodecIndex, DWORD dwFormatIndex, IWMStreamConfig ** ppIStreamConfig, WCHAR * wszDesc, DWORD * pcchDesc);
	HRESULT(STDMETHODCALLTYPE * GetCodecFormatProp) (IWMCodecInfo3 * This, REFGUID guidType, DWORD dwCodecIndex, DWORD dwFormatIndex, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, DWORD * pdwSize);
	HRESULT(STDMETHODCALLTYPE * GetCodecProp) (IWMCodecInfo3 * This, REFGUID guidType, DWORD dwCodecIndex, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, DWORD * pdwSize);
	HRESULT(STDMETHODCALLTYPE * SetCodecEnumerationSetting) (IWMCodecInfo3 * This, REFGUID guidType, DWORD dwCodecIndex, LPCWSTR pszName, WMT_ATTR_DATATYPE Type, const BYTE * pValue, DWORD dwSize);
	HRESULT(STDMETHODCALLTYPE * GetCodecEnumerationSetting) (IWMCodecInfo3 * This, REFGUID guidType, DWORD dwCodecIndex, LPCWSTR pszName, WMT_ATTR_DATATYPE * pType, BYTE * pValue, DWORD * pdwSize);
	END_INTERFACE
} IWMCodecInfo3Vtbl;
interface IWMCodecInfo3
{
    CONST_VTBL struct IWMCodecInfo3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMCodecInfo3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMCodecInfo3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMCodecInfo3_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMCodecInfo3_GetCodecInfoCount(This,guidType,pcCodecs)    ( (This)->lpVtbl -> GetCodecInfoCount(This,guidType,pcCodecs) ) 
#define IWMCodecInfo3_GetCodecFormatCount(This,guidType,dwCodecIndex,pcFormat)    ( (This)->lpVtbl -> GetCodecFormatCount(This,guidType,dwCodecIndex,pcFormat) ) 
#define IWMCodecInfo3_GetCodecFormat(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig)    ( (This)->lpVtbl -> GetCodecFormat(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig) ) 
#define IWMCodecInfo3_GetCodecName(This,guidType,dwCodecIndex,wszName,pcchName)    ( (This)->lpVtbl -> GetCodecName(This,guidType,dwCodecIndex,wszName,pcchName) ) 
#define IWMCodecInfo3_GetCodecFormatDesc(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig,wszDesc,pcchDesc)    ( (This)->lpVtbl -> GetCodecFormatDesc(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig,wszDesc,pcchDesc) ) 
#define IWMCodecInfo3_GetCodecFormatProp(This,guidType,dwCodecIndex,dwFormatIndex,pszName,pType,pValue,pdwSize)    ( (This)->lpVtbl -> GetCodecFormatProp(This,guidType,dwCodecIndex,dwFormatIndex,pszName,pType,pValue,pdwSize) ) 
#define IWMCodecInfo3_GetCodecProp(This,guidType,dwCodecIndex,pszName,pType,pValue,pdwSize)    ( (This)->lpVtbl -> GetCodecProp(This,guidType,dwCodecIndex,pszName,pType,pValue,pdwSize) ) 
#define IWMCodecInfo3_SetCodecEnumerationSetting(This,guidType,dwCodecIndex,pszName,Type,pValue,dwSize)    ( (This)->lpVtbl -> SetCodecEnumerationSetting(This,guidType,dwCodecIndex,pszName,Type,pValue,dwSize) ) 
#define IWMCodecInfo3_GetCodecEnumerationSetting(This,guidType,dwCodecIndex,pszName,pType,pValue,pdwSize)    ( (This)->lpVtbl -> GetCodecEnumerationSetting(This,guidType,dwCodecIndex,pszName,pType,pValue,pdwSize) ) 
#endif
#endif
#ifndef __IWMLanguageList_INTERFACE_DEFINED__
#define __IWMLanguageList_INTERFACE_DEFINED__ 
extern const IID IID_IWMLanguageList;
typedef struct IWMLanguageListVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMLanguageList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMLanguageList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMLanguageList * This);
	HRESULT(STDMETHODCALLTYPE * GetLanguageCount) (IWMLanguageList * This, WORD * pwCount);
	HRESULT(STDMETHODCALLTYPE * GetLanguageDetails) (IWMLanguageList * This, WORD wIndex, WCHAR * pwszLanguageString, WORD * pcchLanguageStringLength);
	HRESULT(STDMETHODCALLTYPE * AddLanguageByRFC1766String) (IWMLanguageList * This, LPCWSTR_WMSDK_TYPE_SAFE pwszLanguageString, WORD * pwIndex);
	END_INTERFACE
} IWMLanguageListVtbl;
interface IWMLanguageList
{
    CONST_VTBL struct IWMLanguageListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMLanguageList_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMLanguageList_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMLanguageList_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMLanguageList_GetLanguageCount(This,pwCount)    ( (This)->lpVtbl -> GetLanguageCount(This,pwCount) ) 
#define IWMLanguageList_GetLanguageDetails(This,wIndex,pwszLanguageString,pcchLanguageStringLength)    ( (This)->lpVtbl -> GetLanguageDetails(This,wIndex,pwszLanguageString,pcchLanguageStringLength) ) 
#define IWMLanguageList_AddLanguageByRFC1766String(This,pwszLanguageString,pwIndex)    ( (This)->lpVtbl -> AddLanguageByRFC1766String(This,pwszLanguageString,pwIndex) ) 
#endif
#endif
#ifndef __IWMWriterPushSink_INTERFACE_DEFINED__
#define __IWMWriterPushSink_INTERFACE_DEFINED__ 
extern const IID IID_IWMWriterPushSink;
typedef struct IWMWriterPushSinkVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWriterPushSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWriterPushSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWriterPushSink * This);
	HRESULT(STDMETHODCALLTYPE * OnHeader) (IWMWriterPushSink * This, INSSBuffer * pHeader);
	HRESULT(STDMETHODCALLTYPE * IsRealTime) (IWMWriterPushSink * This, BOOL * pfRealTime);
	HRESULT(STDMETHODCALLTYPE * AllocateDataUnit) (IWMWriterPushSink * This, DWORD cbDataUnit, INSSBuffer ** ppDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnDataUnit) (IWMWriterPushSink * This, INSSBuffer * pDataUnit);
	HRESULT(STDMETHODCALLTYPE * OnEndWriting) (IWMWriterPushSink * This);
	HRESULT(STDMETHODCALLTYPE * Connect) (IWMWriterPushSink * This, LPCWSTR pwszURL, LPCWSTR pwszTemplateURL, BOOL fAutoDestroy);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IWMWriterPushSink * This);
	HRESULT(STDMETHODCALLTYPE * EndSession) (IWMWriterPushSink * This);
	END_INTERFACE
} IWMWriterPushSinkVtbl;
interface IWMWriterPushSink
{
    CONST_VTBL struct IWMWriterPushSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWriterPushSink_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWriterPushSink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWriterPushSink_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWriterPushSink_OnHeader(This,pHeader)    ( (This)->lpVtbl -> OnHeader(This,pHeader) ) 
#define IWMWriterPushSink_IsRealTime(This,pfRealTime)    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) ) 
#define IWMWriterPushSink_AllocateDataUnit(This,cbDataUnit,ppDataUnit)    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) ) 
#define IWMWriterPushSink_OnDataUnit(This,pDataUnit)    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) ) 
#define IWMWriterPushSink_OnEndWriting(This)    ( (This)->lpVtbl -> OnEndWriting(This) ) 
#define IWMWriterPushSink_Connect(This,pwszURL,pwszTemplateURL,fAutoDestroy)    ( (This)->lpVtbl -> Connect(This,pwszURL,pwszTemplateURL,fAutoDestroy) ) 
#define IWMWriterPushSink_Disconnect(This)    ( (This)->lpVtbl -> Disconnect(This) ) 
#define IWMWriterPushSink_EndSession(This)    ( (This)->lpVtbl -> EndSession(This) ) 
#endif
#endif
#ifndef __IWMDeviceRegistration_INTERFACE_DEFINED__
#define __IWMDeviceRegistration_INTERFACE_DEFINED__ 
extern const IID IID_IWMDeviceRegistration;
typedef struct IWMDeviceRegistrationVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDeviceRegistration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDeviceRegistration * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDeviceRegistration * This);
	HRESULT(STDMETHODCALLTYPE * RegisterDevice) (IWMDeviceRegistration * This, DWORD dwRegisterType, BYTE * pbCertificate, DWORD cbCertificate, DRM_VAL16 SerialNumber, IWMRegisteredDevice ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * UnregisterDevice) (IWMDeviceRegistration * This, DWORD dwRegisterType, BYTE * pbCertificate, DWORD cbCertificate, DRM_VAL16 SerialNumber);
	HRESULT(STDMETHODCALLTYPE * GetRegistrationStats) (IWMDeviceRegistration * This, DWORD dwRegisterType, DWORD * pcRegisteredDevices);
	HRESULT(STDMETHODCALLTYPE * GetFirstRegisteredDevice) (IWMDeviceRegistration * This, DWORD dwRegisterType, IWMRegisteredDevice ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetNextRegisteredDevice) (IWMDeviceRegistration * This, IWMRegisteredDevice ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetRegisteredDeviceByID) (IWMDeviceRegistration * This, DWORD dwRegisterType, BYTE * pbCertificate, DWORD cbCertificate, DRM_VAL16 SerialNumber, IWMRegisteredDevice ** ppDevice);
	END_INTERFACE
} IWMDeviceRegistrationVtbl;
interface IWMDeviceRegistration
{
    CONST_VTBL struct IWMDeviceRegistrationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDeviceRegistration_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDeviceRegistration_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDeviceRegistration_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDeviceRegistration_RegisterDevice(This,dwRegisterType,pbCertificate,cbCertificate,SerialNumber,ppDevice)    ( (This)->lpVtbl -> RegisterDevice(This,dwRegisterType,pbCertificate,cbCertificate,SerialNumber,ppDevice) ) 
#define IWMDeviceRegistration_UnregisterDevice(This,dwRegisterType,pbCertificate,cbCertificate,SerialNumber)    ( (This)->lpVtbl -> UnregisterDevice(This,dwRegisterType,pbCertificate,cbCertificate,SerialNumber) ) 
#define IWMDeviceRegistration_GetRegistrationStats(This,dwRegisterType,pcRegisteredDevices)    ( (This)->lpVtbl -> GetRegistrationStats(This,dwRegisterType,pcRegisteredDevices) ) 
#define IWMDeviceRegistration_GetFirstRegisteredDevice(This,dwRegisterType,ppDevice)    ( (This)->lpVtbl -> GetFirstRegisteredDevice(This,dwRegisterType,ppDevice) ) 
#define IWMDeviceRegistration_GetNextRegisteredDevice(This,ppDevice)    ( (This)->lpVtbl -> GetNextRegisteredDevice(This,ppDevice) ) 
#define IWMDeviceRegistration_GetRegisteredDeviceByID(This,dwRegisterType,pbCertificate,cbCertificate,SerialNumber,ppDevice)    ( (This)->lpVtbl -> GetRegisteredDeviceByID(This,dwRegisterType,pbCertificate,cbCertificate,SerialNumber,ppDevice) ) 
#endif
#endif
#ifndef __IWMRegisteredDevice_INTERFACE_DEFINED__
#define __IWMRegisteredDevice_INTERFACE_DEFINED__ 
extern const IID IID_IWMRegisteredDevice;
typedef struct IWMRegisteredDeviceVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMRegisteredDevice * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMRegisteredDevice * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMRegisteredDevice * This);
	HRESULT(STDMETHODCALLTYPE * GetDeviceSerialNumber) (IWMRegisteredDevice * This, DRM_VAL16 * pSerialNumber);
	HRESULT(STDMETHODCALLTYPE * GetDeviceCertificate) (IWMRegisteredDevice * This, INSSBuffer ** ppCertificate);
	HRESULT(STDMETHODCALLTYPE * GetDeviceType) (IWMRegisteredDevice * This, DWORD * pdwType);
	HRESULT(STDMETHODCALLTYPE * GetAttributeCount) (IWMRegisteredDevice * This, DWORD * pcAttributes);
	HRESULT(STDMETHODCALLTYPE * GetAttributeByIndex) (IWMRegisteredDevice * This, DWORD dwIndex, BSTR * pbstrName, BSTR * pbstrValue);
	HRESULT(STDMETHODCALLTYPE * GetAttributeByName) (IWMRegisteredDevice * This, BSTR bstrName, BSTR * pbstrValue);
	HRESULT(STDMETHODCALLTYPE * SetAttributeByName) (IWMRegisteredDevice * This, BSTR bstrName, BSTR bstrValue);
	HRESULT(STDMETHODCALLTYPE * Approve) (IWMRegisteredDevice * This, BOOL fApprove);
	HRESULT(STDMETHODCALLTYPE * IsValid) (IWMRegisteredDevice * This, BOOL * pfValid);
	HRESULT(STDMETHODCALLTYPE * IsApproved) (IWMRegisteredDevice * This, BOOL * pfApproved);
	HRESULT(STDMETHODCALLTYPE * IsWmdrmCompliant) (IWMRegisteredDevice * This, BOOL * pfCompliant);
	HRESULT(STDMETHODCALLTYPE * IsOpened) (IWMRegisteredDevice * This, BOOL * pfOpened);
	HRESULT(STDMETHODCALLTYPE * Open) (IWMRegisteredDevice * This);
	HRESULT(STDMETHODCALLTYPE * Close) (IWMRegisteredDevice * This);
	END_INTERFACE
} IWMRegisteredDeviceVtbl;
interface IWMRegisteredDevice
{
    CONST_VTBL struct IWMRegisteredDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMRegisteredDevice_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMRegisteredDevice_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMRegisteredDevice_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMRegisteredDevice_GetDeviceSerialNumber(This,pSerialNumber)    ( (This)->lpVtbl -> GetDeviceSerialNumber(This,pSerialNumber) ) 
#define IWMRegisteredDevice_GetDeviceCertificate(This,ppCertificate)    ( (This)->lpVtbl -> GetDeviceCertificate(This,ppCertificate) ) 
#define IWMRegisteredDevice_GetDeviceType(This,pdwType)    ( (This)->lpVtbl -> GetDeviceType(This,pdwType) ) 
#define IWMRegisteredDevice_GetAttributeCount(This,pcAttributes)    ( (This)->lpVtbl -> GetAttributeCount(This,pcAttributes) ) 
#define IWMRegisteredDevice_GetAttributeByIndex(This,dwIndex,pbstrName,pbstrValue)    ( (This)->lpVtbl -> GetAttributeByIndex(This,dwIndex,pbstrName,pbstrValue) ) 
#define IWMRegisteredDevice_GetAttributeByName(This,bstrName,pbstrValue)    ( (This)->lpVtbl -> GetAttributeByName(This,bstrName,pbstrValue) ) 
#define IWMRegisteredDevice_SetAttributeByName(This,bstrName,bstrValue)    ( (This)->lpVtbl -> SetAttributeByName(This,bstrName,bstrValue) ) 
#define IWMRegisteredDevice_Approve(This,fApprove)    ( (This)->lpVtbl -> Approve(This,fApprove) ) 
#define IWMRegisteredDevice_IsValid(This,pfValid)    ( (This)->lpVtbl -> IsValid(This,pfValid) ) 
#define IWMRegisteredDevice_IsApproved(This,pfApproved)    ( (This)->lpVtbl -> IsApproved(This,pfApproved) ) 
#define IWMRegisteredDevice_IsWmdrmCompliant(This,pfCompliant)    ( (This)->lpVtbl -> IsWmdrmCompliant(This,pfCompliant) ) 
#define IWMRegisteredDevice_IsOpened(This,pfOpened)    ( (This)->lpVtbl -> IsOpened(This,pfOpened) ) 
#define IWMRegisteredDevice_Open(This)    ( (This)->lpVtbl -> Open(This) ) 
#define IWMRegisteredDevice_Close(This)    ( (This)->lpVtbl -> Close(This) ) 
#endif
#endif
#ifndef __IWMProximityDetection_INTERFACE_DEFINED__
#define __IWMProximityDetection_INTERFACE_DEFINED__ 
extern const IID IID_IWMProximityDetection;
typedef struct IWMProximityDetectionVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMProximityDetection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMProximityDetection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMProximityDetection * This);
	HRESULT(STDMETHODCALLTYPE * StartDetection) (IWMProximityDetection * This, BYTE * pbRegistrationMsg, DWORD cbRegistrationMsg, BYTE * pbLocalAddress, DWORD cbLocalAddress, DWORD dwExtraPortsAllowed, INSSBuffer ** ppRegistrationResponseMsg, IWMStatusCallback * pCallback, void *pvContext);
	END_INTERFACE
} IWMProximityDetectionVtbl;
interface IWMProximityDetection
{
    CONST_VTBL struct IWMProximityDetectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMProximityDetection_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMProximityDetection_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMProximityDetection_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMProximityDetection_StartDetection(This,pbRegistrationMsg,cbRegistrationMsg,pbLocalAddress,cbLocalAddress,dwExtraPortsAllowed,ppRegistrationResponseMsg,pCallback,pvContext)    ( (This)->lpVtbl -> StartDetection(This,pbRegistrationMsg,cbRegistrationMsg,pbLocalAddress,cbLocalAddress,dwExtraPortsAllowed,ppRegistrationResponseMsg,pCallback,pvContext) ) 
#endif
#endif
#ifndef __IWMDRMMessageParser_INTERFACE_DEFINED__
#define __IWMDRMMessageParser_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMMessageParser;
typedef struct IWMDRMMessageParserVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMMessageParser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMMessageParser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMMessageParser * This);
	HRESULT(STDMETHODCALLTYPE * ParseRegistrationReqMsg) (IWMDRMMessageParser * This, BYTE * pbRegistrationReqMsg, DWORD cbRegistrationReqMsg, INSSBuffer ** ppDeviceCert, DRM_VAL16 * pDeviceSerialNumber);
	HRESULT(STDMETHODCALLTYPE * ParseLicenseRequestMsg) (IWMDRMMessageParser * This, BYTE * pbLicenseRequestMsg, DWORD cbLicenseRequestMsg, INSSBuffer ** ppDeviceCert, DRM_VAL16 * pDeviceSerialNumber, BSTR * pbstrAction);
	END_INTERFACE
} IWMDRMMessageParserVtbl;
interface IWMDRMMessageParser
{
    CONST_VTBL struct IWMDRMMessageParserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMMessageParser_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMMessageParser_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMMessageParser_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMMessageParser_ParseRegistrationReqMsg(This,pbRegistrationReqMsg,cbRegistrationReqMsg,ppDeviceCert,pDeviceSerialNumber)    ( (This)->lpVtbl -> ParseRegistrationReqMsg(This,pbRegistrationReqMsg,cbRegistrationReqMsg,ppDeviceCert,pDeviceSerialNumber) ) 
#define IWMDRMMessageParser_ParseLicenseRequestMsg(This,pbLicenseRequestMsg,cbLicenseRequestMsg,ppDeviceCert,pDeviceSerialNumber,pbstrAction)    ( (This)->lpVtbl -> ParseLicenseRequestMsg(This,pbLicenseRequestMsg,cbLicenseRequestMsg,ppDeviceCert,pDeviceSerialNumber,pbstrAction) ) 
#endif
#endif
#ifndef __IWMDRMTranscryptor_INTERFACE_DEFINED__
#define __IWMDRMTranscryptor_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMTranscryptor;
typedef struct IWMDRMTranscryptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMTranscryptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMTranscryptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMTranscryptor * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IWMDRMTranscryptor * This, BSTR bstrFileName, BYTE * pbLicenseRequestMsg, DWORD cbLicenseRequestMsg, INSSBuffer ** ppLicenseResponseMsg, IWMStatusCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * Seek) (IWMDRMTranscryptor * This, QWORD hnsTime);
	HRESULT(STDMETHODCALLTYPE * Read) (IWMDRMTranscryptor * This, BYTE * pbData, DWORD * pcbData);
	HRESULT(STDMETHODCALLTYPE * Close) (IWMDRMTranscryptor * This);
	END_INTERFACE
} IWMDRMTranscryptorVtbl;
interface IWMDRMTranscryptor
{
    CONST_VTBL struct IWMDRMTranscryptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMTranscryptor_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMTranscryptor_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMTranscryptor_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMTranscryptor_Initialize(This,bstrFileName,pbLicenseRequestMsg,cbLicenseRequestMsg,ppLicenseResponseMsg,pCallback,pvContext)    ( (This)->lpVtbl -> Initialize(This,bstrFileName,pbLicenseRequestMsg,cbLicenseRequestMsg,ppLicenseResponseMsg,pCallback,pvContext) ) 
#define IWMDRMTranscryptor_Seek(This,hnsTime)    ( (This)->lpVtbl -> Seek(This,hnsTime) ) 
#define IWMDRMTranscryptor_Read(This,pbData,pcbData)    ( (This)->lpVtbl -> Read(This,pbData,pcbData) ) 
#define IWMDRMTranscryptor_Close(This)    ( (This)->lpVtbl -> Close(This) ) 
#endif
#endif
#ifndef __IWMDRMTranscryptor2_INTERFACE_DEFINED__
#define __IWMDRMTranscryptor2_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMTranscryptor2;
typedef struct IWMDRMTranscryptor2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMTranscryptor2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMTranscryptor2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMTranscryptor2 * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IWMDRMTranscryptor2 * This, BSTR bstrFileName, BYTE * pbLicenseRequestMsg, DWORD cbLicenseRequestMsg, INSSBuffer ** ppLicenseResponseMsg, IWMStatusCallback * pCallback, void *pvContext);
	HRESULT(STDMETHODCALLTYPE * Seek) (IWMDRMTranscryptor2 * This, QWORD hnsTime);
	HRESULT(STDMETHODCALLTYPE * Read) (IWMDRMTranscryptor2 * This, BYTE * pbData, DWORD * pcbData);
	HRESULT(STDMETHODCALLTYPE * Close) (IWMDRMTranscryptor2 * This);
	HRESULT(STDMETHODCALLTYPE * SeekEx) (IWMDRMTranscryptor2 * This, QWORD cnsStartTime, QWORD cnsDuration, float flRate, BOOL fIncludeFileHeader);
	HRESULT(STDMETHODCALLTYPE * ZeroAdjustTimestamps) (IWMDRMTranscryptor2 * This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * GetSeekStartTime) (IWMDRMTranscryptor2 * This, QWORD * pcnsTime);
	HRESULT(STDMETHODCALLTYPE * GetDuration) (IWMDRMTranscryptor2 * This, QWORD * pcnsDuration);
	END_INTERFACE
} IWMDRMTranscryptor2Vtbl;
interface IWMDRMTranscryptor2
{
    CONST_VTBL struct IWMDRMTranscryptor2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMTranscryptor2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMTranscryptor2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMTranscryptor2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMTranscryptor2_Initialize(This,bstrFileName,pbLicenseRequestMsg,cbLicenseRequestMsg,ppLicenseResponseMsg,pCallback,pvContext)    ( (This)->lpVtbl -> Initialize(This,bstrFileName,pbLicenseRequestMsg,cbLicenseRequestMsg,ppLicenseResponseMsg,pCallback,pvContext) ) 
#define IWMDRMTranscryptor2_Seek(This,hnsTime)    ( (This)->lpVtbl -> Seek(This,hnsTime) ) 
#define IWMDRMTranscryptor2_Read(This,pbData,pcbData)    ( (This)->lpVtbl -> Read(This,pbData,pcbData) ) 
#define IWMDRMTranscryptor2_Close(This)    ( (This)->lpVtbl -> Close(This) ) 
#define IWMDRMTranscryptor2_SeekEx(This,cnsStartTime,cnsDuration,flRate,fIncludeFileHeader)    ( (This)->lpVtbl -> SeekEx(This,cnsStartTime,cnsDuration,flRate,fIncludeFileHeader) ) 
#define IWMDRMTranscryptor2_ZeroAdjustTimestamps(This,fEnable)    ( (This)->lpVtbl -> ZeroAdjustTimestamps(This,fEnable) ) 
#define IWMDRMTranscryptor2_GetSeekStartTime(This,pcnsTime)    ( (This)->lpVtbl -> GetSeekStartTime(This,pcnsTime) ) 
#define IWMDRMTranscryptor2_GetDuration(This,pcnsDuration)    ( (This)->lpVtbl -> GetDuration(This,pcnsDuration) ) 
#endif
#endif
#ifndef __IWMDRMTranscryptionManager_INTERFACE_DEFINED__
#define __IWMDRMTranscryptionManager_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMTranscryptionManager;
typedef struct IWMDRMTranscryptionManagerVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMTranscryptionManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMTranscryptionManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMTranscryptionManager * This);
	HRESULT(STDMETHODCALLTYPE * CreateTranscryptor) (IWMDRMTranscryptionManager * This, IWMDRMTranscryptor ** ppTranscryptor);
	END_INTERFACE
} IWMDRMTranscryptionManagerVtbl;
interface IWMDRMTranscryptionManager
{
    CONST_VTBL struct IWMDRMTranscryptionManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMTranscryptionManager_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMTranscryptionManager_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMTranscryptionManager_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMTranscryptionManager_CreateTranscryptor(This,ppTranscryptor)    ( (This)->lpVtbl -> CreateTranscryptor(This,ppTranscryptor) ) 
#endif
#endif
#ifndef __IWMWatermarkInfo_INTERFACE_DEFINED__
#define __IWMWatermarkInfo_INTERFACE_DEFINED__ 
extern const IID IID_IWMWatermarkInfo;
typedef struct IWMWatermarkInfoVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMWatermarkInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMWatermarkInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMWatermarkInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetWatermarkEntryCount) (IWMWatermarkInfo * This, WMT_WATERMARK_ENTRY_TYPE wmetType, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * GetWatermarkEntry) (IWMWatermarkInfo * This, WMT_WATERMARK_ENTRY_TYPE wmetType, DWORD dwEntryNum, WMT_WATERMARK_ENTRY * pEntry);
	END_INTERFACE
} IWMWatermarkInfoVtbl;
interface IWMWatermarkInfo
{
    CONST_VTBL struct IWMWatermarkInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMWatermarkInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMWatermarkInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMWatermarkInfo_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMWatermarkInfo_GetWatermarkEntryCount(This,wmetType,pdwCount)    ( (This)->lpVtbl -> GetWatermarkEntryCount(This,wmetType,pdwCount) ) 
#define IWMWatermarkInfo_GetWatermarkEntry(This,wmetType,dwEntryNum,pEntry)    ( (This)->lpVtbl -> GetWatermarkEntry(This,wmetType,dwEntryNum,pEntry) ) 
#endif
#endif
#ifndef __IWMReaderAccelerator_INTERFACE_DEFINED__
#define __IWMReaderAccelerator_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderAccelerator;
typedef struct IWMReaderAcceleratorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderAccelerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderAccelerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderAccelerator * This);
	HRESULT(STDMETHODCALLTYPE * GetCodecInterface) (IWMReaderAccelerator * This, DWORD dwOutputNum, REFIID riid, void **ppvCodecInterface);
	HRESULT(STDMETHODCALLTYPE * Notify) (IWMReaderAccelerator * This, DWORD dwOutputNum, WM_MEDIA_TYPE * pSubtype);
	END_INTERFACE
} IWMReaderAcceleratorVtbl;
interface IWMReaderAccelerator
{
    CONST_VTBL struct IWMReaderAcceleratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderAccelerator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderAccelerator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderAccelerator_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderAccelerator_GetCodecInterface(This,dwOutputNum,riid,ppvCodecInterface)    ( (This)->lpVtbl -> GetCodecInterface(This,dwOutputNum,riid,ppvCodecInterface) ) 
#define IWMReaderAccelerator_Notify(This,dwOutputNum,pSubtype)    ( (This)->lpVtbl -> Notify(This,dwOutputNum,pSubtype) ) 
#endif
#endif
#ifndef __IWMReaderTimecode_INTERFACE_DEFINED__
#define __IWMReaderTimecode_INTERFACE_DEFINED__ 
extern const IID IID_IWMReaderTimecode;
typedef struct IWMReaderTimecodeVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMReaderTimecode * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMReaderTimecode * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMReaderTimecode * This);
	HRESULT(STDMETHODCALLTYPE * GetTimecodeRangeCount) (IWMReaderTimecode * This, WORD wStreamNum, WORD * pwRangeCount);
	HRESULT(STDMETHODCALLTYPE * GetTimecodeRangeBounds) (IWMReaderTimecode * This, WORD wStreamNum, WORD wRangeNum, DWORD * pStartTimecode, DWORD * pEndTimecode);
	END_INTERFACE
} IWMReaderTimecodeVtbl;
interface IWMReaderTimecode
{
    CONST_VTBL struct IWMReaderTimecodeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMReaderTimecode_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMReaderTimecode_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMReaderTimecode_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMReaderTimecode_GetTimecodeRangeCount(This,wStreamNum,pwRangeCount)    ( (This)->lpVtbl -> GetTimecodeRangeCount(This,wStreamNum,pwRangeCount) ) 
#define IWMReaderTimecode_GetTimecodeRangeBounds(This,wStreamNum,wRangeNum,pStartTimecode,pEndTimecode)    ( (This)->lpVtbl -> GetTimecodeRangeBounds(This,wStreamNum,wRangeNum,pStartTimecode,pEndTimecode) ) 
#endif
#endif
#ifndef __IWMAddressAccess_INTERFACE_DEFINED__
#define __IWMAddressAccess_INTERFACE_DEFINED__ 
extern const IID IID_IWMAddressAccess;
typedef struct IWMAddressAccessVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMAddressAccess * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMAddressAccess * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMAddressAccess * This);
	HRESULT(STDMETHODCALLTYPE * GetAccessEntryCount) (IWMAddressAccess * This, WM_AETYPE aeType, DWORD * pcEntries);
	HRESULT(STDMETHODCALLTYPE * GetAccessEntry) (IWMAddressAccess * This, WM_AETYPE aeType, DWORD dwEntryNum, WM_ADDRESS_ACCESSENTRY * pAddrAccessEntry);
	HRESULT(STDMETHODCALLTYPE * AddAccessEntry) (IWMAddressAccess * This, WM_AETYPE aeType, WM_ADDRESS_ACCESSENTRY * pAddrAccessEntry);
	HRESULT(STDMETHODCALLTYPE * RemoveAccessEntry) (IWMAddressAccess * This, WM_AETYPE aeType, DWORD dwEntryNum);
	END_INTERFACE
} IWMAddressAccessVtbl;
interface IWMAddressAccess
{
    CONST_VTBL struct IWMAddressAccessVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMAddressAccess_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMAddressAccess_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMAddressAccess_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMAddressAccess_GetAccessEntryCount(This,aeType,pcEntries)    ( (This)->lpVtbl -> GetAccessEntryCount(This,aeType,pcEntries) ) 
#define IWMAddressAccess_GetAccessEntry(This,aeType,dwEntryNum,pAddrAccessEntry)    ( (This)->lpVtbl -> GetAccessEntry(This,aeType,dwEntryNum,pAddrAccessEntry) ) 
#define IWMAddressAccess_AddAccessEntry(This,aeType,pAddrAccessEntry)    ( (This)->lpVtbl -> AddAccessEntry(This,aeType,pAddrAccessEntry) ) 
#define IWMAddressAccess_RemoveAccessEntry(This,aeType,dwEntryNum)    ( (This)->lpVtbl -> RemoveAccessEntry(This,aeType,dwEntryNum) ) 
#endif
#endif
#ifndef __IWMAddressAccess2_INTERFACE_DEFINED__
#define __IWMAddressAccess2_INTERFACE_DEFINED__ 
extern const IID IID_IWMAddressAccess2;
typedef struct IWMAddressAccess2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMAddressAccess2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMAddressAccess2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMAddressAccess2 * This);
	HRESULT(STDMETHODCALLTYPE * GetAccessEntryCount) (IWMAddressAccess2 * This, WM_AETYPE aeType, DWORD * pcEntries);
	HRESULT(STDMETHODCALLTYPE * GetAccessEntry) (IWMAddressAccess2 * This, WM_AETYPE aeType, DWORD dwEntryNum, WM_ADDRESS_ACCESSENTRY * pAddrAccessEntry);
	HRESULT(STDMETHODCALLTYPE * AddAccessEntry) (IWMAddressAccess2 * This, WM_AETYPE aeType, WM_ADDRESS_ACCESSENTRY * pAddrAccessEntry);
	HRESULT(STDMETHODCALLTYPE * RemoveAccessEntry) (IWMAddressAccess2 * This, WM_AETYPE aeType, DWORD dwEntryNum);
	HRESULT(STDMETHODCALLTYPE * GetAccessEntryEx) (IWMAddressAccess2 * This, WM_AETYPE aeType, DWORD dwEntryNum, BSTR * pbstrAddress, BSTR * pbstrMask);
	HRESULT(STDMETHODCALLTYPE * AddAccessEntryEx) (IWMAddressAccess2 * This, WM_AETYPE aeType, BSTR bstrAddress, BSTR bstrMask);
	END_INTERFACE
} IWMAddressAccess2Vtbl;
interface IWMAddressAccess2
{
    CONST_VTBL struct IWMAddressAccess2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMAddressAccess2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMAddressAccess2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMAddressAccess2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMAddressAccess2_GetAccessEntryCount(This,aeType,pcEntries)    ( (This)->lpVtbl -> GetAccessEntryCount(This,aeType,pcEntries) ) 
#define IWMAddressAccess2_GetAccessEntry(This,aeType,dwEntryNum,pAddrAccessEntry)    ( (This)->lpVtbl -> GetAccessEntry(This,aeType,dwEntryNum,pAddrAccessEntry) ) 
#define IWMAddressAccess2_AddAccessEntry(This,aeType,pAddrAccessEntry)    ( (This)->lpVtbl -> AddAccessEntry(This,aeType,pAddrAccessEntry) ) 
#define IWMAddressAccess2_RemoveAccessEntry(This,aeType,dwEntryNum)    ( (This)->lpVtbl -> RemoveAccessEntry(This,aeType,dwEntryNum) ) 
#define IWMAddressAccess2_GetAccessEntryEx(This,aeType,dwEntryNum,pbstrAddress,pbstrMask)    ( (This)->lpVtbl -> GetAccessEntryEx(This,aeType,dwEntryNum,pbstrAddress,pbstrMask) ) 
#define IWMAddressAccess2_AddAccessEntryEx(This,aeType,bstrAddress,bstrMask)    ( (This)->lpVtbl -> AddAccessEntryEx(This,aeType,bstrAddress,bstrMask) ) 
#endif
#endif
#ifndef __IWMImageInfo_INTERFACE_DEFINED__
#define __IWMImageInfo_INTERFACE_DEFINED__ 
extern const IID IID_IWMImageInfo;
typedef struct IWMImageInfoVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMImageInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMImageInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMImageInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetImageCount) (IWMImageInfo * This, DWORD * pcImages);
	HRESULT(STDMETHODCALLTYPE * GetImage) (IWMImageInfo * This, DWORD wIndex, WORD * pcchMIMEType, WCHAR * pwszMIMEType, WORD * pcchDescription, WCHAR * pwszDescription, WORD * pImageType, DWORD * pcbImageData, BYTE * pbImageData);
	END_INTERFACE
} IWMImageInfoVtbl;
interface IWMImageInfo
{
    CONST_VTBL struct IWMImageInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMImageInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMImageInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMImageInfo_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMImageInfo_GetImageCount(This,pcImages)    ( (This)->lpVtbl -> GetImageCount(This,pcImages) ) 
#define IWMImageInfo_GetImage(This,wIndex,pcchMIMEType,pwszMIMEType,pcchDescription,pwszDescription,pImageType,pcbImageData,pbImageData)    ( (This)->lpVtbl -> GetImage(This,wIndex,pcchMIMEType,pwszMIMEType,pcchDescription,pwszDescription,pImageType,pcbImageData,pbImageData) ) 
#endif
#endif
#ifndef __IWMLicenseRevocationAgent_INTERFACE_DEFINED__
#define __IWMLicenseRevocationAgent_INTERFACE_DEFINED__ 
extern const IID IID_IWMLicenseRevocationAgent;
typedef struct IWMLicenseRevocationAgentVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMLicenseRevocationAgent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMLicenseRevocationAgent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMLicenseRevocationAgent * This);
	HRESULT(STDMETHODCALLTYPE * GetLRBChallenge) (IWMLicenseRevocationAgent * This, BYTE * pMachineID, DWORD dwMachineIDLength, BYTE * pChallenge, DWORD dwChallengeLength, BYTE * pChallengeOutput, DWORD * pdwChallengeOutputLength);
	HRESULT(STDMETHODCALLTYPE * ProcessLRB) (IWMLicenseRevocationAgent * This, BYTE * pSignedLRB, DWORD dwSignedLRBLength, BYTE * pSignedACK, DWORD * pdwSignedACKLength);
	END_INTERFACE
} IWMLicenseRevocationAgentVtbl;
interface IWMLicenseRevocationAgent
{
    CONST_VTBL struct IWMLicenseRevocationAgentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMLicenseRevocationAgent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMLicenseRevocationAgent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMLicenseRevocationAgent_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMLicenseRevocationAgent_GetLRBChallenge(This,pMachineID,dwMachineIDLength,pChallenge,dwChallengeLength,pChallengeOutput,pdwChallengeOutputLength)    ( (This)->lpVtbl -> GetLRBChallenge(This,pMachineID,dwMachineIDLength,pChallenge,dwChallengeLength,pChallengeOutput,pdwChallengeOutputLength) ) 
#define IWMLicenseRevocationAgent_ProcessLRB(This,pSignedLRB,dwSignedLRBLength,pSignedACK,pdwSignedACKLength)    ( (This)->lpVtbl -> ProcessLRB(This,pSignedLRB,dwSignedLRBLength,pSignedACK,pdwSignedACKLength) ) 
#endif
#endif
#endif
