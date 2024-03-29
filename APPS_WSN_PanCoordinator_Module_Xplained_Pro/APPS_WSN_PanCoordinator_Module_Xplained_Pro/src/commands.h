/**
* \file  commands.h
*
* \brief WSNDemo command handler interface
*
* Copyright (c) 2018 Microchip Technology Inc. and its subsidiaries. 
*
* \asf_license_start
*
* \page License
*
* Subject to your compliance with these terms, you may use Microchip
* software and any derivatives exclusively with Microchip products. 
* It is your responsibility to comply with third party license terms applicable 
* to your use of third party software (including open source software) that 
* may accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, 
* WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, 
* INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, 
* AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE 
* LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL 
* LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE 
* SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE 
* POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT 
* ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY 
* RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY, 
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*
* \asf_license_stop
*
*/
/*
* Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
*/

#ifndef _COMMANDS_H_
#define _COMMANDS_H_

#include "miwi_api.h"

/*- Types ------------------------------------------------------------------*/
enum {
	APP_COMMAND_ID_NETWORK_INFO              = 0x01,
	APP_COMMAND_ID_IDENTIFY                  = 0x10,
	APP_COMMAND_ID_TOPOLOGY_SIMULATION_RESET = 0x20,
	APP_COMMAND_ID_SIMULATE_LINE_TOPOLOGY    = 0x21,
};

/*- Externs ------------------------------------------------------------------*/
extern SYS_Timer_t appCmdIdentifyDurationTimer;
extern SYS_Timer_t appCmdIdentifyPeriodTimer;

/*- Prototypes -------------------------------------------------------------*/
void APP_CommandsInit(void);
void appCmdDataInd(RECEIVED_MESH_MESSAGE *ind);
void APP_CommandsByteReceived(uint8_t byte);

#endif /* _COMMANDS_H_ */
