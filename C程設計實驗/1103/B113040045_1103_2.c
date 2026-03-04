#include<stdio.h>

int main(){
	char string[100];
	printf("請輸入一字串:");
	scanf("%s",string);
	printf("該字串為:%s\n",string);
	printf("該字串為:%s\n",string);
	printf("該字串為:%s\n",string);
	
	printf("======================\n");
	//fflush(stdin);
	printf("請輸入一字串:");
	gets(string);
	puts(string);
	puts(string);
	puts(string);
	
	return 0;
}

