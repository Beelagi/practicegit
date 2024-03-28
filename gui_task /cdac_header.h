#ifndef CDAC_HEADER_H
#define CDAC_HEADER_H

#include <stdio.h>

#define TECH_1 1	//"Type_A"
#define TECH_2 2	//"Type_B"
#define TECH_3 3	//"Type_F"
#define TECH_4 4	 //	"Type V / ISO 15693 / T5T"
#define TECH_5 5	//ISO 18000p3m3 / EPC Gen2

#define TYPE_0	0	//Multiple Card detected or type not needed
#define TYPE_1	1	//"Type 1 Tag"
#define TYPE_2	2	//Type 2 Tag
#define TYPE_3	3	//Type 3 Tag
#define TYPE_4	4	//Type 4A Tag
#define TYPE_5	5	//Type P2P
#define TYPE_6	6	//Type NFC_DEP and  4A Tag

/* If card is not detected, but loop has been executed successfully. */
#define NO_CARD_PRESENT 101

#define BUFFER_LEN	(65536)


enum errorCodeForinitLibsNfcCard
{
    NFC_LIB_INIT_FAILED = 11,
    PHAPP_COMP_INIT_FAILED,
    PHAPP_CONFIG_IRQ_FAILED,
    ALREADY_INITIALIZED
};

enum errorForSamCardVoltageSelection
{
    FAILED_TO_SET_5_VOLTS = 21,
    FAILED_TO_SET_3_DOT_3_VOLTS,
    FAILED_TO_SET_1_DOT_8_VOLTS,
    INVALID_OPTION_IN_SELECTING_VOLTAGE_FOR_SAM
};

enum errorCodeForConnectAEPCard
{
    ERROR_ON_PHHALHW_FIELDOFF = 52,
    ERROR_ON_PHHAL_WAIT,
    ERROR_ON_CONFIGURING_DISCOVERY_LOOP,
    FAILED_TO_GET_CARD_DETAILS,
    LIBRARY_NOT_INITIALIZED
};

enum errorCodeForTransReceivetoAEP
{
    ERROR_ON_TRANSMISSION = 71
};


//Codes for SAM card init Failed
enum errorForSAMcardInitFunction
{
    HARDWARE_NOT_VALID = 31,
    ERROR_IN_OPENING_FILE,
    COLD_RESET_FAILED,
    GET_ATR_FAILED,
    SET_PROTOCOL_FAILED,
    SIM_SET_TIMING_FAILED,
    SET_BAUD_FAILED,
    SENDING_PPS_FAILED,
    GETTING_PPS_FAILED,
    SEND_T1_CMD_FAILED,
    RECEIVE_ERROR_AFTER_SENDING_T1_CMD,
    SAM_NOT_PRESENT,
    SAM_ALREADY_INITIALISED
    // Please do not add more error codes here.
    //Next will be assigned to 44 number which is alread present in our code.
};

//Codes for transmit and receive failed
enum errorForSAMcardTransceiveCT
{
    INIT_FAILED = 44,
    PASSED_LENGTH_IS_ZERO,
    ERROR_WHILE_COMMUNICATING,
    TRANSMIT_RECEIVE_ERROR,
    BUFFER_OVERRUN_ERROR,
    SYNCHRONIZATION_ERROR,
    IN_ARG_INVALID,
    NO_CT_CARD
    // Please do not add more error codes here.
    // Next will be assigned to 52 number which is alread present in our code.
};

enum errorForSAMcardDeInitProcess
{
    NOT_ABLE_TO_DEINIT_SAM_CARD = 61,
    SAM_CARD_NOT_INITIALIZED
};


#define BUFFER_LEN	(65536)
//Structure to get card parameter at the time of initialization
struct data
{
    uint8_t uid[128];	//Do not change the size
    uint16_t uidSize;
    uint16_t technology;
    uint16_t type;
    uint16_t multipleCard;
    uint8_t sak;
    uint16_t detectionStatus;
    uint16_t time_out_ms; //User can set time between 1 milisecond to 5 seconds.
                            //Also pass value in miliseconds only.
};

struct atr
{
    unsigned int retBytes;
    unsigned char *retBuff;
};



//Buffer used to take information from contactless card.
char convert(char ch);
int read_from_terminal(int *len, unsigned char *tx_buffer);
int chkin_fcntl(void);
char *remove_space(char *temp_data);

int initLibsNfcCard(void);



//API for Connecting ContactCL Card
int ConnectCLCard(struct data *cardParam);

//API for communicating with  Contactless card
int TransceiveCL(unsigned char *tx_buffer,unsigned int tx_buffer_length,unsigned char * rx_buffer,unsigned int *rx_buffer_length);

//API for disconnecting contact-less card
void disConnectCLCard(void);

//API for selecting Voltage
int selectVoltageForSamCard(int voltageNum);

//Api for connecting contact /SAM card
int InitCT(struct atr* ATR);
//int ConnectSAMCard(struct atr* ATR);

//API for communicating contact/ SAM card
int TransceiveCT(unsigned char *tx_buffer,unsigned int tx_buffer_length,unsigned char* rx_buffer,unsigned int* rx_buffer_length);

//API for disconnecting contact/SAM card
int DeInitCT(void);

#endif // CDAC_HEADER_H
