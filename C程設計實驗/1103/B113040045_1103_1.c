#include<stdio.h>

int main(){
	char string[10] = "I am Groot";
	for(int i=0;i<10;i++)
		printf("第%d個字元為:%c\n",i,string[i]);
	
	return 0;
}

