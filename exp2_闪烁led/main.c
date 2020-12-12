#include <reg51.h>

sbit led=P2^2;

void delay(int i){
	while(i--){};
}
void main(){
	while(1){
	   delay(40000);
	   led=0;
	   delay(40000);
	   led=1;
	}
	 
}