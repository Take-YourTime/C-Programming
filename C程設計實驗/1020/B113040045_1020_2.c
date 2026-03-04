#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int temp=0;
	int number[20];
	
	srand(time(NULL));
	
	printf("插入排序(大->小)\n");
	printf("排序前：");
	for(int i=0;i<20;i++){
		number[i]=rand()%200+1;
		printf("%d ",number[i]); 
	}
	
	printf("\n\n");	
	
	for(int i=0;i<20-1;i++){
		for(int j=i,k=i+1;j>=0;j--, k--){
			if(number[k]>number[j]){
				temp=number[k];
				number[k]=number[j];
				number[j]=temp;
			}
			else
				break;
		}
	}
	
	printf("排序後：");
	for(int i=0;i<20;i++)
		printf("%d ",number[i]); 
	printf("\n");
	
	return 0;
} 
