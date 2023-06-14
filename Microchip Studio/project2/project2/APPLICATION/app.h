/*
 * app.h
 *
 * Created: 11/6/2022 1:33:29 AM
 *  Author: mosta
 */ 
#ifndef APP_H_
#define APP_H_

#include "../ECUAL/LED/LED.h"
#include "../ECUAL/button/BUTTON.h"
#include "../MCAL/Timer_DRIVER/Timer.h"
#include "../MCAL/Interrupts/INTERRUPTS.h"

#define fiveSec 19

uint8_t memory;
uint8_t norped;//a variable that changes from normal mode to pedestrian mode
uint8_t StudyCases;//a variable used for the different cases in each mode
uint8_t bool;
uint8_t toggle;//a variable  used in a for loop, its main function to toggle then delay which results in blinking

void ALL_Iitializations();
void YELLOW_TOGGLE_5sec();
void Normal_MODE();
void Pedestrian_MODE();
void APP();

#endif	