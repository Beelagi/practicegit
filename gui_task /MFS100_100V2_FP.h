#ifndef MFS100_100V2_FP_H
#define MFS100_100V2_FP_H

// Include files
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#if defined(__cplusplus)
extern "C" {
#endif

/************************************ Macro **********************************/
/** use below Macros as productName for MFS100 V2*/
#define PRODUCT_NAME_MFS100                             "MFS100"
#define PRODUCT_NAME_MFS100V2                           "MFS100 V2"

#define FINGER_IMAGE_WIDTH_MAX                          1280
#define FINGER_IMAGE_HEIGHT_MAX                         720

#define BMP_HEADER_LEN                                  1078
/** Max string len for device version info */
#define MFS100_100V2_FINGER_AUTH_LIB_VER_MAX_LEN        12
#define MFS100_100V2_FINGER_AUTH_SERIAL_NO_MAX_LEN      13
#define MFS100_100V2_FINGER_AUTH_FIRMWARE_VER_MAX_LEN   13
#define MFS100_100V2_FINGER_AUTH_MAKE_MAX_LEN           7
#define MFS100_100V2_FINGER_AUTH_MODEL_MAX_LEN          12

/************************************ Enumuration **********************************/
/**
 * @brief The MFS100_100V2_FINGER_AUTH_LOG_LEVEL enum : enum for log levels
 * @note : used in method MFS100_100V2_Finger_Auth_EnableLogs to set log Properties
 */
typedef enum _MFS100_100V2_FINGER_AUTH_LOG_LEVEL_ {
    /** log level 0 - no logs - default */
    MFS100_100V2_FINGER_AUTH_LVL_LOG_OFF = 0,

    /** log level 1 - for error messages */
    MFS100_100V2_FINGER_AUTH_LVL_LOG_ERROR = 1,
} MFS100_100V2_FINGER_AUTH_LOG_LEVEL;

/**
 * @brief IMAGE_FORMAT enum : for diffrent types of image formats
 * @note : used to get Image in diffrent format by MidFinger_Auth_GetImage method
 */
typedef enum _IMAGE_FORMAT {
    /** To get bmp image data */
    BMP = 0,
    /** To get jpeg2000 image data */
    JPEG2000 = 1,
    /** To get wsq image data */
    WSQ = 2,
    /** To get raw image data */
    RAW = 3,
    /** ISO/IES 19794-4 :2005*/
    FIR_V2005 = 4,
    /** ISO/IES 19794-4 :2011*/
    FIR_V2011 = 5,
    /** ISO/IES 19794-4 :2005 template with WSQ compression*/
    FIR_WSQ_V2005 = 6,
    /** ISO/IES 19794-4 :2011 template with WSQ compression*/
    FIR_WSQ_V2011 = 7,
    /** ISO/IES 19794-4 :2005 template with JPEG2000 compression*/
    FIR_JPEG2000_V2005 = 8,
    /** ISO/IES 19794-4 :2011 template with JPEG2000 compression*/
    FIR_JPEG2000_V2011 = 9,
} IMAGE_FORMAT;

/**
 * @brief TEMPLATE_FORMAT enum : for diffrent types of templates
 * @note : used to get diffrent type of template by MidFinger_Auth_GetTemplate method
 */
typedef enum _TEMPLATE_FORMAT {
    /** ISO/IES 19794-2 :2005*/
    FMR_V2005 = 0,
    /** ISO/IES 19794-2 :2011*/
    FMR_V2011 = 1,
    /** ANSI/INCITS 378 :2004*/
    ANSI_V378 = 2,
} TEMPLATE_FORMAT;

/**
 * @brief The _DEVICE_DETECTION_EVENT enumeration for device status
 * @note : used in callback function DEVICE_DETECTION to set status of the device
 */
typedef enum _DEVICE_DETECTION_EVENT {
    /* For device disconnected */
    EVENT_DISCONNECTED = 0,

    /* For device connected */
    EVENT_CONNECTED = 1,
} DEVICE_DETECTION_EVENT;

/************************************************ErrorCodes***********************************************************/
/**
 * @brief MFS100_100V2_FINGER_AUTH_LIB_ERROR_CODE enum : all return error codes
 */
typedef enum _MFS100_100V2_FINGER_AUTH_LIB_ERROR_CODE_ {
    /** Succes */
    MFS100_100V2_FINGER_AUTH_SUCCESS = 0,
    /** No Device found in Image Process */
    IMG_PROCESS_E_NO_DEVICE = -1601,
    /** memory error found in Image Process */
    IMG_PROCESS_E_MEMORY = -1602,
    /** Invalid license found in Image Process */
    IMG_PROCESS_E_BAD_LICENSE = -1603,
    /** Unkown error in Image process*/
    IMG_PROCESS_E_OTHER = -1604,
    /** Invalid Paramer */
    IMG_PROCESS_E_INVALIDPARAM = -1605,
    /** VID Not Match */
    IMG_PROCESS_VID_NOTMATCH = -1606,
    /** PID Not Match */
    IMG_PROCESS_PID_NOTMATCH = -1607,
    /** CID Not Match */
    IMG_PROCESS_CID_NOTMATCH = -1608,
    /** No Seial number found*/
    IMG_PROCESS_E_NOSERIAL = -1609,
    /** Image Process Not Initlialzed */
    IMG_PROCESS_E_NOTINITIALIZED = -1610,
    /** Image Process No file found */
    IMG_PROCESS_E_NO_FILE = -1611,
    /** Invalid name length in Image Process */
    INVLD_PRODUCT_NAME_LEN = -2001,
    /** Invalid name in Image Process */
    INVLD_PRODUCT_NAME = -2002,
    /** failed to get Product Id */
    FAILED_TO_GET_PRODUCT_ID = -2003,
    /** failed Init Communication */
    FAILED_TO_INIT_COMM = -2004,
    /** failed to Init Device */
    FAILED_TO_INIT_DEVICE = -2005,
    /** failed to get Hardware Id */
    FAILED_TO_GET_HWID = -2006,
    /** failed to Register Callback */
    FAILED_TO_REGISTER_CALLBACK = -2007,
    /** failed to Create Thread */
    FAILED_TO_CREATE_THREAD = -2008,
    /** failed to create timeout thread */
    FAILED_TO_CREATE_TIMEOUT_THREAD = -2009,
    /** failed to create Callback thread */
    FAILED_TO_CREATE_CLBK_THREAD = -2010,
    /** failed to Start Capture */
    FAILED_TO_START_CAPTURE = -2011,
    /** failed to Stop Capture */
    FAILED_TO_STOP_CAPTURE = -2012,
    /** failed to Uninit Device */
    FAILED_TO_UINIT_DEVICE = -2013,
    /** failed to Uninit LIBS */
    FAILED_TO_UINIT_LIBS = -2014,
    /** failed to restore MFG data */
    FAILED_TO_RESTORE_MFG_DATA = -2015,
    /** failed to get MFG Data */
    FAILED_TO_GET_MFG_DATA = -2016,
    /** failed to get FPS Data */
    FAILED_TO_FPS_GET_DATA = -2017,
    /** Invalid License key */
    INVLD_LIC_KEY = -2018,
    /** Native Capture Timeout occurs */
    NATIVE_CAPTURE_TIMEOUT = -2019,
    /** failed to Memory allocation failed */
    FAILED_TO_ALLOC_MEM = -2020,
    /** failed to get serial number */
    FAILED_TO_GET_SER_NO = 2021,
    /** Device Info Struct */
    NULL_DEVICE_INFO_STRUCT = -2022,
    /** capture already started */
    CAPTURE_ALREADY_STARTED = -2023,
    /** Device already Initialized */
    DEVICE_ALREADY_INITIALIZED = -2024,
    /** Device Not Initialized */
    DEVICE_NOT_INITIALIZED = -2025,
    /** object can not be null or empty */
    OBJECT_CANNOT_BE_NULL_OR_EMPTY = -2026,
    /** Device not Connected */
    DEVICE_NOT_CONNECTED = -2027,
    /** invalid callback function found */
    NULL_CALLBACK_FUNC_FOUND = -2028,
    /** failed to create array parsing */
    FAILED_TO_CREATE_PARSE_ARR = -2029,
    /** failed to read Device manufacture data */
    FAILED_TO_READ_DEV_MFG_DATA = -2030,
    /** failed to Init Image Processing */
    IPL_DEV_INIT_FAILED = -2031,
    /** failed to Init lib for Image Processing */
    IPL_INIT_FAILED = -2032,
    /** failed to get Image Qaulity */
    FAILED_TO_GET_IMG_QLTY = -2033,
    /** failed to process Raw data */
    FAILED_TO_PROCESS_RAW_DATA = -2034,
    /** failed to process MFG data */
    FAILED_TO_PROCESS_MFG_DATA = -2035,
    /** failed to Set encryption key */
    FAILED_TO_SET_ENC_KEY = -2036,
    /** failed to get template */
    FAILED_TO_GET_TEMPLATE = -2037,
    /** Image not Captured */
    IMAGE_NOT_CAPTURED = -2038, // Capture Image not found
    /** Unsupported Image Format */
    UNSUPPORTED_IMAGE_FORMAT = -2040, // Image format not supported
    /**Unsupported template formate*/
    UNSUPPORTED_TEMPLATE_FORMAT = -2041, // Template format not supported
    /**Invalid compression ratio*/
    INVLD_COMPRESSION_RATIO = -2042,
    /** Device Not Streaming */
    DEVICE_NOT_STREAMING = -2043,
    /** Invalid Template version */
    INVLD_TEMPLATE_VERSION = -2044,
    /** Failed To Init Segmentation */
    FAILED_TO_INIT_SEGMENTAION = -2045,
    /** Failed to Update Leds*/
    FAILED_TO_UPDATE_LEDS = -2046,
    /** Failed to Update Leds*/
    FAILED_TO_UPDATE_DUTY_CYCLE = -2047,
    /** Invalid log level. */
    INVLD_LOG_LEVEL = -2048,
    /** Failed to create log level. */
    FAILED_TO_CREATE_LOG_FILE = -2049,
    /** failed to update Led */
    MFS100_100V2_FINGER_AUTH_FAILED_TO_UPDATE_LED = -2050,
    /** feature not supported */
    MFS100_100V2_FINGER_AUTH_UNSUPPORTED_FEATURE = -2051,
    /** Capture stoped */
    CAPTURE_STOP = -2052,
    /** Invalid Firmware */
    INVLD_FIRMWARE = -2053,
    /** Invalid Input parameter*/
    MFS100_100V2_FINGER_AUTH_INVLD_INPUT = -2054,
    /** failed to get image*/
    FAILED_TO_GET_IMAGE = -2055,
    /** failed to match image*/
    FAILED_TO_MATCH_IMAGE = -2057,
    /** failed to match template*/
    FAILED_TO_MATCH_TEMPLATE = -2058,
    /** Timeout thread already running*/
    TIME_OUT_THREAD_ALREADY_RUNNING = -2059,
    /** Capture thread already running*/
    CAPTURE_THREAD_ALREADY_RUNNING = -2060,
    /** Some mfg library related error happend */
    MFG_LIB_ERROR = -3000,
} MFS100_100V2_FINGER_AUTH_LIB_ERROR_CODE;

/**
 * @brief DEVICE_LIST : structure to hold device name list
 * @note : used to store device name list
 */
typedef struct _DEVICE_LIST {
    char Model[MFS100_100V2_FINGER_AUTH_MODEL_MAX_LEN]; //device model
} DEVICE_LIST;

/************************ Functions ******************************************/
/**
 * @brief MFS100_100V2_Finger_Auth_InitDevice: This API is to Init library and device.
 *                                             This will internally identify and init device.
 * @return: 0 for success, -ve if there is any error.
 */
int32_t MFS100_100V2_Finger_Auth_InitDevice();

/**
 * @brief MFS100_100V2_Finger_Auth_IsDeviceConnected: This API is to return device connection status.
 * @param fd[In]: file descriptor for USB in case of Android, for linux pass its value as -1.
 * @param productName[In]: Product name for which library needs to be initialized.
 * @param productNameLen[In]: Product name string length.
 * @return: 0 in the case of device is connected, -ve if device is not connected.
 */
int32_t MFS100_100V2_Finger_Auth_IsDeviceConnected(int32_t fd, const char *productName, uint32_t productNameLen);

/**
 * @brief MFS100_100V2_Finger_Auth_GetVersion: This API is to provide Library version in passed argment.
 * @param ver[Out]: This argument will hold library version string detail on success.
 * @return: 0 in case of success, -ve for failed or error.
 * @note: user has to allocate memory of size MFS100_100V2_FINGER_AUTH_LIB_VER_MAX_LEN and pass in argument.
 */
int32_t MFS100_100V2_Finger_Auth_GetVersion(char *ver);

/**
 * @brief MFS100_100V2_Finger_Auth_GetSupportedDeviceList: This function returns list of names of the device supported by the library. If 1st parameter is passed as null then it this function will return only count of name list.
 * @param devList: A structure with memory alloated for deviceCnt number of strings.
 * @param deviceCnt: This parameter will hold number of devices supported by the library.
 * @return : 0 in case of success, -ve for failed or error.
 */
int32_t MFS100_100V2_Finger_Auth_GetSupportedDeviceList(DEVICE_LIST *devList, int32_t *deviceCnt);

/**
 * @brief MFS100_100V2_Finger_Auth_GetDeviceList: This function will return list of devices connected with system. If 1st parameter is passed as null then it this function will return only count of name list.
 * @param StDeviceList: This structure will hold name list of the connected devices on success.
 * @param DeviceCnt: This parameter will hold number of devices connected to the library.
 * @return : 0 in case of success, -ve for failed or error.
 */
int32_t MFS100_100V2_Finger_Auth_GetDeviceList(DEVICE_LIST *deviceList, int32_t *deviceCnt);

/**
 * @brief MFS100_100V2_FINGER_AUTH_PREVIEW_CALLBACK : type of callback function to get Image and Quality during Capturing
 * @param errorCode[Out]: 0 in case of success, other for failed or error.
 * @param quality[Out]: contains final Finger's Image Qaulity
 * @param previewImage[Out]: pointer to Finger Image for preview.
 * @param previewImageLen[Out]: Finger Image length.
 * @note : This type of Callback function should be use as input argument for MFS100_100V2_Finger_Auth_StartCapture and MFS100_100V2_Finger_Auth_AutoStartCapture APIs.
 */
typedef void (*MFS100_100V2_FINGER_AUTH_PREVIEW_CALLBACK)(int32_t errorCode, int32_t quality, const uint8_t *previewImage, const int32_t previewImageLen);

/**
 * @brief MFS100_100V2_FINGER_AUTH_CAPTURE_COMPLETE_CALLBACK : type of callback function called on Complation of Capture
 * and provide Capture Image Parameter like Quality.
 * @param errorCode[Out]: 0 in case of success, other for failed or error.
 * @param quality[Out]: Finger's Image Qaulity
 * @note : This type of Callback function should be use as input for MFS100_100V2_Finger_Auth_StartCapture.
 */
typedef void (*MFS100_100V2_FINGER_AUTH_CAPTURE_COMPLETE_CALLBACK)(int32_t errorCode, int32_t quality);

/**
 * @brief DEVICE_DETECTION : type of callback function called on Device Attached And Detached
 * @note : type of Callback function should be use as input for MFS100_100V2_Finger_Auth_RegisterDetectionCallback
 */
typedef void (*MFS100_100V2_FINGER_AUTH_DEVICE_DETECTION)(const char *deviceName, DEVICE_DETECTION_EVENT dvcStatus);

/**
 * @brief MFS100_100V2_Finger_Auth_RegisterDetectionCallback: This API will use for Device Auto Detection.
 * @param deviceDetectionCB[Out]: A callback function which will raise on device attachment and detachment and provide details like Device Name and Event name.
 * @return : 0 in case of success, other for failed or error.
 * @note : It will provide only device status to the user (Connected/Disconnected).
 *         This status is not updated in the device.
 *         Also, if multiple devices of same vendor ID/Product ID are attached,
 *         and any one of it is disconnected, the status will be shown as connected until
 *         there is at least one device connected.
 */
int32_t MFS100_100V2_Finger_Auth_RegisterDetectionCallback(MFS100_100V2_FINGER_AUTH_DEVICE_DETECTION deviceDetectionCB);

/**
 * @param minQuality[In]: This is min quality level, from which it will try to get best of MAX_FRAME_COUNT_TO_PROC frame finger quality.
 * @param maxQuality[In]: this Quality level once achieved, device will stop capturing.
 * @param timeout[In]: Timeout value at which device will timed out for capturing and capturing will be stopped.
 * @param previewCb[out]: A callback function which called by Lib to provide details like error code, quality, Structure of Finger images raw data for preview and data length, continuously.
 *  Memory allocated to rawdata will be de-allocated at library side. User is not required to free memory.
 * @param completeCb[out]: A callback function which triggered when desired quality level achieved. It will contain errorcode if any, quality for the
 * @note final image, raw data for Finger images data and length in structure. Memory allocated to rawdata will be de-allocated at library side. User is not required to free memory.
 * @return : 0 in case of success, -ve for failed or error.
 */
int32_t MFS100_100V2_Finger_Auth_StartCapture(int32_t minQuality, int32_t maxQuality, int32_t timeout, MFS100_100V2_FINGER_AUTH_PREVIEW_CALLBACK previewCb, MFS100_100V2_FINGER_AUTH_CAPTURE_COMPLETE_CALLBACK completeCb);

/**
 * @brief MFS100_100V2_Finger_Auth_AutoCapture: This API is to start Finger images capturing and will returned only when desired level of quality achieved.
 * @param minQuality[In]: This is min quality level, from which it will try to get best of MAX_FRAME_COUNT_TO_PROC frame finger quality.
 * @param maxQuality[In]: This is the quality level once achieved, device will stop capturing.
 * @param timeout[In]: Timeout value at which device will timed out for capturing and capturing will be stopped.
 * @param quality[Out]: This will hold quality of the captured Finger images.
 * @param previewCb[Out]: A call back function which will provide details like error code, quality, Finger images raw data for preview and data length, continuously.
 * @param withStopCapture: If you want to stop inside Auto capture, pass it as "true", If you want to externally stop(i.e. To reduce capture time), pass it as "false".
 * @note Memory allocated to rawdata will be de-allocated at library side. not required to free memory by user.
 * @return : 0 in case of success, -ve for failed or error.
 */
int32_t MFS100_100V2_Finger_Auth_AutoCapture(int32_t minQuality, int32_t maxQuality, int32_t timeout,  MFS100_100V2_FINGER_AUTH_PREVIEW_CALLBACK previewCb, bool withStopCapture);

/**
 * @brief MFS100_100V2_Finger_Auth_StopCapture: This API is to stop Finger images capturing.
 * @return : 0 in case of success, -ve for failed or error.
 */
int32_t MFS100_100V2_Finger_Auth_StopCapture(void);

/**
 * @brief MFS100_100V2_Finger_Auth_GetImage: This API will provide captured image data and its length in requested image format.
 * @param image[Out]: This parameter will hold pointer to captured image raw data. User must allocate memory for this parameter.
 * @param imageLen[In/Out]: This parameter will hold captured image data buffer length on input time and in return it will hold image data length.
 * @param format[In]: Type of image data required, user should specify format as per _IMAGE_FORMAT enum value.
 * @param compressionRatio[In]: Required Compression ratio
 * @return : 0 in case of success, -ve for failed or error.
 */
int32_t MFS100_100V2_Finger_Auth_GetImage(uint8_t *image, uint32_t *imageLen, IMAGE_FORMAT format, uint16_t compressionRatio);

/**
 * @brief MFS100_100V2_Finger_Auth_GetTemplate: This API will provide captured image data and its length in requested image format.
 * @param image[Out]: This parameter will hold pointer to captured image raw data. User must allocate memory for this parameter.
 * @param imageLen[In/Out]: This parameter will hold captured image data buffer length on input time and in return it will hold image data length.
 * @param format[In]: Type of image data required, user should specify format as per _TEMPLATE_FORMAT enum value.
 * @param compressionRatio[In]: Required Compression ratio
 * @return : 0 in case of success, -ve for failed or error.
 */
int32_t MFS100_100V2_Finger_Auth_GetTemplate(uint8_t *image, uint32_t *imageLen, TEMPLATE_FORMAT format);

/**
 * @brief MFS100_100V2_Finger_Auth_MatchImage: This API will compare two templates and provides match score for the templates comparision
 * @param probImage[In]: Input template 1
 * @param probImageLen[In]: Length of the Input template 1
 * @param galleryImage[In]: Input template 2
 * @param galleryImageLen[In]: Length of the Input template 2
 * @param matchScore[Out]: Matching score for the provided template comparision
 * @note: format[In]: it should be K7 OR IIR_K7_2011 from IMAGE_FORMAT
 * @return : 0 in case of success, -ve for failed or error.
 */
int32_t MFS100_100V2_Finger_Auth_MatchImage(uint8_t *probImage, uint32_t probImageLen, uint8_t *galleryImage,
                                            uint32_t galleryImageLen, uint32_t *matchScore, IMAGE_FORMAT format);

/**
 * @brief MFS100_100V2_Finger_Auth_MatchTemplate: This API will compare two templates and provides match score for the templates comparision
 * @param probTemplate[In]: Input template 1
 * @param probTemplateLen[In]: Length of the Input template 1
 * @param galleryTemplate[In]: Input template 2
 * @param galleryTemplateLen[In]: Length of the Input template 2
 * @param matchScore[Out]: Matching score for the provided template comparision
 * @param format[In]: Format of the input templates
 * @return : 0 in case of success, -ve for failed or error.
 */
int32_t MFS100_100V2_Finger_Auth_MatchTemplate(uint8_t *probTemplate, uint32_t probTemplateLen, uint8_t *galleryTemplate,
                                               uint32_t galleryTemplateLen, uint32_t *matchScore, TEMPLATE_FORMAT format);

/**
 * @brief MFS100_100V2_Finger_Auth_UninitDevice:This API is to uninit device and internal parameters along with used libraries.
 * @return : 0 in case of success, -ve for failed or error.
 */
int32_t MFS100_100V2_Finger_Auth_UninitDevice(void);

/**
 * @brief MFS100_100V2_Finger_Auth_GetErrDescription: This API is return error description string for the provided error code.
 * @param errNo[In]: Error code(retrun by APIs) for which error description is required.
 * @return : 0 in case of success, -ve for failed or error.
 */
const char *MFS100_100V2_Finger_Auth_GetErrDescription(const int32_t errNo);

/**
 * @brief MFS100_100V2_Finger_Auth_EnableLogs: This API is to set log related properties.
 * @param logLevel: Required log level. For levels find enum value for MFS100_100V2_FINGER_AUTH_LOG_LEVEL.
 * @param filePath: File path at where log file will be created. If not provided(NULL) then file with name "M0070Core.log" will be created in current directory.
 */
int32_t MFS100_100V2_Finger_Auth_EnableLogs(const MFS100_100V2_FINGER_AUTH_LOG_LEVEL logLevel, const char *dirPath);

#ifdef DEVELOPMENT_MODE
/**
 * @brief MFS100_100V2_Finger_Auth_GetFPS: This function is to get live streaming FPS of Finger.
 * @param fps[out]: contais pointer to fps
 * @return : 0 in case of success, -ve for failed or error.
 * @note: this API should only be called when device is streaming.
 */
int32_t Dev_MFS100_100V2_Finger_Auth_GetFPS(float *fps);
#endif //#ifdef DEVELOPMENT_MODE

#if defined(__cplusplus)
}
#endif

#endif // MFS100_100V2_FP_H
