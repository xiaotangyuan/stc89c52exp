#include <reg51.h>

//P2��һ���ֽڣ���λ0000 0000, 0���������1�������
#define led P2;

void delay(int i){
	while(i--){};
}
void main(){
	int i;

	while(1){
	    // ͬһʱ��ֻ��һ���������� 11101111����ʽ	P2=0B11101111
		for(i=0;i<8;i++){
		   delay(40000);
		   P2=~(0x1<<i);

		}

	}
	 
}