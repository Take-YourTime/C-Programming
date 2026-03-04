#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void calculate(int n){
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf(" %d",rand()%100+1);
	}
	printf("\n");
}

int main(){
	int n=0;
	
	printf("請輸入陣列長度：");
	scanf("%d",&n);
	
	calculate(n);
	
	return 0;
}
