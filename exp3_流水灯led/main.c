#include <reg51.h>

//P2是一个字节，八位0000 0000, 0代表灯亮，1代表灯灭
#define led P2;

void delay(int i){
	while(i--){};
}
void main(){
	int i;

	while(1){
	    // 同一时刻只有一个灯亮，即 11101111的形式	P2=0B11101111
		for(i=0;i<8;i++){
		   delay(40000);
		   P2=~(0x1<<i);

		}

	}
	 
}