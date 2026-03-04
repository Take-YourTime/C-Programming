#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n=0;
	int det=0;
	int number[20];
	
	srand(time(NULL));
	printf("计");
	for(int i=0;i<20;i++){
		number[i]=rand()%15+1;
		printf("%d ",number[i]); 
	}
	
	printf("\n");
	
	n=rand()%15+1;	
	printf("穓碝计%d\n",n);
	printf("穓碝计材 ");
	for(int i=0;i<20;i++){
		if(number[i]==n){
			printf("%d ",i);
			det=1;
		}		
	}
	
	if(det==1)	
		printf("竚\n");
	else{
		printf("0 竚\n");
		printf("⊿Τт %d 硂计\n",n);
	}
		
	return 0; 
} 
