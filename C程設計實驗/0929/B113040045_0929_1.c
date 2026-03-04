#include<stdio.h>

int main(){
	int n=0;
	
	printf("請輸入一個整數字(0～100):");
	scanf("%d",&n);
	
	if(n<0||n>100)
		printf("輸入的數字不在範圍，請重新輸入\n");
	else if(n<=72&&n>33) 
		printf("GG了\n");
	else
		printf("幸運區\n");
		
	return 0;
}

