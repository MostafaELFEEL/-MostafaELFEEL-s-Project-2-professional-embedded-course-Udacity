#include "app.h"

void APP(){
	ALL_Iitializations();
	norped=0;
	StudyCases=0;
	while (1)
	{
		if(norped==0){
			bool=1;
			Normal_MODE();
		}
		else if (norped==1){
			if((StudyCases==1 || StudyCases==3)&& bool==1){
				StudyCases=5;
			}
			bool=0;
			ALL_LEDS_OFF();
			Pedestrian_MODE();
		}
		
		if(StudyCases==4 && norped==0){
			StudyCases=0;
		}
	}
}



void ALL_Iitializations(){
	LED_initialization();
	button_initialization();
	int0_initialization();
	timer0_initialization();
}



void YELLOW_TOGGLE_5sec(){
	for(toggle=1;toggle<fiveSec;toggle++){
		LED_toggle(1,'A');
		LED_toggle(1,'B');
	delay(1);  
	}
	LED_OFF(1,'A');
	LED_OFF(1,'B');
}



ISR(INT0_vect){
	if(norped==0 && StudyCases!=3){
		norped=1;
		memory=counter;
		counter=128;
		toggle=100;
		StudyCases--;
	}
}



void Normal_MODE(){
	switch(StudyCases){
		
		case 0:
		StudyCases=1;
		LED_ON(0,'A');
		//LED_ON(0,'B');
		delay(fiveSec);
		LED_OFF(0,'A');
		//LED_OFF(0,'B');
		
		break;
		
		case 1:
		StudyCases=2;
		for(toggle=1;toggle<=(fiveSec);toggle++){
			LED_toggle(1,'A');
			delay(1);
		}
		LED_OFF(1,'A');
		break;
		
		case 2:
		StudyCases=3;
		LED_ON(2,'A');
		//LED_ON(2,'B');
		delay(fiveSec);
		LED_OFF(2,'A');
		//LED_OFF(2,'B');
		
		break;

		case 3:
		StudyCases=4;
		for(toggle=1;toggle<=(fiveSec);toggle++){
			LED_toggle(1,'A');
			delay(1);
		}
		LED_OFF(1,'A');
		break;
		
	}
}



void Pedestrian_MODE(){
	switch(StudyCases){
		
		case 0:
		//LED_ON(0,'A');
		//LED_ON(0,'B');
		//delay(fiveSec-memory); 
		//LED_OFF(0,'A');
		//LED_OFF(0,'B');
		StudyCases=1;
		break;

		case 1:
		YELLOW_TOGGLE_5sec();
		StudyCases=2;
		break;
		
		case 2:
		LED_ON(2,'A');
		LED_ON(2,'B');
		delay(fiveSec);
		LED_OFF(2,'A');
		StudyCases=3;
		break;
		
		case 3:
		YELLOW_TOGGLE_5sec();
		LED_OFF(2,'B');
		StudyCases=4;
		break;
		
		
		case 4:
		LED_ON(0,'B');
		LED_ON(0,'A');
		delay(fiveSec);
		LED_OFF(0,'B');
		LED_OFF(0,'A');
		norped=0;
		StudyCases=1;
		break;
		
		case 5:
		LED_ON(0,'B');
		for(toggle=1;toggle<=(fiveSec-memory);toggle++){
			LED_toggle(1,'A');
			delay(1);
		}
		LED_OFF(0,'B');
		LED_OFF(1,'A');
		StudyCases=1;
		break;
	}
}