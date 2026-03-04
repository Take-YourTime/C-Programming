#include<stdio.h>

int main(){
	int n=0;
	printf("請輸入1～13的整數:");
	scanf("%d",&n);
	
	if(n>7)
		printf("該數大於7");
	else if(n==7)
		printf("該數等於7");
	else
		printf("該數小於7");
		
	return 0;
}

