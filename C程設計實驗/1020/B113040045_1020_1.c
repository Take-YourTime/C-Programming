#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int temp=0;
	int min=0,n=0;//min:最小值  n:最小值的陣列格子 
	int number[20];
	
	srand(time(NULL));
	
	printf("選擇排序(小到大)\n");
	printf("排序前：");
	for(int i=0;i<20;i++){
		number[i]=rand()%200+1;
		printf("%d ",number[i]); 
	}
	
	printf("\n\n");	
	 
	for(int i=0;i<20;i++){
		min=number[i];
		for(int j=i;j<20;j++){
			if(min>=number[j]){
				min=number[j];
				n=j;
			}
		}
		
		temp=number[n];
		number[n]=number[i];
		number[i]=temp;
	}
	
	printf("排序後：");
	for(int i=0;i<20;i++)
		printf("%d ",number[i]); 
	printf("\n");
	
	return 0;
}
