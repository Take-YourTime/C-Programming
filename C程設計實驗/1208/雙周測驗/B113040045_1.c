#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include<limits.h>

void swap(int *a, int *b){
	// 交換整數 
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int array[],int size){
	// 選擇排序演算法 
	// 小到大排
	int min;
	int det;
	
	for(int i=0;i<10-1;i++){
		min = array[i];
		det = -1;
		
		for(int j=i+1;j<10;j++){
			if(array[j] < min){
				min = array[j];
				det = j;
			}
			
		}
		
		if(det!=-1)
			swap(&array[i],&array[det]);		
	}
	
	
}


int main(void){
	srand(time(NULL));
	
	int array[10];
	
	puts("排序前");
	for(int index=0;index<10;index++){
		array[index] = rand();
		printf("%d ",array[index]);
	}
	
	puts("");
	puts("排序後");
	
	sort(array,10);
	for(int index=0;index<10;index++){
		printf("%d ",array[index]);
	}
	
	puts("");
}
