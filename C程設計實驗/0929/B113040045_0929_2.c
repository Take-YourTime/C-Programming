#include<stdio.h>

int main(){
	int n=0;
	printf("請輸入一整數:");
	scanf("%d",&n);
	
	if(n>0)
		printf("絕對值為:%d",n-0);
	else
		printf("絕對值為:%d",0-n);
	
	return 0;
}

