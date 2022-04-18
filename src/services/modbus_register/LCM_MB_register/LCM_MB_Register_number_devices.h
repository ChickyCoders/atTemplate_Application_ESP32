#ifndef _Register_atMB_
#define _Register_atMB_

/* _____DEFINETIONS__________________________________________________________ */


// Coils Register
enum LCM_DISCRETE_OUTPUT_COILS_REGISTER_FOR_DEVICES_NUMBER
{
    LCM_COIL_RDM_NUMBER = 10,
	LCM_COIL_SNM_NUMBER,
	LCM_COIL_IDM_NUMBER,
	LCM_COIL_HDM_NUMBER,
	LCM_COIL_EMM_NUMBER
};

enum LCM_DISCRETE_INPUT_CONTACTS_REGISTER_FOR__DEVICES_NUMBER
{
    LCM_DI_RDM_NUMBER = 10,
	LCM_DI_SNM_NUMBER,
	LCM_DI_IDM_NUMBER,
	LCM_DI_HDM_NUMBER,
	LCM_DI_EMM_NUMBER
};

enum LCM_HOLDING_REGISTERS_FOR_DEVICES_NUMBER
{
    LCM_HR_RDM_NUMBER = 10,
	LCM_HR_SNM_NUMBER,
	LCM_HR_IDM_NUMBER,
	LCM_HR_HDM_NUMBER,
	LCM_HR_EMM_NUMBER
};

enum LCM_INPUT_REGISTERS_FOR_DEVICES_NUMBER
{
    LCM_IR_RDM_NUMBER = 10,
	LCM_IR_SNM_NUMBER,
	LCM_IR_IDM_NUMBER,
	LCM_IR_HDM_NUMBER,
	LCM_IR_EMM_NUMBER
};


#endif