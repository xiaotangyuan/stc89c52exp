#include <reg51.h>

sbit beep=P2^5;

void delay(int i){
	while(i--){};
}
void main(){
	while(1){
	    beep=~beep;
		delay(3000);
	}
	 
}