#include<stdio.h>

int main(){
	int number[10],function[9];//number[]:原方程式的係數  function[]:number微分的係數 
	srand(time(NULL));
	
	for(int i=0;i<=9;i++){
		number[i]=rand()%10;	
	}
	
	for(int i=9;i>=1;i--){
		printf("%dx^%d + ",number[i],i);//輸出原方程式 
		function[i-1] = number[i]*i;//將方程式微分 
	}
	printf("%dx^0\n",number[0]);//常數項個處理(因為有加號)
	
	
	for(int i=8;i>=1;i--){
		printf("%dx^%d + ",function[i],i);//輸出微分後的方程式 
	}
	printf("%dx^0\n",function[0]);//常數項個處理(因為有加號)
	
	return 0;
}

