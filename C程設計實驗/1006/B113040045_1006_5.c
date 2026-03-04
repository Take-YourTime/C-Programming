#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*write in UTF-8, not ANSI*/
int main(){
	int lenth=0,wide=0;
	srand(time(NULL));
	
	lenth = rand()%10+1;
	wide = rand()%10+1;
	
	printf("長：%d 寬：%d\n",lenth,wide);
	
	for(int i=0;i<lenth;i++){
		for(int j=0;j<wide;j++)
			printf("*");
		printf("\n");	
	}
}
