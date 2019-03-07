/*
 * deviceid.hpp
 */

#ifndef DEVICEID_HPP_
#define DEVICEID_HPP_

#ifdef __cplusplus
extern "C" {
#endif

#ifndef KERNEL_MODULE
#include "m_device.hpp"
#endif

typedef enum
{
	CONTROLLER_DEVICE_ID_BEGIN = 0,
	SW_ID,
	PINPGM,
	DRAIN_LOCAL_GND_IN,
	DRAIN_CMD_28V_IN,
	DRAIN_LOCAL_28V_IN,
	DRAIN_CMD_GND_IN,
	WT_28V_IN,
	WT_GND_IN,
	VG_28V_OUT,
	VG_28V_OUT_DET,
	VG_GND_OUT,
	VG_GND_OUT_DET,
	FLV_DIR,
	FLV_NRESET,
	FLV_DECAY,
	FLV_NSLEEP,
	FLV_I4,
	FLV_ENABLE,
	EN_28VV,
	FLV_IND_CL,
	FLV_IND_OP,
	FLV_ALT_DRV_OP,
	FLV_ALT_DRV_CL,
	FLV_ALT_IND_CL,
	FLV_ALT_IND_OP,
	EN_485,
	SW_SOV,
	IR_ANA_INPUT,
	SOV_DRV_OP,
	SOV_DRV_CL,
	SOV_IND_CL,
	SOV_IND_OP,
	SOV_CL_GND_OUT,
	LEA1_28V_DOUT,
	LEA2_28V_DOUT,
	LEA1_GND_OUT,
	LEA2_GND_OUT,
	RGB_PWR_RED,
	RGB_PWR_GREEN,
	RGB_PWR_BLUE,
	RGB_SW_RED,
	RGB_SW_GREEN,
	RGB_SW_BLUE,
	LED3,
	LED4,
	LED5,
	LED6,
	LVL_FAIL_GND_OUT,
	OPERATION_FAIL_GND_OUT,
	FLV_I0_I3,
	CONTROLLER_DEVICE_ID_END
} ControllerDeviceIDs;

typedef enum
{
	ADC_DEVICE_ID_BEGIN = 0,
	AN0_LEVEL_H,
	AN1_LEVEL_L,
	AN2,
	AN3,
	AN4_LEA1,
	AN5_LEA2,
	AN6_POWER_CURRENT,
	AN7_POWER_VOLTAGE,
	AN8,
	AN9,
	AN10,
	ADC_DEVICE_ID_END
} ADCDeviceIDs;

typedef enum
{
	PWM_DEVICE_ID_BEGIN = 0,
	PWM,
	PWM_DEVICE_ID_END
} PWMDeviceIDs;


DeviceIdentity id_SW_ID		   		= {SW_ID,	    		"SW_ID"			};
DeviceIdentity id_PINPGM		    	= {PINPGM, 		    	"PINPGM"   		};
DeviceIdentity id_DRAIN_LOCAL_GND_IN		= {DRAIN_LOCAL_GND_IN,		"DRAIN_LOCAL_GND_IN"	};
DeviceIdentity id_DRAIN_CMD_28V_IN  		= {DRAIN_CMD_28V_IN,		"DRAIN_CMD_28V_IN"	};
DeviceIdentity id_DRAIN_LOCAL_28V_IN  		= {DRAIN_LOCAL_28V_IN,		"DRAIN_LOCAL_28V_IN"	};
DeviceIdentity id_DRAIN_CMD_GND_IN		= {DRAIN_CMD_GND_IN,		"DRAIN_CMD_GND_IN"	};
DeviceIdentity id_WT_28V_IN   			= {WT_28V_IN,  			"WT_28V_IN"		};
DeviceIdentity id_WT_GND_IN  			= {WT_GND_IN, 			"WT_GND_IN"		};
DeviceIdentity id_VG_28V_OUT      		= {VG_28V_OUT,       		"VG_28V_OUT"	    	};
DeviceIdentity id_VG_28V_OUT_DET		= {VG_28V_OUT_DET,    		"VG_28V_OUT_DET"	};
DeviceIdentity id_VG_GND_OUT    		= {VG_GND_OUT,   		"VG_GND_OUT"		};
DeviceIdentity id_VG_GND_OUT_DET		= {VG_GND_OUT_DET,		"VG_GND_OUT_DET"	};
DeviceIdentity id_FLV_DIR    			= {FLV_DIR,  			"FLV_DIR"   		};
DeviceIdentity id_FLV_NRESET    		= {FLV_NRESET,  		"FLV_NRESET"    	};
DeviceIdentity id_FLV_DECAY 			= {FLV_DECAY,  			"FLV_DECAY" 		};
DeviceIdentity id_FLV_NSLEEP  			= {FLV_NSLEEP,  		"FLV_NSLEEP" 		};
DeviceIdentity id_FLV_I4   			= {FLV_I4,  			"FLV_I4"  		};
DeviceIdentity id_FLV_ENABLE   			= {FLV_ENABLE,			"FLV_ENABLE"		};
DeviceIdentity id_EN_28VV    			= {EN_28VV,  			"EN_28VV"		};
DeviceIdentity id_FLV_IND_CL       		= {FLV_IND_CL,    	    	"FLV_IND_CL"      	};
DeviceIdentity id_FLV_IND_OP       		= {FLV_IND_OP,    	    	"FLV_IND_OP"      	};
DeviceIdentity id_FLV_ALT_DRV_OP  		= {FLV_ALT_DRV_OP,  		"FLV_ALT_DRV_OP" 	};
DeviceIdentity id_FLV_ALT_DRV_CL  		= {FLV_ALT_DRV_CL, 	 	"FLV_ALT_DRV_CL" 	};
DeviceIdentity id_FLV_ALT_IND_CL    		= {FLV_ALT_IND_CL,  		"FLV_ALT_IND_CL" 	};
DeviceIdentity id_FLV_ALT_IND_OP   		= {FLV_ALT_IND_OP,  		"FLV_ALT_IND_OP" 	};
DeviceIdentity id_EN_485	       		= {EN_485,       		"EN_485"      		};
DeviceIdentity id_SW_SOV	      		= {SW_SOV,       		"SW_SOV"	     	};
DeviceIdentity id_IR_ANA_INPUT       		= {IR_ANA_INPUT,        	"IR_ANA_INPUT"      	};
DeviceIdentity id_SOV_DRV_OP	 		= {SOV_DRV_OP, 			"SOV_DRV_OP"	 	};
DeviceIdentity id_SOV_DRV_CL	 		= {SOV_DRV_CL, 			"SOV_DRV_CL"	 	};
DeviceIdentity id_SOV_IND_CL       		= {SOV_IND_CL,      		"SOV_IND_CL"   	 	};
DeviceIdentity id_SOV_IND_OP       		= {SOV_IND_OP,      		"SOV_IND_OP"   	 	};
DeviceIdentity id_SOV_CL_GND_OUT		= {SOV_CL_GND_OUT,  		"SOV_CL_GND_OUT" 	};
DeviceIdentity id_LEA1_28V_DOUT  		= {LEA1_28V_DOUT, 		"LEA1_28V_DOUT"		};
DeviceIdentity id_LEA2_28V_DOUT  		= {LEA2_28V_DOUT, 		"LEA2_28V_DOUT"	 	};
DeviceIdentity id_LEA1_GND_OUT 			= {LEA1_GND_OUT, 		"LEA1_GND_OUT"	 	};
DeviceIdentity id_LEA2_GND_OUT  		= {LEA2_GND_OUT, 		"LEA2_GND_OUT"		};
DeviceIdentity id_RGB_PWR_RED			= {RGB_PWR_RED,  		"RGB_PWR_RED" 		};
DeviceIdentity id_RGB_PWR_GREEN			= {RGB_PWR_GREEN,  		"RGB_PWR_GREEN" 	};
DeviceIdentity id_RGB_PWR_BLUE			= {RGB_PWR_BLUE,  		"RGB_PWR_BLUE" 		};
DeviceIdentity id_RGB_SW_RED			= {RGB_SW_RED,  		"RGB_SW_RED" 		};
DeviceIdentity id_RGB_SW_GREEN			= {RGB_SW_GREEN,  		"RGB_SW_GREEN" 		};
DeviceIdentity id_RGB_SW_BLUE			= {RGB_SW_BLUE,  		"RGB_SW_BLUE" 		};
DeviceIdentity id_LED3				= {LED3,        		"LED3"      		};
DeviceIdentity id_LED4       			= {LED4,        		"LED4"      		};
DeviceIdentity id_LED5			    	= {LED5,  			"LED5"    		};
DeviceIdentity id_LED6			    	= {LED6,  			"LED6"    		};
DeviceIdentity id_LVL_FAIL_GND_OUT		= {LVL_FAIL_GND_OUT,	  	"LVL_FAIL_GND_OUT" 	};
DeviceIdentity id_OPERATION_FAIL_GND_OUT	= {OPERATION_FAIL_GND_OUT,	"OPERATION_FAIL_GND_OUT"};
DeviceIdentity id_FLV_I0_I3			= {FLV_I0_I3,		  	"FLV_I0_I3" 		};

DeviceIdentity id_AN0_LEVEL_H  			= {AN0_LEVEL_H,   		"AN0_LEVEL_H" 		};
DeviceIdentity id_AN1_LEVEL_L  			= {AN1_LEVEL_L,   		"AN1_LEVEL_L" 		};
DeviceIdentity id_AN2  				= {AN2,   			"AN2" 			};
DeviceIdentity id_AN3  				= {AN3,   			"AN3" 			};
DeviceIdentity id_AN4_LEA1   			= {AN4_LEA1,    		"AN4_LEA1"		};
DeviceIdentity id_AN5_LEA2   			= {AN5_LEA2,    		"AN5_LEA2" 		};
DeviceIdentity id_AN6_POWER_CURRENT	  	= {AN6_POWER_CURRENT,   	"AN6_POWER_CURRENT"	};
DeviceIdentity id_AN7_POWER_VOLTAGE	  	= {AN7_POWER_VOLTAGE,   	"AN7_POWER_VOLTAGE"	};
DeviceIdentity id_AN8				= {AN8,  			"AN8"			};
DeviceIdentity id_AN9  				= {AN9,   			"AN9"			};
DeviceIdentity id_AN10 				= {AN10,  			"AN10"			};

DeviceIdentity id_PWM		          	= {PWM,           		"PWM"       		};


#ifdef __cplusplus
}
#endif

#endif /* DEVICEID_HPP_ */
