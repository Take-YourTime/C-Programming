#include<stdio.h>

int main(){
	int number[10],sum=0;
	srand(time(NULL));
	for(int i=0;i<10;i++){
		number[i]=rand()%100+1;
		sum=sum+number[i];
	}
	printf("加總為 : %d\n",sum);
	printf("平均為 : %d\n",sum/10);
}

