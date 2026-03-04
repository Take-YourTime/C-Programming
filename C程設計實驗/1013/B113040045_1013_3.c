#include<stdio.h>

int main(){
	int number[10];
	int max=0,min=100;
	int max_list=0,min_list=0;
	
	srand(time(NULL));
	
	for(int i=0;i<10;i++){
		number[i]=rand()%100+1;
		
		if(number[i]>max){
			max=number[i];
			max_list=i+1;
		}
			
			
		if(number[i]<min){
			min=number[i];
			min_list=i+1;
		}
	}
	printf("程材%d计ㄤ%d\n",max_list,max);
	printf("程材%d计ㄤ%d\n",min_list,min);
	
	return 0;
}

