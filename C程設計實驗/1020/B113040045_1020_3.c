#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int temp=0;
	int number[20];
	
	srand(time(NULL));
	
	printf("泡沫排序(大->小)\n");
	printf("排序前：");
	for(int i=0;i<20;i++){
		number[i]=rand()%200+1;
		printf("%d ",number[i]); 
	}
	
	printf("\n\n");	
	
	for(int i=0;i<20-1;i++){
		for(int j=0;j<20-1-i;j++){
			if(number[j]<number[j+1]){
				temp=number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
			}
		}
	}
	
	printf("排序後：");
	for(int i=0;i<20;i++)
		printf("%d ",number[i]); 
	printf("\n");
	return 0;
}

