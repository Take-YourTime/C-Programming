#include<stdio.h>

int fib(int num){
	if(num<=2)
		return 1;
	else
		return fib(num-1)+fib(num-2);
}

int main(){
	int n=0;
	printf("請輸入一整數：");
	scanf("%d",&n);
	
	printf("數列為：");
	for(int i=0;i<n;i++){
		printf(" %d",fib(i+1));
	}
	printf("\n");
	
	return 0;
}
