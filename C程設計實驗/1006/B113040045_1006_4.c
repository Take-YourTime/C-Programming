#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*write in UTF-8, not ANSI*/
int main(){
	int n=0,random=0;
	
	srand(time(NULL));
	
	random = rand()%10+1;
	
	printf("請輸入一個數字:");
	while(scanf("%d",&n)){
		if(n==random){
			printf("猜對了！\n");
			break;
		}
		else
			printf("猜錯了！\n");
		printf("請輸入一個數字:");
	}
	
	return 0;
}
