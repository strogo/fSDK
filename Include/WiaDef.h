/*+@@file@@----------------------------------------------------------------*//*!
 \file		WiaDef.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 02:06:28 2016
 \date		Modified on Mon Sep 19 02:06:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if (_WIN32_WINNT >= 0x0501)
#ifndef _WIADEF_
#define _WIADEF_
#if __POCC__ >= 500
#pragma once
#endif
#include <pshpack8.h>
#ifndef _NO_COM
#include <objbase.h>
#endif
#define WIA_DIP_DEV_ID                             2
#define WIA_DIP_DEV_ID_STR                         L"Unique Device ID"
#define WIA_DIP_VEND_DESC                          3
#define WIA_DIP_VEND_DESC_STR                      L"Manufacturer"
#define WIA_DIP_DEV_DESC                           4
#define WIA_DIP_DEV_DESC_STR                       L"Description"
#define WIA_DIP_DEV_TYPE                           5
#define WIA_DIP_DEV_TYPE_STR                       L"Type"
#define WIA_DIP_PORT_NAME                          6
#define WIA_DIP_PORT_NAME_STR                      L"Port"
#define WIA_DIP_DEV_NAME                           7
#define WIA_DIP_DEV_NAME_STR                       L"Name"
#define WIA_DIP_SERVER_NAME                        8
#define WIA_DIP_SERVER_NAME_STR                    L"Server"
#define WIA_DIP_REMOTE_DEV_ID                      9
#define WIA_DIP_REMOTE_DEV_ID_STR                  L"Remote Device ID"
#define WIA_DIP_UI_CLSID                           10
#define WIA_DIP_UI_CLSID_STR                       L"UI Class ID"
#define WIA_DIP_HW_CONFIG                          11
#define WIA_DIP_HW_CONFIG_STR                      L"Hardware Configuration"
#define WIA_DIP_BAUDRATE                           12
#define WIA_DIP_BAUDRATE_STR                       L"BaudRate"
#define WIA_DIP_STI_GEN_CAPABILITIES               13
#define WIA_DIP_STI_GEN_CAPABILITIES_STR           L"STI Generic Capabilities"
#define WIA_DIP_WIA_VERSION                        14
#define WIA_DIP_WIA_VERSION_STR                    L"WIA Version"
#define WIA_DIP_DRIVER_VERSION                     15
#define WIA_DIP_DRIVER_VERSION_STR                 L"Driver Version"
#define WIA_DIP_PNP_ID                             16
#define WIA_DIP_PNP_ID_STR                         L"PnP ID String"
#define WIA_DIP_STI_DRIVER_VERSION                 17
#define WIA_DIP_STI_DRIVER_VERSION_STR             L"STI Driver Version"
#define WIA_DPA_FIRMWARE_VERSION                   1026
#define WIA_DPA_FIRMWARE_VERSION_STR               L"Firmware Version"
#define WIA_DPA_CONNECT_STATUS                     1027
#define WIA_DPA_CONNECT_STATUS_STR                 L"Connect Status"
#define WIA_DPA_DEVICE_TIME                        1028
#define WIA_DPA_DEVICE_TIME_STR                    L"Device Time"
#define WIA_DPC_PICTURES_TAKEN                     2050
#define WIA_DPC_PICTURES_TAKEN_STR                 L"Pictures Taken"
#define WIA_DPC_PICTURES_REMAINING                 2051
#define WIA_DPC_PICTURES_REMAINING_STR             L"Pictures Remaining"
#define WIA_DPC_EXPOSURE_MODE                      2052
#define WIA_DPC_EXPOSURE_MODE_STR                  L"Exposure Mode"
#define WIA_DPC_EXPOSURE_COMP                      2053
#define WIA_DPC_EXPOSURE_COMP_STR                  L"Exposure Compensation"
#define WIA_DPC_EXPOSURE_TIME                      2054
#define WIA_DPC_EXPOSURE_TIME_STR                  L"Exposure Time"
#define WIA_DPC_FNUMBER                            2055
#define WIA_DPC_FNUMBER_STR                        L"F Number"
#define WIA_DPC_FLASH_MODE                         2056
#define WIA_DPC_FLASH_MODE_STR                     L"Flash Mode"
#define WIA_DPC_FOCUS_MODE                         2057
#define WIA_DPC_FOCUS_MODE_STR                     L"Focus Mode"
#define WIA_DPC_FOCUS_MANUAL_DIST                  2058
#define WIA_DPC_FOCUS_MANUAL_DIST_STR              L"Focus Manual Dist"
#define WIA_DPC_ZOOM_POSITION                      2059
#define WIA_DPC_ZOOM_POSITION_STR                  L"Zoom Position"
#define WIA_DPC_PAN_POSITION                       2060
#define WIA_DPC_PAN_POSITION_STR                   L"Pan Position"
#define WIA_DPC_TILT_POSITION                      2061
#define WIA_DPC_TILT_POSITION_STR                  L"Tilt Position"
#define WIA_DPC_TIMER_MODE                         2062
#define WIA_DPC_TIMER_MODE_STR                     L"Timer Mode"
#define WIA_DPC_TIMER_VALUE                        2063
#define WIA_DPC_TIMER_VALUE_STR                    L"Timer Value"
#define WIA_DPC_POWER_MODE                         2064
#define WIA_DPC_POWER_MODE_STR                     L"Power Mode"
#define WIA_DPC_BATTERY_STATUS                     2065
#define WIA_DPC_BATTERY_STATUS_STR                 L"Battery Status"
#define WIA_DPC_THUMB_WIDTH                        2066
#define WIA_DPC_THUMB_WIDTH_STR                    L"Thumbnail Width"
#define WIA_DPC_THUMB_HEIGHT                       2067
#define WIA_DPC_THUMB_HEIGHT_STR                   L"Thumbnail Height"
#define WIA_DPC_PICT_WIDTH                         2068
#define WIA_DPC_PICT_WIDTH_STR                     L"Picture Width"
#define WIA_DPC_PICT_HEIGHT                        2069
#define WIA_DPC_PICT_HEIGHT_STR                    L"Picture Height"
#define WIA_DPC_DIMENSION                          2070
#define WIA_DPC_DIMENSION_STR                      L"Dimension"
#define WIA_DPC_COMPRESSION_SETTING                2071
#define WIA_DPC_COMPRESSION_SETTING_STR            L"Compression Setting"
#define WIA_DPC_FOCUS_METERING                     2072
#define WIA_DPC_FOCUS_METERING_STR                 L"Focus Metering Mode"
#define WIA_DPC_TIMELAPSE_INTERVAL                 2073
#define WIA_DPC_TIMELAPSE_INTERVAL_STR             L"Timelapse Interval"
#define WIA_DPC_TIMELAPSE_NUMBER                   2074
#define WIA_DPC_TIMELAPSE_NUMBER_STR               L"Timelapse Number"
#define WIA_DPC_BURST_INTERVAL                     2075
#define WIA_DPC_BURST_INTERVAL_STR                 L"Burst Interval"
#define WIA_DPC_BURST_NUMBER                       2076
#define WIA_DPC_BURST_NUMBER_STR                   L"Burst Number"
#define WIA_DPC_EFFECT_MODE                        2077
#define WIA_DPC_EFFECT_MODE_STR                    L"Effect Mode"
#define WIA_DPC_DIGITAL_ZOOM                       2078
#define WIA_DPC_DIGITAL_ZOOM_STR                   L"Digital Zoom"
#define WIA_DPC_SHARPNESS                          2079
#define WIA_DPC_SHARPNESS_STR                      L"Sharpness"
#define WIA_DPC_CONTRAST                           2080
#define WIA_DPC_CONTRAST_STR                       L"Contrast"
#define WIA_DPC_CAPTURE_MODE                       2081
#define WIA_DPC_CAPTURE_MODE_STR                   L"Capture Mode"
#define WIA_DPC_CAPTURE_DELAY                      2082
#define WIA_DPC_CAPTURE_DELAY_STR                  L"Capture Delay"
#define WIA_DPC_EXPOSURE_INDEX                     2083
#define WIA_DPC_EXPOSURE_INDEX_STR                 L"Exposure Index"
#define WIA_DPC_EXPOSURE_METERING_MODE             2084
#define WIA_DPC_EXPOSURE_METERING_MODE_STR         L"Exposure Metering Mode"
#define WIA_DPC_FOCUS_METERING_MODE                2085
#define WIA_DPC_FOCUS_METERING_MODE_STR            L"Focus Metering Mode"
#define WIA_DPC_FOCUS_DISTANCE                     2086
#define WIA_DPC_FOCUS_DISTANCE_STR                 L"Focus Distance"
#define WIA_DPC_FOCAL_LENGTH                       2087
#define WIA_DPC_FOCAL_LENGTH_STR                   L"Focus Length"
#define WIA_DPC_RGB_GAIN                           2088
#define WIA_DPC_RGB_GAIN_STR                       L"RGB Gain"
#define WIA_DPC_WHITE_BALANCE                      2089
#define WIA_DPC_WHITE_BALANCE_STR                  L"White Balance"
#define WIA_DPC_UPLOAD_URL                         2090
#define WIA_DPC_UPLOAD_URL_STR                     L"Upload URL"
#define WIA_DPC_ARTIST                             2091
#define WIA_DPC_ARTIST_STR                         L"Artist"
#define WIA_DPC_COPYRIGHT_INFO                     2092
#define WIA_DPC_COPYRIGHT_INFO_STR                 L"Copyright Info"
#define WIA_DPS_HORIZONTAL_BED_SIZE                3074
#define WIA_DPS_HORIZONTAL_BED_SIZE_STR            L"Horizontal Bed Size"
#define WIA_DPS_VERTICAL_BED_SIZE                  3075
#define WIA_DPS_VERTICAL_BED_SIZE_STR              L"Vertical Bed Size"
#define WIA_DPS_HORIZONTAL_SHEET_FEED_SIZE         3076
#define WIA_DPS_HORIZONTAL_SHEET_FEED_SIZE_STR     L"Horizontal Sheet Feed Size"
#define WIA_DPS_VERTICAL_SHEET_FEED_SIZE           3077
#define WIA_DPS_VERTICAL_SHEET_FEED_SIZE_STR       L"Vertical Sheet Feed Size"
#define WIA_DPS_SHEET_FEEDER_REGISTRATION          3078
#define WIA_DPS_SHEET_FEEDER_REGISTRATION_STR      L"Sheet Feeder Registration"
#define WIA_DPS_HORIZONTAL_BED_REGISTRATION        3079
#define WIA_DPS_HORIZONTAL_BED_REGISTRATION_STR    L"Horizontal Bed Registration"
#define WIA_DPS_VERTICAL_BED_REGISTRATION          3080
#define WIA_DPS_VERTICAL_BED_REGISTRATION_STR      L"Vertical Bed Registration"
#define WIA_DPS_PLATEN_COLOR                       3081
#define WIA_DPS_PLATEN_COLOR_STR                   L"Platen Color"
#define WIA_DPS_PAD_COLOR                          3082
#define WIA_DPS_PAD_COLOR_STR                      L"Pad Color"
#define WIA_DPS_FILTER_SELECT                      3083
#define WIA_DPS_FILTER_SELECT_STR                  L"Filter Select"
#define WIA_DPS_DITHER_SELECT                      3084
#define WIA_DPS_DITHER_SELECT_STR                  L"Dither Select"
#define WIA_DPS_DITHER_PATTERN_DATA                3085
#define WIA_DPS_DITHER_PATTERN_DATA_STR            L"Dither Pattern Data"
#define WIA_DPS_DOCUMENT_HANDLING_CAPABILITIES     3086
#define WIA_DPS_DOCUMENT_HANDLING_CAPABILITIES_STR L"Document Handling Capabilities"
#define WIA_DPS_DOCUMENT_HANDLING_STATUS           3087
#define WIA_DPS_DOCUMENT_HANDLING_STATUS_STR       L"Document Handling Status"
#define WIA_DPS_DOCUMENT_HANDLING_SELECT           3088
#define WIA_DPS_DOCUMENT_HANDLING_SELECT_STR       L"Document Handling Select"
#define WIA_DPS_DOCUMENT_HANDLING_CAPACITY         3089
#define WIA_DPS_DOCUMENT_HANDLING_CAPACITY_STR     L"Document Handling Capacity"
#define WIA_DPS_OPTICAL_XRES                       3090
#define WIA_DPS_OPTICAL_XRES_STR                   L"Horizontal Optical Resolution"
#define WIA_DPS_OPTICAL_YRES                       3091
#define WIA_DPS_OPTICAL_YRES_STR                   L"Vertical Optical Resolution"
#define WIA_DPS_ENDORSER_CHARACTERS                3092
#define WIA_DPS_ENDORSER_CHARACTERS_STR            L"Endorser Characters"
#define WIA_DPS_ENDORSER_STRING                    3093
#define WIA_DPS_ENDORSER_STRING_STR                L"Endorser String"
#define WIA_DPS_SCAN_AHEAD_PAGES                   3094
#define WIA_DPS_SCAN_AHEAD_PAGES_STR               L"Scan Ahead Pages"
#define WIA_DPS_MAX_SCAN_TIME                      3095
#define WIA_DPS_MAX_SCAN_TIME_STR                  L"Max Scan Time"
#define WIA_DPS_PAGES                              3096
#define WIA_DPS_PAGES_STR                          L"Pages"
#define WIA_DPS_PAGE_SIZE                          3097
#define WIA_DPS_PAGE_SIZE_STR                      L"Page Size"
#define WIA_DPS_PAGE_WIDTH                         3098
#define WIA_DPS_PAGE_WIDTH_STR                     L"Page Width"
#define WIA_DPS_PAGE_HEIGHT                        3099
#define WIA_DPS_PAGE_HEIGHT_STR                    L"Page Height"
#define WIA_DPS_PREVIEW                            3100
#define WIA_DPS_PREVIEW_STR                        L"Preview"
#define WIA_DPS_TRANSPARENCY                       3101
#define WIA_DPS_TRANSPARENCY_STR                   L"Transparency Adapter"
#define WIA_DPS_TRANSPARENCY_SELECT                3102
#define WIA_DPS_TRANSPARENCY_SELECT_STR            L"Transparency Adapter Select"
#define WIA_DPS_SHOW_PREVIEW_CONTROL               3103
#define WIA_DPS_SHOW_PREVIEW_CONTROL_STR           L"Show preview control"
#define WIA_DPS_MIN_HORIZONTAL_SHEET_FEED_SIZE     3104
#define WIA_DPS_MIN_HORIZONTAL_SHEET_FEED_SIZE_STR L"Minimum Horizontal Sheet Feed Size"
#define WIA_DPS_MIN_VERTICAL_SHEET_FEED_SIZE       3105
#define WIA_DPS_MIN_VERTICAL_SHEET_FEED_SIZE_STR   L"Minimum Vertical Sheet Feed Size"
#define WIA_DPS_TRANSPARENCY_CAPABILITIES          3106
#define WIA_DPS_TRANSPARENCY_CAPABILITIES_STR      L"Transparency Adapter Capabilities"
#define WIA_DPS_TRANSPARENCY_STATUS                3107
#define WIA_DPS_TRANSPARENCY_STATUS_STR            L"Transparency Adapter Status"
#define WIA_DPF_MOUNT_POINT                        3330
#define WIA_DPF_MOUNT_POINT_STR                    L"Directory mount point"
#define WIA_DPV_LAST_PICTURE_TAKEN                 3586
#define WIA_DPV_LAST_PICTURE_TAKEN_STR             L"Last Picture Taken"
#define WIA_DPV_IMAGES_DIRECTORY                   3587
#define WIA_DPV_IMAGES_DIRECTORY_STR               L"Images Directory"
#define WIA_DPV_DSHOW_DEVICE_PATH                  3588
#define WIA_DPV_DSHOW_DEVICE_PATH_STR              L"Directshow Device Path"
#define WIA_IPA_ITEM_NAME                          4098
#define WIA_IPA_ITEM_NAME_STR                      L"Item Name"
#define WIA_IPA_FULL_ITEM_NAME                     4099
#define WIA_IPA_FULL_ITEM_NAME_STR                 L"Full Item Name"
#define WIA_IPA_ITEM_TIME                          4100
#define WIA_IPA_ITEM_TIME_STR                      L"Item Time Stamp"
#define WIA_IPA_ITEM_FLAGS                         4101
#define WIA_IPA_ITEM_FLAGS_STR                     L"Item Flags"
#define WIA_IPA_ACCESS_RIGHTS                      4102
#define WIA_IPA_ACCESS_RIGHTS_STR                  L"Access Rights"
#define WIA_IPA_DATATYPE                           4103
#define WIA_IPA_DATATYPE_STR                       L"Data Type"
#define WIA_IPA_DEPTH                              4104
#define WIA_IPA_DEPTH_STR                          L"Bits Per Pixel"
#define WIA_IPA_PREFERRED_FORMAT                   4105
#define WIA_IPA_PREFERRED_FORMAT_STR               L"Preferred Format"
#define WIA_IPA_FORMAT                             4106
#define WIA_IPA_FORMAT_STR                         L"Format"
#define WIA_IPA_COMPRESSION                        4107
#define WIA_IPA_COMPRESSION_STR                    L"Compression"
#define WIA_IPA_TYMED                              4108
#define WIA_IPA_TYMED_STR                          L"Media Type"
#define WIA_IPA_CHANNELS_PER_PIXEL                 4109
#define WIA_IPA_CHANNELS_PER_PIXEL_STR             L"Channels Per Pixel"
#define WIA_IPA_BITS_PER_CHANNEL                   4110
#define WIA_IPA_BITS_PER_CHANNEL_STR               L"Bits Per Channel"
#define WIA_IPA_PLANAR                             4111
#define WIA_IPA_PLANAR_STR                         L"Planar"
#define WIA_IPA_PIXELS_PER_LINE                    4112
#define WIA_IPA_PIXELS_PER_LINE_STR                L"Pixels Per Line"
#define WIA_IPA_BYTES_PER_LINE                     4113
#define WIA_IPA_BYTES_PER_LINE_STR                 L"Bytes Per Line"
#define WIA_IPA_NUMBER_OF_LINES                    4114
#define WIA_IPA_NUMBER_OF_LINES_STR                L"Number of Lines"
#define WIA_IPA_GAMMA_CURVES                       4115
#define WIA_IPA_GAMMA_CURVES_STR                   L"Gamma Curves"
#define WIA_IPA_ITEM_SIZE                          4116
#define WIA_IPA_ITEM_SIZE_STR                      L"Item Size"
#define WIA_IPA_COLOR_PROFILE                      4117
#define WIA_IPA_COLOR_PROFILE_STR                  L"Color Profiles"
#define WIA_IPA_MIN_BUFFER_SIZE                    4118
#define WIA_IPA_MIN_BUFFER_SIZE_STR                L"Buffer Size"
#define WIA_IPA_BUFFER_SIZE                        4118
#define WIA_IPA_BUFFER_SIZE_STR                    L"Buffer Size"
#define WIA_IPA_REGION_TYPE                        4119
#define WIA_IPA_REGION_TYPE_STR                    L"Region Type"
#define WIA_IPA_ICM_PROFILE_NAME                   4120
#define WIA_IPA_ICM_PROFILE_NAME_STR               L"Color Profile Name"
#define WIA_IPA_APP_COLOR_MAPPING                  4121
#define WIA_IPA_APP_COLOR_MAPPING_STR              L"Application Applies Color Mapping"
#define WIA_IPA_PROP_STREAM_COMPAT_ID              4122
#define WIA_IPA_PROP_STREAM_COMPAT_ID_STR          L"Stream Compatibility ID"
#define WIA_IPA_FILENAME_EXTENSION                 4123
#define WIA_IPA_FILENAME_EXTENSION_STR             L"Filename extension"
#define WIA_IPA_SUPPRESS_PROPERTY_PAGE             4124
#define WIA_IPA_SUPPRESS_PROPERTY_PAGE_STR         L"Suppress a property page"
#define WIA_IPC_THUMBNAIL                          5122
#define WIA_IPC_THUMBNAIL_STR                      L"Thumbnail Data"
#define WIA_IPC_THUMB_WIDTH                        5123
#define WIA_IPC_THUMB_WIDTH_STR                    L"Thumbnail Width"
#define WIA_IPC_THUMB_HEIGHT                       5124
#define WIA_IPC_THUMB_HEIGHT_STR                   L"Thumbnail Height"
#define WIA_IPC_AUDIO_AVAILABLE                    5125
#define WIA_IPC_AUDIO_AVAILABLE_STR                L"Audio Available"
#define WIA_IPC_AUDIO_DATA_FORMAT                  5126
#define WIA_IPC_AUDIO_DATA_FORMAT_STR              L"Audio Format"
#define WIA_IPC_AUDIO_DATA                         5127
#define WIA_IPC_AUDIO_DATA_STR                     L"Audio Data"
#define WIA_IPC_NUM_PICT_PER_ROW                   5128
#define WIA_IPC_NUM_PICT_PER_ROW_STR               L"Pictures per Row"
#define WIA_IPC_SEQUENCE                           5129
#define WIA_IPC_SEQUENCE_STR                       L"Sequence Number"
#define WIA_IPC_TIMEDELAY                          5130
#define WIA_IPC_TIMEDELAY_STR                      L"Time Delay"
#define WIA_IPS_CUR_INTENT                         6146
#define WIA_IPS_CUR_INTENT_STR                     L"Current Intent"
#define WIA_IPS_XRES                               6147
#define WIA_IPS_XRES_STR                           L"Horizontal Resolution"
#define WIA_IPS_YRES                               6148
#define WIA_IPS_YRES_STR                           L"Vertical Resolution"
#define WIA_IPS_XPOS                               6149
#define WIA_IPS_XPOS_STR                           L"Horizontal Start Position"
#define WIA_IPS_YPOS                               6150
#define WIA_IPS_YPOS_STR                           L"Vertical Start Position"
#define WIA_IPS_XEXTENT                            6151
#define WIA_IPS_XEXTENT_STR                        L"Horizontal Extent"
#define WIA_IPS_YEXTENT                            6152
#define WIA_IPS_YEXTENT_STR                        L"Vertical Extent"
#define WIA_IPS_PHOTOMETRIC_INTERP                 6153
#define WIA_IPS_PHOTOMETRIC_INTERP_STR             L"Photometric Interpretation"
#define WIA_IPS_BRIGHTNESS                         6154
#define WIA_IPS_BRIGHTNESS_STR                     L"Brightness"
#define WIA_IPS_CONTRAST                           6155
#define WIA_IPS_CONTRAST_STR                       L"Contrast"
#define WIA_IPS_ORIENTATION                        6156
#define WIA_IPS_ORIENTATION_STR                    L"Orientation"
#define WIA_IPS_ROTATION                           6157
#define WIA_IPS_ROTATION_STR                       L"Rotation"
#define WIA_IPS_MIRROR                             6158
#define WIA_IPS_MIRROR_STR                         L"Mirror"
#define WIA_IPS_THRESHOLD                          6159
#define WIA_IPS_THRESHOLD_STR                      L"Threshold"
#define WIA_IPS_INVERT                             6160
#define WIA_IPS_INVERT_STR                         L"Invert"
#define WIA_IPS_WARM_UP_TIME                       6161
#define WIA_IPS_WARM_UP_TIME_STR                   L"Lamp Warm up Time"
#if (_WIN32_WINNT >= 0x0600)
#define WIA_DPS_USER_NAME                          3112
#define WIA_DPS_USER_NAME_STR                      L"User Name"
#define WIA_DPS_SERVICE_ID                         3113
#define WIA_DPS_SERVICE_ID_STR                     L"Service ID"
#define WIA_DPS_DEVICE_ID                          3114
#define WIA_DPS_DEVICE_ID_STR                      L"Device ID"
#define WIA_DPS_GLOBAL_IDENTITY                    3115
#define WIA_DPS_GLOBAL_IDENTITY_STR                L"Global Identity"
#define WIA_DPS_SCAN_AVAILABLE_ITEM                3116
#define WIA_DPS_SCAN_AVAILABLE_ITEM_STR            L"Scan Available Item"
#define WIA_IPS_DESKEW_X                           6162
#define WIA_IPS_DESKEW_X_STR                       L"DeskewX"
#define WIA_IPS_DESKEW_Y                           6163
#define WIA_IPS_DESKEW_Y_STR                       L"DeskewY"
#define WIA_IPS_SEGMENTATION                       6164
#define WIA_IPS_SEGMENTATION_STR                   L"Segmentation"
#define WIA_SEGMENTATION_FILTER_STR                L"SegmentationFilter"
#define WIA_IMAGEPROC_FILTER_STR                   L"ImageProcessingFilter"
#define WIA_IPS_MAX_HORIZONTAL_SIZE                6165
#define WIA_IPS_MAX_HORIZONTAL_SIZE_STR            L"Maximum Horizontal Scan Size"
#define WIA_IPS_MAX_VERTICAL_SIZE                  6166
#define WIA_IPS_MAX_VERTICAL_SIZE_STR              L"Maximum Vertical Scan Size"
#define WIA_IPS_MIN_HORIZONTAL_SIZE                6167
#define WIA_IPS_MIN_HORIZONTAL_SIZE_STR            L"Minimum Horizontal Scan Size"
#define WIA_IPS_MIN_VERTICAL_SIZE                  6168
#define WIA_IPS_MIN_VERTICAL_SIZE_STR              L"Minimum Vertical Scan Size"
#define WIA_IPS_TRANSFER_CAPABILITIES              6169
#define WIA_IPS_TRANSFER_CAPABILITIES_STR          L"Transfer Capabilities"
#define WIA_IPS_SHEET_FEEDER_REGISTRATION          3078
#define WIA_IPS_SHEET_FEEDER_REGISTRATION_STR      L"Sheet Feeder Registration"
#define WIA_IPS_DOCUMENT_HANDLING_SELECT           3088
#define WIA_IPS_DOCUMENT_HANDLING_SELECT_STR       L"Document Handling Select"
#define WIA_IPS_OPTICAL_XRES                       3090
#define WIA_IPS_OPTICAL_XRES_STR                   L"Horizontal Optical Resolution"
#define WIA_IPS_OPTICAL_YRES                       3091
#define WIA_IPS_OPTICAL_YRES_STR                   L"Vertical Optical Resolution"
#define WIA_IPS_PAGES                              3096
#define WIA_IPS_PAGES_STR                          L"Pages"
#define WIA_IPS_PAGE_SIZE                          3097
#define WIA_IPS_PAGE_SIZE_STR                      L"Page Size"
#define WIA_IPS_PAGE_WIDTH                         3098
#define WIA_IPS_PAGE_WIDTH_STR                     L"Page Width"
#define WIA_IPS_PAGE_HEIGHT                        3099
#define WIA_IPS_PAGE_HEIGHT_STR                    L"Page Height"
#define WIA_IPS_PREVIEW                            3100
#define WIA_IPS_PREVIEW_STR                        L"Preview"
#define WIA_IPS_SHOW_PREVIEW_CONTROL               3103
#define WIA_IPS_SHOW_PREVIEW_CONTROL_STR           L"Show preview control"
#define WIA_IPS_FILM_SCAN_MODE                     3104
#define WIA_IPS_FILM_SCAN_MODE_STR                 L"Film Scan Mode"
#define WIA_IPS_LAMP                               3105
#define WIA_IPS_LAMP_STR                           L"Lamp"
#define WIA_IPS_LAMP_AUTO_OFF                      3106
#define WIA_IPS_LAMP_AUTO_OFF_STR                  L"Lamp Auto Off"
#define WIA_IPS_AUTO_DESKEW                        3107
#define WIA_IPS_AUTO_DESKEW_STR                    L"Automatic Deskew"
#define WIA_IPS_SUPPORTS_CHILD_ITEM_CREATION       3108
#define WIA_IPS_SUPPORTS_CHILD_ITEM_CREATION_STR   L"Supports Child Item Creation"
#define WIA_IPS_XSCALING                           3109
#define WIA_IPS_XSCALING_STR                       L"Horizontal Scaling"
#define WIA_IPS_YSCALING                           3110
#define WIA_IPS_YSCALING_STR                       L"Vertical Scaling"
#define WIA_IPS_PREVIEW_TYPE                       3111
#define WIA_IPS_PREVIEW_TYPE_STR                   L"Preview Type"
#define WIA_IPA_ITEM_CATEGORY                      4125
#define WIA_IPA_ITEM_CATEGORY_STR                  L"Item Category"
#define WIA_IPA_UPLOAD_ITEM_SIZE                   4126
#define WIA_IPA_UPLOAD_ITEM_SIZE_STR               L"Upload Item Size"
#define WIA_IPA_ITEMS_STORED                       4127
#define WIA_IPA_ITEMS_STORED_STR                   L"Items Stored"
#define WIA_IPA_RAW_BITS_PER_CHANNEL               4128
#define WIA_IPA_RAW_BITS_PER_CHANNEL_STR           L"Raw Bits Per Channel"
#define WIA_IPS_FILM_NODE_NAME                     4129
#define WIA_IPS_FILM_NODE_NAME_STR                 L"Film Node Name"
DEFINE_GUID(WIA_CATEGORY_FINISHED_FILE,0xff2b77ca, 0xcf84, 0x432b, 0xa7, 0x35, 0x3a, 0x13, 0x0d, 0xde, 0x2a, 0x88);
DEFINE_GUID(WIA_CATEGORY_FLATBED,      0xfb607b1f, 0x43f3, 0x488b, 0x85, 0x5b, 0xfb, 0x70, 0x3e, 0xc3, 0x42, 0xa6);
DEFINE_GUID(WIA_CATEGORY_FEEDER,       0xfe131934, 0xf84c, 0x42ad, 0x8d, 0xa4, 0x61, 0x29, 0xcd, 0xdd, 0x72, 0x88);
DEFINE_GUID(WIA_CATEGORY_FILM,         0xfcf65be7, 0x3ce3, 0x4473, 0xaf, 0x85, 0xf5, 0xd3, 0x7d, 0x21, 0xb6, 0x8a);
DEFINE_GUID(WIA_CATEGORY_ROOT,         0xf193526f, 0x59b8, 0x4a26, 0x98, 0x88, 0xe1, 0x6e, 0x4f, 0x97, 0xce, 0x10);
DEFINE_GUID(WIA_CATEGORY_FOLDER,       0xc692a446, 0x6f5a, 0x481d, 0x85, 0xbb, 0x92, 0xe2, 0xe8, 0x6f, 0xd3, 0xa);
DEFINE_GUID(WIA_CATEGORY_FEEDER_FRONT, 0x4823175c, 0x3b28, 0x487b, 0xa7, 0xe6, 0xee, 0xbc, 0x17, 0x61, 0x4f, 0xd1);
DEFINE_GUID(WIA_CATEGORY_FEEDER_BACK,  0x61ca74d4, 0x39db, 0x42aa, 0x89, 0xb1, 0x8c, 0x19, 0xc9, 0xcd, 0x4c, 0x23);
DEFINE_GUID(WIA_CATEGORY_AUTO,         0xdefe5fd8, 0x6c97, 0x4dde, 0xb1, 0x1e, 0xcb, 0x50, 0x9b, 0x27, 0x0e, 0x11);
DEFINE_GUID(CLSID_WiaDefaultSegFilter, 0xD4F4D30B, 0x0B29, 0x4508, 0x89, 0x22, 0x0C, 0x57, 0x97, 0xD4, 0x27, 0x65);
#define WIA_TRANSFER_CHILDREN_SINGLE_SCAN 0x00000001
#define WIA_USE_SEGMENTATION_FILTER       0
#define WIA_DONT_USE_SEGMENTATION_FILTER  1
#define WIA_FILM_COLOR_SLIDE              0
#define WIA_FILM_COLOR_NEGATIVE           1
#define WIA_FILM_BW_NEGATIVE              2
#define WIA_LAMP_ON                       0
#define WIA_LAMP_OFF                      1
#define WIA_AUTO_DESKEW_ON                0
#define WIA_AUTO_DESKEW_OFF               1
#define WIA_ADVANCED_PREVIEW              0
#define WIA_BASIC_PREVIEW                 1
typedef struct _WIA_RAW_HEADER
{
    DWORD Tag;
    DWORD Version;
    DWORD HeaderSize;
    DWORD XRes;
    DWORD YRes;
    DWORD XExtent;
    DWORD YExtent;
    DWORD BytesPerLine;
    DWORD BitsPerPixel;
    DWORD ChannelsPerPixel;
    DWORD DataType;
    BYTE  BitsPerChannel[8];
    DWORD Compression;
    DWORD PhotometricInterp;
    DWORD LineOrder;
    DWORD RawDataOffset;
    DWORD RawDataSize;
    DWORD PaletteOffset;
    DWORD PaletteSize;
} WIA_RAW_HEADER;
typedef struct _WIA_RAW_HEADER *PWIA_RAW_HEADER;
#endif
#define WIA_PRIVATE_DEVPROP  38914
#define WIA_PRIVATE_ITEMPROP 71682
DEFINE_GUID(WiaImgFmt_UNDEFINED,0xb96b3ca9,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_RAWRGB,   0xbca48b55,0xf272,0x4371,0xb0,0xf1,0x4a,0x15,0x0d,0x05,0x7b,0xb4);
DEFINE_GUID(WiaImgFmt_MEMORYBMP,0xb96b3caa,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_BMP,      0xb96b3cab,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_EMF,      0xb96b3cac,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_WMF,      0xb96b3cad,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_JPEG,     0xb96b3cae,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_PNG,      0xb96b3caf,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_GIF,      0xb96b3cb0,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_TIFF,     0xb96b3cb1,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_EXIF,     0xb96b3cb2,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_PHOTOCD,  0xb96b3cb3,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_FLASHPIX, 0xb96b3cb4,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_ICO,      0xb96b3cb5,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_CIFF,     0x9821a8ab,0x3a7e,0x4215,0x94,0xe0,0xd2,0x7a,0x46,0x0c,0x03,0xb2);
DEFINE_GUID(WiaImgFmt_PICT,     0xa6bc85d8,0x6b3e,0x40ee,0xa9,0x5c,0x25,0xd4,0x82,0xe4,0x1a,0xdc);
DEFINE_GUID(WiaImgFmt_JPEG2K,   0x344ee2b2,0x39db,0x4dde,0x81,0x73,0xc4,0xb7,0x5f,0x8f,0x1e,0x49);
DEFINE_GUID(WiaImgFmt_JPEG2KX,  0x43e14614,0xc80a,0x4850,0xba,0xf3,0x4b,0x15,0x2d,0xc8,0xda,0x27);
#if (_WIN32_WINNT >= 0x0600)
DEFINE_GUID(WiaImgFmt_RAW,      0x6f120719,0xf1a8,0x4e07,0x9a,0xde,0x9b,0x64,0xc6,0x3a,0x3d,0xcc);
DEFINE_GUID(WiaImgFmt_JBIG,     0x41e8dd92,0x2f0a,0x43d4,0x86,0x36,0xf1,0x61,0x4b,0xa1,0x1e,0x46);
#endif
DEFINE_GUID(WiaImgFmt_RTF,      0x573dd6a3,0x4834,0x432d,0xa9,0xb5,0xe1,0x98,0xdd,0x9e,0x89,0x0d);
DEFINE_GUID(WiaImgFmt_XML,      0xb9171457,0xdac8,0x4884,0xb3,0x93,0x15,0xb4,0x71,0xd5,0xf0,0x7e);
DEFINE_GUID(WiaImgFmt_HTML,     0xc99a4e62,0x99de,0x4a94,0xac,0xca,0x71,0x95,0x6a,0xc2,0x97,0x7d);
DEFINE_GUID(WiaImgFmt_TXT,      0xfafd4d82,0x723f,0x421f,0x93,0x18,0x30,0x50,0x1a,0xc4,0x4b,0x59);
#if (_WIN32_WINNT >= 0x0600)
DEFINE_GUID(WiaImgFmt_PDFA,     0x9980bd5b,0x3463,0x43c7,0xbd,0xca,0x3c,0xaa,0x14,0x6f,0x22,0x9f);
DEFINE_GUID(WiaImgFmt_XPS,      0x700b4a0f,0x2011,0x411c,0xb4,0x30,0xd1,0xe0,0xb2,0xe1,0x0b,0x28);
#endif
DEFINE_GUID(WiaImgFmt_MPG,      0xecd757e4,0xd2ec,0x4f57,0x95,0x5d,0xbc,0xf8,0xa9,0x7c,0x4e,0x52);
DEFINE_GUID(WiaImgFmt_AVI,      0x32f8ca14,0x087c,0x4908,0xb7,0xc4,0x67,0x57,0xfe,0x7e,0x90,0xab);
DEFINE_GUID(WiaAudFmt_WAV,      0xf818e146,0x07af,0x40ff,0xae,0x55,0xbe,0x8f,0x2c,0x06,0x5d,0xbe);
DEFINE_GUID(WiaAudFmt_MP3,      0x0fbc71fb,0x43bf,0x49f2,0x91,0x90,0xe6,0xfe,0xcf,0xf3,0x7e,0x54);
DEFINE_GUID(WiaAudFmt_AIFF,     0x66e2bf4f,0xb6fc,0x443f,0x94,0xc8,0x2f,0x33,0xc8,0xa6,0x5a,0xaf);
DEFINE_GUID(WiaAudFmt_WMA,      0xd61d6413,0x8bc2,0x438f,0x93,0xad,0x21,0xbd,0x48,0x4d,0xb6,0xa1);
DEFINE_GUID(WiaImgFmt_ASF,      0x8d948ee9,0xd0aa,0x4a12,0x9d,0x9a,0x9c,0xc5,0xde,0x36,0x19,0x9b);
DEFINE_GUID(WiaImgFmt_SCRIPT,   0xfe7d6c53,0x2dac,0x446a,0xb0,0xbd,0xd7,0x3e,0x21,0xe9,0x24,0xc9);
DEFINE_GUID(WiaImgFmt_EXEC,     0x485da097,0x141e,0x4aa5,0xbb,0x3b,0xa5,0x61,0x8d,0x95,0xd0,0x2b);
DEFINE_GUID(WiaImgFmt_UNICODE16,0x1b7639b6,0x6357,0x47d1,0x9a,0x07,0x12,0x45,0x2d,0xc0,0x73,0xe9);
DEFINE_GUID(WiaImgFmt_DPOF,     0x369eeeab,0xa0e8,0x45ca,0x86,0xa6,0xa8,0x3c,0xe5,0x69,0x7e,0x28);
DEFINE_GUID(WIA_EVENT_DEVICE_DISCONNECTED,0x143e4e83,0x6497,0x11d2,0xa2,0x31,0x00,0xc0,0x4f,0xa3,0x18,0x09);
DEFINE_GUID(WIA_EVENT_DEVICE_CONNECTED,   0xa28bbade,0x64b6,0x11d2,0xa2,0x31,0x00,0xc0,0x4f,0xa3,0x18,0x09);
DEFINE_GUID(WIA_EVENT_ITEM_DELETED,       0x1d22a559,0xe14f,0x11d2,0xb3,0x26,0x00,0xc0,0x4f,0x68,0xce,0x61);
DEFINE_GUID(WIA_EVENT_ITEM_CREATED,       0x4c8f4ef5,0xe14f,0x11d2,0xb3,0x26,0x00,0xc0,0x4f,0x68,0xce,0x61);
DEFINE_GUID(WIA_EVENT_TREE_UPDATED,       0xc9859b91,0x4ab2,0x4cd6,0xa1,0xfc,0x58,0x2e,0xec,0x55,0xe5,0x85);
DEFINE_GUID(WIA_EVENT_VOLUME_INSERT,      0x9638bbfd,0xd1bd,0x11d2,0xb3,0x1f,0x00,0xc0,0x4f,0x68,0xce,0x61);
DEFINE_GUID(WIA_EVENT_SCAN_IMAGE,         0xa6c5a715,0x8c6e,0x11d2,0x97,0x7a,0x00,0x00,0xf8,0x7a,0x92,0x6f);
DEFINE_GUID(WIA_EVENT_SCAN_PRINT_IMAGE,   0xb441f425,0x8c6e,0x11d2,0x97,0x7a,0x00,0x00,0xf8,0x7a,0x92,0x6f);
DEFINE_GUID(WIA_EVENT_SCAN_FAX_IMAGE,     0xc00eb793,0x8c6e,0x11d2,0x97,0x7a,0x00,0x00,0xf8,0x7a,0x92,0x6f);
DEFINE_GUID(WIA_EVENT_SCAN_OCR_IMAGE,     0x9d095b89,0x37d6,0x4877,0xaf,0xed,0x62,0xa2,0x97,0xdc,0x6d,0xbe);
DEFINE_GUID(WIA_EVENT_SCAN_EMAIL_IMAGE,   0xc686dcee,0x54f2,0x419e,0x9a,0x27,0x2f,0xc7,0xf2,0xe9,0x8f,0x9e);
DEFINE_GUID(WIA_EVENT_SCAN_FILM_IMAGE,    0x9b2b662c,0x6185,0x438c,0xb6,0x8b,0xe3,0x9e,0xe2,0x5e,0x71,0xcb);
DEFINE_GUID(WIA_EVENT_SCAN_IMAGE2,        0xfc4767c1,0xc8b3,0x48a2,0x9c,0xfa,0x2e,0x90,0xcb,0x3d,0x35,0x90);
DEFINE_GUID(WIA_EVENT_SCAN_IMAGE3,        0x154e27be,0xb617,0x4653,0xac,0xc5,0x0f,0xd7,0xbd,0x4c,0x65,0xce);
DEFINE_GUID(WIA_EVENT_SCAN_IMAGE4,        0xa65b704a,0x7f3c,0x4447,0xa7,0x5d,0x8a,0x26,0xdf,0xca,0x1f,0xdf);
DEFINE_GUID(WIA_EVENT_STORAGE_CREATED,    0x353308b2,0xfe73,0x46c8,0x89,0x5e,0xfa,0x45,0x51,0xcc,0xc8,0x5a);
DEFINE_GUID(WIA_EVENT_STORAGE_DELETED,    0x5e41e75e,0x9390,0x44c5,0x9a,0x51,0xe4,0x70,0x19,0xe3,0x90,0xcf);
DEFINE_GUID(WIA_EVENT_STI_PROXY,          0xd711f81f,0x1f0d,0x422d,0x86,0x41,0x92,0x7d,0x1b,0x93,0xe5,0xe5);
DEFINE_GUID(WIA_EVENT_CANCEL_IO,          0xc860f7b8,0x9ccd,0x41ea,0xbb,0xbf,0x4d,0xd0,0x9c,0x5b,0x17,0x95);
DEFINE_GUID(WIA_EVENT_POWER_SUSPEND,      0xa0922ff9,0xc3b4,0x411c,0x9e,0x29,0x03,0xa6,0x69,0x93,0xd2,0xbe);
DEFINE_GUID(WIA_EVENT_POWER_RESUME,       0x618f153e,0xf686,0x4350,0x96,0x34,0x41,0x15,0xa3,0x04,0x83,0x0c);
DEFINE_GUID(WIA_EVENT_HANDLER_NO_ACTION,  0xe0372b7d,0xe115,0x4525,0xbc,0x55,0xb6,0x29,0xe6,0x8c,0x74,0x5a);
DEFINE_GUID(WIA_EVENT_HANDLER_PROMPT,     0x5f4baad0,0x4d59,0x4fcd,0xb2,0x13,0x78,0x3c,0xe7,0xa9,0x2f,0x22);
DEFINE_GUID(WIA_CMD_SYNCHRONIZE,          0x9b26b7b2,0xacad,0x11d2,0xa0,0x93,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(WIA_CMD_TAKE_PICTURE,         0xaf933cac,0xacad,0x11d2,0xa0,0x93,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(WIA_CMD_DELETE_ALL_ITEMS,     0xe208c170,0xacad,0x11d2,0xa0,0x93,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(WIA_CMD_CHANGE_DOCUMENT,      0x04e725b0,0xacae,0x11d2,0xa0,0x93,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(WIA_CMD_UNLOAD_DOCUMENT,      0x1f3b3d8e,0xacae,0x11d2,0xa0,0x93,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(WIA_CMD_DIAGNOSTIC,           0x10ff52f5,0xde04,0x4cf0,0xa5,0xad,0x69,0x1f,0x8d,0xce,0x01,0x41);
DEFINE_GUID(WIA_CMD_FORMAT,               0xc3a693aa,0xf788,0x4d34,0xa5,0xb0,0xbe,0x71,0x90,0x75,0x9a,0x24);
DEFINE_GUID(WIA_CMD_DELETE_DEVICE_TREE,   0x73815942,0xdbea,0x11d2,0x84,0x16,0x00,0xc0,0x4f,0xa3,0x61,0x45);
DEFINE_GUID(WIA_CMD_BUILD_DEVICE_TREE,    0x9cba5ce0,0xdbea,0x11d2,0x84,0x16,0x00,0xc0,0x4f,0xa3,0x61,0x45);
#define FACILITY_WIA         33
#define BASE_VAL_WIA_ERROR   0x00000000
#define BASE_VAL_WIA_SUCCESS 0x00000000
#define WIA_ERROR_GENERAL_ERROR              MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 1)
#define WIA_ERROR_PAPER_JAM                  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 2)
#define WIA_ERROR_PAPER_EMPTY                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 3)
#define WIA_ERROR_PAPER_PROBLEM              MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 4)
#define WIA_ERROR_OFFLINE                    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 5)
#define WIA_ERROR_BUSY                       MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 6)
#define WIA_ERROR_WARMING_UP                 MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 7)
#define WIA_ERROR_USER_INTERVENTION          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 8)
#define WIA_ERROR_ITEM_DELETED               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 9)
#define WIA_ERROR_DEVICE_COMMUNICATION       MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 10)
#define WIA_ERROR_INVALID_COMMAND            MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 11)
#define WIA_ERROR_INCORRECT_HARDWARE_SETTING MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 12)
#define WIA_ERROR_DEVICE_LOCKED              MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 13)
#define WIA_ERROR_EXCEPTION_IN_DRIVER        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 14)
#define WIA_ERROR_INVALID_DRIVER_RESPONSE    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 15)
#define WIA_ERROR_COVER_OPEN                 MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 16)
#define WIA_ERROR_LAMP_OFF                   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 17)
#define WIA_ERROR_DESTINATION                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 18)
#define WIA_ERROR_NETWORK_RESERVATION_FAILED MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 19)
#define WIA_STATUS_END_OF_MEDIA              MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WIA, 1)
#define WIA_STATUS_WARMING_UP                MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WIA, 2)
#define WIA_STATUS_CALIBRATING               MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WIA, 3)
#define WIA_STATUS_RESERVING_NETWORK_DEVICE  MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WIA, 6)
#define WIA_STATUS_NETWORK_DEVICE_RESERVED   MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WIA, 7)
#define WIA_STATUS_CLEAR                     MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WIA, 8)
#define WIA_STATUS_SKIP_ITEM                 MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WIA, 9)
#define WIA_STATUS_NOT_HANDLED               MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WIA, 10)
#define WIA_S_CHANGE_DEVICE                  MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WIA, 11)
#define WIA_S_NO_DEVICE_AVAILABLE            MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIA, 21)
#define WIA_SELECT_DEVICE_NODEFAULT          0x00000001
#define WIA_DEVICE_DIALOG_SINGLE_IMAGE       0x00000002
#define WIA_DEVICE_DIALOG_USE_COMMON_UI      0x00000004
#define  WIA_REGISTER_EVENT_CALLBACK         0x00000001
#define  WIA_UNREGISTER_EVENT_CALLBACK       0x00000002
#define  WIA_SET_DEFAULT_HANDLER             0x00000004
#define  WIA_NOTIFICATION_EVENT              0x00000001
#define  WIA_ACTION_EVENT                    0x00000002
#define  WIA_LINE_ORDER_TOP_TO_BOTTOM        0x00000001
#define  WIA_LINE_ORDER_BOTTOM_TO_TOP        0x00000002
#define  WIA_IS_DEFAULT_HANDLER              0x00000001
#define WIA_EVENT_DEVICE_DISCONNECTED_STR L"Device Disconnected"
#define WIA_EVENT_DEVICE_CONNECTED_STR    L"Device Connected"
#define WIA_ICON_DEVICE_DISCONNECTED (L"sti.dll,-1001")
#define WIA_ICON_DEVICE_CONNECTED    (L"sti.dll,-1001")
#define WIA_ICON_ITEM_DELETED        (L"sti.dll,-1001")
#define WIA_ICON_ITEM_CREATED        (L"sti.dll,-1001")
#define WIA_ICON_TREE_UPDATED        (L"sti.dll,-1001")
#define WIA_ICON_VOLUME_INSERT       (L"sti.dll,-1001")
#define WIA_ICON_SCAN_BUTTON_PRESS   (L"sti.dll,-1001")
#define WIA_ICON_SYNCHRONIZE         (L"sti.dll,-2000")
#define WIA_ICON_TAKE_PICTURE        (L"sti.dll,-2001")
#define WIA_ICON_DELETE_ALL_ITEMS    (L"sti.dll,-2002")
#define WIA_ICON_CHANGE_DOCUMENT     (L"sti.dll,-2003")
#define WIA_ICON_UNLOAD_DOCUMENT     (L"sti.dll,-2004")
#define WIA_ICON_DELETE_DEVICE_TREE  (L"sti.dll,-2005")
#define WIA_ICON_BUILD_DEVICE_TREE   (L"sti.dll,-2006")
#define TYMED_CALLBACK                     128
#define TYMED_MULTIPAGE_FILE               256
#define TYMED_MULTIPAGE_CALLBACK           512
#define IT_MSG_DATA_HEADER              0x0001
#define IT_MSG_DATA                     0x0002
#define IT_MSG_STATUS                   0x0003
#define IT_MSG_TERMINATION              0x0004
#define IT_MSG_NEW_PAGE                 0x0005
#define IT_MSG_FILE_PREVIEW_DATA        0x0006
#define IT_MSG_FILE_PREVIEW_DATA_HEADER 0x0007
#define IT_STATUS_TRANSFER_FROM_DEVICE    0x0001
#define IT_STATUS_PROCESSING_DATA         0x0002
#define IT_STATUS_TRANSFER_TO_CLIENT      0x0004
#define IT_STATUS_MASK                    0x0007
#define WIA_TRANSFER_ACQUIRE_CHILDREN     0x0001
#define WIA_TRANSFER_MSG_STATUS           0x00001
#define WIA_TRANSFER_MSG_END_OF_STREAM    0x00002
#define WIA_TRANSFER_MSG_END_OF_TRANSFER  0x00003
#define WIA_TRANSFER_MSG_DEVICE_STATUS    0x00005
#define WIA_TRANSFER_MSG_NEW_PAGE         0x00006
#define WIA_MAJOR_EVENT_DEVICE_CONNECT    0x01
#define WIA_MAJOR_EVENT_DEVICE_DISCONNECT 0x02
#define WIA_MAJOR_EVENT_PICTURE_TAKEN     0x03
#define WIA_MAJOR_EVENT_PICTURE_DELETED   0x04
#define  WIA_DEVICE_NOT_CONNECTED         0
#define  WIA_DEVICE_CONNECTED             1
#define WIA_DEVICE_COMMANDS               1
#define WIA_DEVICE_EVENTS                 2
#define WIA_DEVINFO_ENUM_ALL              0x0000000F
#define WIA_DEVINFO_ENUM_LOCAL            0x00000010
#define WiaItemTypeFree                   0x00000000
#define WiaItemTypeImage                  0x00000001
#define WiaItemTypeFile                   0x00000002
#define WiaItemTypeFolder                 0x00000004
#define WiaItemTypeRoot                   0x00000008
#define WiaItemTypeAnalyze                0x00000010
#define WiaItemTypeAudio                  0x00000020
#define WiaItemTypeDevice                 0x00000040
#define WiaItemTypeDeleted                0x00000080
#define WiaItemTypeDisconnected           0x00000100
#define WiaItemTypeHPanorama              0x00000200
#define WiaItemTypeVPanorama              0x00000400
#define WiaItemTypeBurst                  0x00000800
#define WiaItemTypeStorage                0x00001000
#define WiaItemTypeTransfer               0x00002000
#define WiaItemTypeGenerated              0x00004000
#define WiaItemTypeHasAttachments         0x00008000
#define WiaItemTypeVideo                  0x00010000
#define WiaItemTypeRemoved                0x80000000
#if (_WIN32_WINNT >= 0x0600)
#define WiaItemTypeDocument               0x00040000
#define WiaItemTypeProgrammableDataSource 0x00080000
#define WiaItemTypeMask                   0x800FFFFF
#else
#define WiaItemTypeMask                   0x8003FFFF
#endif
#define WIA_MAX_CTX_SIZE                  0x01000000
#define WIA_PROP_READ            0x01
#define WIA_PROP_WRITE           0x02
#define WIA_PROP_RW              (WIA_PROP_READ | WIA_PROP_WRITE)
#define WIA_PROP_SYNC_REQUIRED   0x04
#define WIA_PROP_NONE            0x08
#define WIA_PROP_RANGE           0x10
#define WIA_PROP_LIST            0x20
#define WIA_PROP_FLAG            0x40
#define WIA_PROP_CACHEABLE       0x10000
#define COPY_PARENT_PROPERTY_VALUES       0x40000000
#define WIA_ITEM_CAN_BE_DELETED  0x80
#define WIA_ITEM_READ            WIA_PROP_READ
#define WIA_ITEM_WRITE           WIA_PROP_WRITE
#define WIA_ITEM_RD              (WIA_ITEM_READ | WIA_ITEM_CAN_BE_DELETED)
#define WIA_ITEM_RWD             (WIA_ITEM_READ | WIA_ITEM_WRITE | WIA_ITEM_CAN_BE_DELETED)
#define  WIA_RANGE_MIN                          0
#define  WIA_RANGE_NOM                          1
#define  WIA_RANGE_MAX                          2
#define  WIA_RANGE_STEP                         3
#define  WIA_RANGE_NUM_ELEMS                    4
#define  WIA_LIST_COUNT                         0
#define  WIA_LIST_NOM                           1
#define  WIA_LIST_VALUES                        2
#define  WIA_LIST_NUM_ELEMS                     2
#define  WIA_FLAG_NOM                           0
#define  WIA_FLAG_VALUES                        1
#define  WIA_FLAG_NUM_ELEMS                     2
#define WIA_PROP_LIST_COUNT(ppv) (((PROPVARIANT*)ppv)->cal.cElems - WIA_LIST_VALUES)
#define WIA_PROP_LIST_VALUE(ppv, index)                              \\
     ((index > ((PROPVARIANT*) ppv)->cal.cElems - WIA_LIST_VALUES) || (index < -WIA_LIST_NOM)) ?\\
     NULL :                                                          \\
     (((PROPVARIANT*) ppv)->vt == VT_UI1) ?                          \\
     ((PROPVARIANT*) ppv)->caub.pElems[WIA_LIST_VALUES + index] :    \\
     (((PROPVARIANT*) ppv)->vt == VT_UI2) ?                          \\
     ((PROPVARIANT*) ppv)->caui.pElems[WIA_LIST_VALUES + index] :    \\
     (((PROPVARIANT*) ppv)->vt == VT_UI4) ?                          \\
     ((PROPVARIANT*) ppv)->caul.pElems[WIA_LIST_VALUES + index] :    \\
     (((PROPVARIANT*) ppv)->vt == VT_I2) ?                           \\
     ((PROPVARIANT*) ppv)->cai.pElems[WIA_LIST_VALUES + index] :     \\
     (((PROPVARIANT*) ppv)->vt == VT_I4) ?                           \\
     ((PROPVARIANT*) ppv)->cal.pElems[WIA_LIST_VALUES + index] :     \\
     (((PROPVARIANT*) ppv)->vt == VT_R4) ?                           \\
     ((PROPVARIANT*) ppv)->caflt.pElems[WIA_LIST_VALUES + index] :   \\
     (((PROPVARIANT*) ppv)->vt == VT_R8) ?                           \\
     ((PROPVARIANT*) ppv)->cadbl.pElems[WIA_LIST_VALUES + index] :   \\
     (((PROPVARIANT*) ppv)->vt == VT_BSTR) ?                         \\
     (LONG)(((PROPVARIANT*) ppv)->cabstr.pElems[WIA_LIST_VALUES + index]) : \\
     NULL
#define WIA_DIP_FIRST                        2
#define WIA_IPA_FIRST                     4098
#define WIA_DPF_FIRST                     3330
#define WIA_IPS_FIRST                     6146
#define WIA_DPS_FIRST                     3074
#define WIA_IPC_FIRST                     5122
#define WIA_NUM_IPC                          9
#define WIA_RESERVED_FOR_NEW_PROPS        1024
#define WHITEBALANCE_MANUAL            1
#define WHITEBALANCE_AUTO              2
#define WHITEBALANCE_ONEPUSH_AUTO      3
#define WHITEBALANCE_DAYLIGHT          4
#define WHITEBALANCE_FLORESCENT        5
#define WHITEBALANCE_TUNGSTEN          6
#define WHITEBALANCE_FLASH             7
#define FOCUSMODE_MANUAL               1
#define FOCUSMODE_AUTO                 2
#define FOCUSMODE_MACROAUTO            3
#define EXPOSUREMETERING_AVERAGE       1
#define EXPOSUREMETERING_CENTERWEIGHT  2
#define EXPOSUREMETERING_MULTISPOT     3
#define EXPOSUREMETERING_CENTERSPOT    4
#define FLASHMODE_AUTO                 1
#define FLASHMODE_OFF                  2
#define FLASHMODE_FILL                 3
#define FLASHMODE_REDEYE_AUTO          4
#define FLASHMODE_REDEYE_FILL          5
#define FLASHMODE_EXTERNALSYNC         6
#define EXPOSUREMODE_MANUAL            1
#define EXPOSUREMODE_AUTO              2
#define EXPOSUREMODE_APERTURE_PRIORITY 3
#define EXPOSUREMODE_SHUTTER_PRIORITY  4
#define EXPOSUREMODE_PROGRAM_CREATIVE  5
#define EXPOSUREMODE_PROGRAM_ACTION    6
#define EXPOSUREMODE_PORTRAIT          7
#define CAPTUREMODE_NORMAL             1
#define CAPTUREMODE_BURST              2
#define CAPTUREMODE_TIMELAPSE          3
#define EFFECTMODE_STANDARD            1
#define EFFECTMODE_BW                  2
#define EFFECTMODE_SEPIA               3
#define FOCUSMETERING_CENTERSPOT       1
#define FOCUSMETERING_MULTISPOT        2
#define POWERMODE_LINE                 1
#define POWERMODE_BATTERY              2
#define  LEFT_JUSTIFIED                0
#define  CENTERED                      1
#define  RIGHT_JUSTIFIED               2
#define  TOP_JUSTIFIED                 0
#define  CENTERED                      1
#define  BOTTOM_JUSTIFIED              2
#define  PORTRAIT                      0
#define  LANSCAPE                      1
#if (_WIN32_WINNT >= 0x0600)
#define  LANDSCAPE                     LANSCAPE
#endif
#define  ROT180                        2
#define  ROT270                        3
#define  MIRRORED                      0x01
#define  FEED                          0x01
#define  FLAT                          0x02
#define  DUP                           0x04
#define  DETECT_FLAT                   0x08
#define  DETECT_SCAN                   0x10
#define  DETECT_FEED                   0x20
#define  DETECT_DUP                    0x40
#define  DETECT_FEED_AVAIL             0x80
#define  DETECT_DUP_AVAIL              0x100
#if (_WIN32_WINNT >= 0x0600)
#define  FILM_TPA                      0x200
#define  DETECT_FILM_TPA               0x400
#define  STOR                          0x800
#define  DETECT_STOR                   0x1000
#define  ADVANCED_DUP                  0x2000
#define  AUTO_SOURCE                   0x8000
#endif
#define  FEED_READY                    0x01
#define  FLAT_READY                    0x02
#define  DUP_READY                     0x04
#define  FLAT_COVER_UP                 0x08
#define  PATH_COVER_UP                 0x10
#define  PAPER_JAM                     0x20
#if (_WIN32_WINNT >= 0x0600)
#define  FILM_TPA_READY                0x40
#define  STORAGE_READY                 0x80
#define  STORAGE_FULL                  0x100
#define  MULTIPLE_FEED                 0x200
#define  DEVICE_ATTENTION              0x400
#define  LAMP_ERR                      0x800
#endif
#define  FEEDER                        0x001
#define  FLATBED                       0x002
#define  DUPLEX                        0x004
#define  FRONT_FIRST                   0x008
#define  BACK_FIRST                    0x010
#define  FRONT_ONLY                    0x020
#define  BACK_ONLY                     0x040
#define  NEXT_PAGE                     0x080
#define  PREFEED                       0x100
#define  AUTO_ADVANCE                  0x200
#if (_WIN32_WINNT >= 0x0600)
#define  ADVANCED_DUPLEX               0x400
#endif
#define  LIGHT_SOURCE_PRESENT_DETECT   0x01
#define  LIGHT_SOURCE_PRESENT          0x02
#define  LIGHT_SOURCE_DETECT_READY     0x04
#define  LIGHT_SOURCE_READY            0x08
#define TRANSPARENCY_DYNAMIC_FRAME_SUPPORT 0x01
#define TRANSPARENCY_STATIC_FRAME_SUPPORT  0x02
#define  LIGHT_SOURCE_SELECT           0x001
#define  LIGHT_SOURCE_POSITIVE         0x002
#define  LIGHT_SOURCE_NEGATIVE         0x004
#define  WIA_SCAN_AHEAD_ALL            0
#define  ALL_PAGES                     0
#define WIA_FINAL_SCAN                 0
#define WIA_PREVIEW_SCAN               1
#define WIA_SHOW_PREVIEW_CONTROL       0
#define WIA_DONT_SHOW_PREVIEW_CONTROL  1
#define WIA_ENDORSER_TOK_DATE          L"$DATE$"
#define WIA_ENDORSER_TOK_TIME          L"$TIME$"
#define WIA_ENDORSER_TOK_PAGE_COUNT    L"$PAGE_COUNT$"
#define WIA_ENDORSER_TOK_DAY           L"$DAY$"
#define WIA_ENDORSER_TOK_MONTH         L"$MONTH$"
#define WIA_ENDORSER_TOK_YEAR          L"$YEAR$"
#define WIA_PAGE_A4            0
#define WIA_PAGE_LETTER        1
#define WIA_PAGE_CUSTOM        2
#define WIA_PAGE_USLEGAL       3
#define WIA_PAGE_USLETTER      WIA_PAGE_LETTER
#define WIA_PAGE_USLEDGER      4
#define WIA_PAGE_USSTATEMENT   5
#define WIA_PAGE_BUSINESSCARD  6
#define WIA_PAGE_ISO_A0        7
#define WIA_PAGE_ISO_A1        8
#define WIA_PAGE_ISO_A2        9
#define WIA_PAGE_ISO_A3       10
#define WIA_PAGE_ISO_A4       WIA_PAGE_A4
#define WIA_PAGE_ISO_A5       11
#define WIA_PAGE_ISO_A6       12
#define WIA_PAGE_ISO_A7       13
#define WIA_PAGE_ISO_A8       14
#define WIA_PAGE_ISO_A9       15
#define WIA_PAGE_ISO_A10      16
#define WIA_PAGE_ISO_B0       17
#define WIA_PAGE_ISO_B1       18
#define WIA_PAGE_ISO_B2       19
#define WIA_PAGE_ISO_B3       20
#define WIA_PAGE_ISO_B4       21
#define WIA_PAGE_ISO_B5       22
#define WIA_PAGE_ISO_B6       23
#define WIA_PAGE_ISO_B7       24
#define WIA_PAGE_ISO_B8       25
#define WIA_PAGE_ISO_B9       26
#define WIA_PAGE_ISO_B10      27
#define WIA_PAGE_ISO_C0       28
#define WIA_PAGE_ISO_C1       29
#define WIA_PAGE_ISO_C2       30
#define WIA_PAGE_ISO_C3       31
#define WIA_PAGE_ISO_C4       32
#define WIA_PAGE_ISO_C5       33
#define WIA_PAGE_ISO_C6       34
#define WIA_PAGE_ISO_C7       35
#define WIA_PAGE_ISO_C8       36
#define WIA_PAGE_ISO_C9       37
#define WIA_PAGE_ISO_C10      38
#define WIA_PAGE_JIS_B0       39
#define WIA_PAGE_JIS_B1       40
#define WIA_PAGE_JIS_B2       41
#define WIA_PAGE_JIS_B3       42
#define WIA_PAGE_JIS_B4       43
#define WIA_PAGE_JIS_B5       44
#define WIA_PAGE_JIS_B6       45
#define WIA_PAGE_JIS_B7       46
#define WIA_PAGE_JIS_B8       47
#define WIA_PAGE_JIS_B9       48
#define WIA_PAGE_JIS_B10      49
#define WIA_PAGE_JIS_2A       50
#define WIA_PAGE_JIS_4A       51
#define WIA_PAGE_DIN_2B       52
#define WIA_PAGE_DIN_4B       53
#if (_WIN32_WINNT >= 0x0600)
#define WIA_PAGE_AUTO         100
#define WIA_PAGE_CUSTOM_BASE  0x8000
#endif
#define WIA_COMPRESSION_NONE           0
#define WIA_COMPRESSION_BI_RLE4        1
#define WIA_COMPRESSION_BI_RLE8        2
#define WIA_COMPRESSION_G3             3
#define WIA_COMPRESSION_G4             4
#define WIA_COMPRESSION_JPEG           5
#if (_WIN32_WINNT >= 0x0600)
#define WIA_COMPRESSION_JBIG           6
#define WIA_COMPRESSION_JPEG2K         7
#define WIA_COMPRESSION_PNG            8
#endif
#define WIA_PACKED_PIXEL               0
#define WIA_PLANAR                     1
#define WIA_DATA_THRESHOLD             0
#define WIA_DATA_DITHER                1
#define WIA_DATA_GRAYSCALE             2
#define WIA_DATA_COLOR                 3
#define WIA_DATA_COLOR_THRESHOLD       4
#define WIA_DATA_COLOR_DITHER          5
#if (_WIN32_WINNT >= 0x0600)
#define WIA_DATA_RAW_RGB               6
#define WIA_DATA_RAW_BGR               7
#define WIA_DATA_RAW_YUV               8
#define WIA_DATA_RAW_YUVK              9
#define WIA_DATA_RAW_CMY              10
#define WIA_DATA_RAW_CMYK             11
#endif
#define WIA_PHOTO_WHITE_1              0
#define WIA_PHOTO_WHITE_0              1
#define WIA_PROPPAGE_SCANNER_ITEM_GENERAL 0x00000001
#define WIA_PROPPAGE_CAMERA_ITEM_GENERAL  0x00000002
#define WIA_PROPPAGE_DEVICE_GENERAL       0x00000004
#define WIA_INTENT_NONE                   0x00000000
#define WIA_INTENT_IMAGE_TYPE_COLOR       0x00000001
#define WIA_INTENT_IMAGE_TYPE_GRAYSCALE   0x00000002
#define WIA_INTENT_IMAGE_TYPE_TEXT        0x00000004
#define WIA_INTENT_IMAGE_TYPE_MASK        0x0000000F
#define WIA_INTENT_MINIMIZE_SIZE          0x00010000
#define WIA_INTENT_MAXIMIZE_QUALITY       0x00020000
#define WIA_INTENT_BEST_PREVIEW           0x00040000
#define WIA_INTENT_SIZE_MASK              0x000F0000
#define WIA_NUM_DIP 16
#ifdef WIA_DECLARE_DEVINFO_PROP_ARRAY
PROPSPEC g_psDeviceInfo[WIA_NUM_DIP] =
{
    {PRSPEC_PROPID, WIA_DIP_DEV_ID},
    {PRSPEC_PROPID, WIA_DIP_VEND_DESC},
    {PRSPEC_PROPID, WIA_DIP_DEV_DESC},
    {PRSPEC_PROPID, WIA_DIP_DEV_TYPE},
    {PRSPEC_PROPID, WIA_DIP_PORT_NAME},
    {PRSPEC_PROPID, WIA_DIP_DEV_NAME},
    {PRSPEC_PROPID, WIA_DIP_SERVER_NAME},
    {PRSPEC_PROPID, WIA_DIP_REMOTE_DEV_ID},
    {PRSPEC_PROPID, WIA_DIP_UI_CLSID},
    {PRSPEC_PROPID, WIA_DIP_HW_CONFIG},
    {PRSPEC_PROPID, WIA_DIP_BAUDRATE},
    {PRSPEC_PROPID, WIA_DIP_STI_GEN_CAPABILITIES},
    {PRSPEC_PROPID, WIA_DIP_WIA_VERSION},
    {PRSPEC_PROPID, WIA_DIP_DRIVER_VERSION},
    {PRSPEC_PROPID, WIA_DIP_PNP_ID},
    {PRSPEC_PROPID, WIA_DIP_STI_DRIVER_VERSION},
};
PROPID g_piDeviceInfo[WIA_NUM_DIP] =
{
    WIA_DIP_DEV_ID,
    WIA_DIP_VEND_DESC,
    WIA_DIP_DEV_DESC,
    WIA_DIP_DEV_TYPE,
    WIA_DIP_PORT_NAME,
    WIA_DIP_DEV_NAME,
    WIA_DIP_SERVER_NAME,
    WIA_DIP_REMOTE_DEV_ID,
    WIA_DIP_UI_CLSID,
    WIA_DIP_HW_CONFIG,
    WIA_DIP_BAUDRATE,
    WIA_DIP_STI_GEN_CAPABILITIES,
    WIA_DIP_WIA_VERSION,
    WIA_DIP_DRIVER_VERSION,
    WIA_DIP_PNP_ID,
    WIA_DIP_STI_DRIVER_VERSION,
};
LPOLESTR g_pszDeviceInfo[WIA_NUM_DIP] =
{
    WIA_DIP_DEV_ID_STR,
    WIA_DIP_VEND_DESC_STR,
    WIA_DIP_DEV_DESC_STR,
    WIA_DIP_DEV_TYPE_STR,
    WIA_DIP_PORT_NAME_STR,
    WIA_DIP_DEV_NAME_STR,
    WIA_DIP_SERVER_NAME_STR,
    WIA_DIP_REMOTE_DEV_ID_STR,
    WIA_DIP_UI_CLSID_STR,
    WIA_DIP_HW_CONFIG_STR,
    WIA_DIP_BAUDRATE_STR,
    WIA_DIP_STI_GEN_CAPABILITIES_STR,
    WIA_DIP_WIA_VERSION_STR,
    WIA_DIP_DRIVER_VERSION_STR,
    WIA_DIP_PNP_ID_STR,
    WIA_DIP_STI_DRIVER_VERSION_STR,
};
#else
extern PROPSPEC g_psDeviceInfo[WIA_NUM_DIP];
extern PROPID   g_piDeviceInfo[WIA_NUM_DIP];
extern LPOLESTR g_pszDeviceInfo[WIA_NUM_DIP];
#endif
#ifdef DEFINE_WIA_PROPID_TO_NAME
WIA_PROPID_TO_NAME g_wiaPropIdToName[] =
{
    {WIA_DIP_DEV_ID,                          WIA_DIP_DEV_ID_STR},
    {WIA_DIP_VEND_DESC,                       WIA_DIP_VEND_DESC_STR},
    {WIA_DIP_DEV_DESC,                        WIA_DIP_DEV_DESC_STR},
    {WIA_DIP_DEV_TYPE,                        WIA_DIP_DEV_TYPE_STR},
    {WIA_DIP_PORT_NAME,                       WIA_DIP_PORT_NAME_STR},
    {WIA_DIP_DEV_NAME,                        WIA_DIP_DEV_NAME_STR},
    {WIA_DIP_SERVER_NAME,                     WIA_DIP_SERVER_NAME_STR},
    {WIA_DIP_REMOTE_DEV_ID,                   WIA_DIP_REMOTE_DEV_ID_STR},
    {WIA_DIP_UI_CLSID,                        WIA_DIP_UI_CLSID_STR},
    {WIA_DIP_HW_CONFIG,                       WIA_DIP_HW_CONFIG_STR},
    {WIA_DIP_BAUDRATE,                        WIA_DIP_BAUDRATE_STR},
    {WIA_DIP_STI_GEN_CAPABILITIES,            WIA_DIP_STI_GEN_CAPABILITIES_STR},
    {WIA_DIP_WIA_VERSION,                     WIA_DIP_WIA_VERSION_STR},
    {WIA_DIP_DRIVER_VERSION,                  WIA_DIP_DRIVER_VERSION_STR},
    {WIA_DIP_PNP_ID,                          WIA_DIP_PNP_ID_STR},
    {WIA_DIP_STI_DRIVER_VERSION,              WIA_DIP_STI_DRIVER_VERSION_STR},
    {WIA_DPA_FIRMWARE_VERSION,                WIA_DPA_FIRMWARE_VERSION_STR},
    {WIA_DPA_CONNECT_STATUS,                  WIA_DPA_CONNECT_STATUS_STR},
    {WIA_DPA_DEVICE_TIME,                     WIA_DPA_DEVICE_TIME_STR},
    {WIA_DPC_PICTURES_TAKEN,                  WIA_DPC_PICTURES_TAKEN_STR},
    {WIA_DPC_PICTURES_REMAINING,              WIA_DPC_PICTURES_REMAINING_STR},
    {WIA_DPC_EXPOSURE_MODE,                   WIA_DPC_EXPOSURE_MODE_STR},
    {WIA_DPC_EXPOSURE_COMP,                   WIA_DPC_EXPOSURE_COMP_STR},
    {WIA_DPC_EXPOSURE_TIME,                   WIA_DPC_EXPOSURE_TIME_STR},
    {WIA_DPC_FNUMBER,                         WIA_DPC_FNUMBER_STR},
    {WIA_DPC_FLASH_MODE,                      WIA_DPC_FLASH_MODE_STR},
    {WIA_DPC_FOCUS_MODE,                      WIA_DPC_FOCUS_MODE_STR},
    {WIA_DPC_FOCUS_MANUAL_DIST,               WIA_DPC_FOCUS_MANUAL_DIST_STR},
    {WIA_DPC_ZOOM_POSITION,                   WIA_DPC_ZOOM_POSITION_STR},
    {WIA_DPC_PAN_POSITION,                    WIA_DPC_PAN_POSITION_STR},
    {WIA_DPC_TILT_POSITION,                   WIA_DPC_TILT_POSITION_STR},
    {WIA_DPC_TIMER_MODE,                      WIA_DPC_TIMER_MODE_STR},
    {WIA_DPC_TIMER_VALUE,                     WIA_DPC_TIMER_VALUE_STR},
    {WIA_DPC_POWER_MODE,                      WIA_DPC_POWER_MODE_STR},
    {WIA_DPC_BATTERY_STATUS,                  WIA_DPC_BATTERY_STATUS_STR},
    {WIA_DPC_DIMENSION,                       WIA_DPC_DIMENSION_STR},
    {WIA_DPS_HORIZONTAL_BED_SIZE,             WIA_DPS_HORIZONTAL_BED_SIZE_STR},
    {WIA_DPS_VERTICAL_BED_SIZE,               WIA_DPS_VERTICAL_BED_SIZE_STR},
    {WIA_DPS_HORIZONTAL_SHEET_FEED_SIZE,      WIA_DPS_HORIZONTAL_SHEET_FEED_SIZE_STR},
    {WIA_DPS_VERTICAL_SHEET_FEED_SIZE,        WIA_DPS_VERTICAL_SHEET_FEED_SIZE_STR},
    {WIA_DPS_SHEET_FEEDER_REGISTRATION,       WIA_DPS_SHEET_FEEDER_REGISTRATION_STR},
    {WIA_DPS_HORIZONTAL_BED_REGISTRATION,     WIA_DPS_HORIZONTAL_BED_REGISTRATION_STR},
    {WIA_DPS_VERTICAL_BED_REGISTRATION,       WIA_DPS_VERTICAL_BED_REGISTRATION_STR},
    {WIA_DPS_PLATEN_COLOR,                    WIA_DPS_PLATEN_COLOR_STR},
    {WIA_DPS_PAD_COLOR,                       WIA_DPS_PAD_COLOR_STR},
    {WIA_DPS_FILTER_SELECT,                   WIA_DPS_FILTER_SELECT_STR},
    {WIA_DPS_DITHER_SELECT,                   WIA_DPS_DITHER_SELECT_STR},
    {WIA_DPS_DITHER_PATTERN_DATA,             WIA_DPS_DITHER_PATTERN_DATA_STR},
    {WIA_DPS_DOCUMENT_HANDLING_CAPABILITIES,  WIA_DPS_DOCUMENT_HANDLING_CAPABILITIES_STR},
    {WIA_DPS_DOCUMENT_HANDLING_STATUS,        WIA_DPS_DOCUMENT_HANDLING_STATUS_STR},
    {WIA_DPS_DOCUMENT_HANDLING_SELECT,        WIA_DPS_DOCUMENT_HANDLING_SELECT_STR},
    {WIA_DPS_DOCUMENT_HANDLING_CAPACITY,      WIA_DPS_DOCUMENT_HANDLING_CAPACITY_STR},
    {WIA_DPS_OPTICAL_XRES,                    WIA_DPS_OPTICAL_XRES_STR},
    {WIA_DPS_OPTICAL_YRES,                    WIA_DPS_OPTICAL_YRES_STR},
    {WIA_DPS_ENDORSER_CHARACTERS,             WIA_DPS_ENDORSER_CHARACTERS_STR},
    {WIA_DPS_ENDORSER_STRING,                 WIA_DPS_ENDORSER_STRING_STR},
    {WIA_DPS_SCAN_AHEAD_PAGES,                WIA_DPS_SCAN_AHEAD_PAGES_STR},
    {WIA_DPS_MAX_SCAN_TIME,                   WIA_DPS_MAX_SCAN_TIME_STR},
    {WIA_DPS_PAGES,                           WIA_DPS_PAGES_STR},
    {WIA_DPS_PAGE_SIZE,                       WIA_DPS_PAGE_SIZE_STR},
    {WIA_DPS_PAGE_WIDTH,                      WIA_DPS_PAGE_WIDTH_STR},
    {WIA_DPS_PAGE_HEIGHT,                     WIA_DPS_PAGE_HEIGHT_STR},
    {WIA_DPS_PREVIEW,                         WIA_DPS_PREVIEW_STR},
    {WIA_DPS_TRANSPARENCY,                    WIA_DPS_TRANSPARENCY_STR},
    {WIA_DPS_TRANSPARENCY_SELECT,             WIA_DPS_TRANSPARENCY_SELECT_STR},
    {WIA_DPS_SHOW_PREVIEW_CONTROL,            WIA_DPS_SHOW_PREVIEW_CONTROL_STR},
    {WIA_DPS_MIN_HORIZONTAL_SHEET_FEED_SIZE,  WIA_DPS_MIN_HORIZONTAL_SHEET_FEED_SIZE_STR},
    {WIA_DPS_MIN_VERTICAL_SHEET_FEED_SIZE,    WIA_DPS_MIN_VERTICAL_SHEET_FEED_SIZE_STR},
    {WIA_DPS_USER_NAME,                       WIA_DPS_USER_NAME_STR},
    {WIA_DPV_LAST_PICTURE_TAKEN,              WIA_DPV_LAST_PICTURE_TAKEN_STR},
    {WIA_DPV_IMAGES_DIRECTORY,                WIA_DPV_IMAGES_DIRECTORY_STR},
    {WIA_DPV_DSHOW_DEVICE_PATH,               WIA_DPV_DSHOW_DEVICE_PATH_STR},
    {WIA_DPF_MOUNT_POINT,                     WIA_DPF_MOUNT_POINT_STR},
    {WIA_IPA_ITEM_NAME,                       WIA_IPA_ITEM_NAME_STR},
    {WIA_IPA_FULL_ITEM_NAME,                  WIA_IPA_FULL_ITEM_NAME_STR},
    {WIA_IPA_ITEM_TIME,                       WIA_IPA_ITEM_TIME_STR},
    {WIA_IPA_ITEM_FLAGS,                      WIA_IPA_ITEM_FLAGS_STR},
    {WIA_IPA_ACCESS_RIGHTS,                   WIA_IPA_ACCESS_RIGHTS_STR},
    {WIA_IPA_DATATYPE,                        WIA_IPA_DATATYPE_STR},
    {WIA_IPA_DEPTH,                           WIA_IPA_DEPTH_STR},
    {WIA_IPA_PREFERRED_FORMAT,                WIA_IPA_PREFERRED_FORMAT_STR},
    {WIA_IPA_FORMAT,                          WIA_IPA_FORMAT_STR},
    {WIA_IPA_COMPRESSION,                     WIA_IPA_COMPRESSION_STR},
    {WIA_IPA_TYMED,                           WIA_IPA_TYMED_STR},
    {WIA_IPA_CHANNELS_PER_PIXEL,              WIA_IPA_CHANNELS_PER_PIXEL_STR},
    {WIA_IPA_BITS_PER_CHANNEL,                WIA_IPA_BITS_PER_CHANNEL_STR},
    {WIA_IPA_PLANAR,                          WIA_IPA_PLANAR_STR},
    {WIA_IPA_PIXELS_PER_LINE,                 WIA_IPA_PIXELS_PER_LINE_STR},
    {WIA_IPA_BYTES_PER_LINE,                  WIA_IPA_BYTES_PER_LINE_STR},
    {WIA_IPA_NUMBER_OF_LINES,                 WIA_IPA_NUMBER_OF_LINES_STR},
    {WIA_IPA_GAMMA_CURVES,                    WIA_IPA_GAMMA_CURVES_STR},
    {WIA_IPA_ITEM_SIZE,                       WIA_IPA_ITEM_SIZE_STR},
    {WIA_IPA_COLOR_PROFILE,                   WIA_IPA_COLOR_PROFILE_STR},
    {WIA_IPA_MIN_BUFFER_SIZE,                 WIA_IPA_MIN_BUFFER_SIZE_STR},
    {WIA_IPA_REGION_TYPE,                     WIA_IPA_REGION_TYPE_STR},
    {WIA_IPA_ICM_PROFILE_NAME,                WIA_IPA_ICM_PROFILE_NAME_STR},
    {WIA_IPA_APP_COLOR_MAPPING,               WIA_IPA_APP_COLOR_MAPPING_STR},
    {WIA_IPA_PROP_STREAM_COMPAT_ID,           WIA_IPA_PROP_STREAM_COMPAT_ID_STR},
    {WIA_IPA_FILENAME_EXTENSION,              WIA_IPA_FILENAME_EXTENSION_STR},
    {WIA_IPA_SUPPRESS_PROPERTY_PAGE,          WIA_IPA_SUPPRESS_PROPERTY_PAGE_STR},
    {WIA_IPC_THUMBNAIL,                       WIA_IPC_THUMBNAIL_STR},
    {WIA_IPC_THUMB_WIDTH,                     WIA_IPC_THUMB_WIDTH_STR},
    {WIA_IPC_THUMB_HEIGHT,                    WIA_IPC_THUMB_HEIGHT_STR},
    {WIA_IPC_AUDIO_AVAILABLE,                 WIA_IPC_AUDIO_AVAILABLE_STR},
    {WIA_IPC_AUDIO_DATA_FORMAT,               WIA_IPC_AUDIO_DATA_FORMAT_STR},
    {WIA_IPC_AUDIO_DATA,                      WIA_IPC_AUDIO_DATA_STR},
    {WIA_IPC_NUM_PICT_PER_ROW,                WIA_IPC_NUM_PICT_PER_ROW_STR},
    {WIA_IPC_SEQUENCE,                        WIA_IPC_SEQUENCE_STR},
    {WIA_IPC_TIMEDELAY,                       WIA_IPC_TIMEDELAY_STR},
    {WIA_IPS_CUR_INTENT,                      WIA_IPS_CUR_INTENT_STR},
    {WIA_IPS_XRES,                            WIA_IPS_XRES_STR},
    {WIA_IPS_YRES,                            WIA_IPS_YRES_STR},
    {WIA_IPS_XPOS,                            WIA_IPS_XPOS_STR},
    {WIA_IPS_YPOS,                            WIA_IPS_YPOS_STR},
    {WIA_IPS_XEXTENT,                         WIA_IPS_XEXTENT_STR},
    {WIA_IPS_YEXTENT,                         WIA_IPS_YEXTENT_STR},
    {WIA_IPS_PHOTOMETRIC_INTERP,              WIA_IPS_PHOTOMETRIC_INTERP_STR},
    {WIA_IPS_BRIGHTNESS,                      WIA_IPS_BRIGHTNESS_STR},
    {WIA_IPS_CONTRAST,                        WIA_IPS_CONTRAST_STR},
    {WIA_IPS_ORIENTATION,                     WIA_IPS_ORIENTATION_STR},
    {WIA_IPS_ROTATION,                        WIA_IPS_ROTATION_STR},
    {WIA_IPS_MIRROR,                          WIA_IPS_MIRROR_STR},
    {WIA_IPS_THRESHOLD,                       WIA_IPS_THRESHOLD_STR},
    {WIA_IPS_INVERT,                          WIA_IPS_INVERT_STR},
    {WIA_IPS_WARM_UP_TIME,                    WIA_IPS_WARM_UP_TIME_STR},
#if (_WIN32_WINNT >= 0x0600)
    {WIA_IPA_ITEM_CATEGORY,                   WIA_IPA_ITEM_CATEGORY_STR},
    {WIA_IPA_RAW_BITS_PER_CHANNEL,            WIA_IPA_RAW_BITS_PER_CHANNEL_STR},
    {WIA_IPS_DESKEW_X,                        WIA_IPS_DESKEW_X_STR},
    {WIA_IPS_DESKEW_Y,                        WIA_IPS_DESKEW_Y_STR},
    {WIA_IPS_SEGMENTATION,                    WIA_IPS_SEGMENTATION_STR},
    {WIA_IPS_MAX_HORIZONTAL_SIZE,             WIA_IPS_MAX_HORIZONTAL_SIZE_STR},
    {WIA_IPS_MAX_VERTICAL_SIZE,               WIA_IPS_MAX_VERTICAL_SIZE_STR},
    {WIA_IPS_MIN_HORIZONTAL_SIZE,             WIA_IPS_MIN_HORIZONTAL_SIZE_STR},
    {WIA_IPS_MIN_VERTICAL_SIZE,               WIA_IPS_MIN_VERTICAL_SIZE_STR},
    {WIA_IPS_SHEET_FEEDER_REGISTRATION,       WIA_IPS_SHEET_FEEDER_REGISTRATION_STR},
    {WIA_IPS_DOCUMENT_HANDLING_SELECT,        WIA_IPS_DOCUMENT_HANDLING_SELECT_STR},
    {WIA_IPS_OPTICAL_XRES,                    WIA_IPS_OPTICAL_XRES_STR},
    {WIA_IPS_OPTICAL_YRES,                    WIA_IPS_OPTICAL_YRES_STR},
    {WIA_IPS_PAGES,                           WIA_IPS_PAGES_STR},
    {WIA_IPS_PAGE_SIZE,                       WIA_IPS_PAGE_SIZE_STR},
    {WIA_IPS_PAGE_WIDTH,                      WIA_IPS_PAGE_WIDTH_STR},
    {WIA_IPS_PAGE_HEIGHT,                     WIA_IPS_PAGE_HEIGHT_STR},
    {WIA_IPS_PREVIEW,                         WIA_IPS_PREVIEW_STR},
    {WIA_IPS_SHOW_PREVIEW_CONTROL,            WIA_IPS_SHOW_PREVIEW_CONTROL_STR},
    {WIA_IPS_TRANSFER_CAPABILITIES,           WIA_IPS_TRANSFER_CAPABILITIES_STR},
    {WIA_IPS_FILM_SCAN_MODE,                  WIA_IPS_FILM_SCAN_MODE_STR},
    {WIA_IPS_LAMP,                            WIA_IPS_LAMP_STR},
    {WIA_IPS_LAMP_AUTO_OFF,                   WIA_IPS_LAMP_AUTO_OFF_STR},
    {WIA_IPS_AUTO_DESKEW,                     WIA_IPS_AUTO_DESKEW_STR},
    {WIA_IPS_SUPPORTS_CHILD_ITEM_CREATION,    WIA_IPS_SUPPORTS_CHILD_ITEM_CREATION_STR},
    {WIA_IPS_PREVIEW_TYPE,                    WIA_IPS_PREVIEW_TYPE_STR},
    {WIA_IPS_XSCALING,                        WIA_IPS_XSCALING_STR},
    {WIA_IPS_YSCALING,                        WIA_IPS_YSCALING_STR},
    {WIA_IPA_UPLOAD_ITEM_SIZE,                WIA_IPA_UPLOAD_ITEM_SIZE_STR},
    {WIA_IPA_ITEMS_STORED,                    WIA_IPA_ITEMS_STORED_STR},
#endif
    {0,                                       L"Not a WIA property"}
};
#else
extern WIA_PROPID_TO_NAME g_wiaPropIdToName[];
#endif
#include <poppack.h>
#endif
#endif
