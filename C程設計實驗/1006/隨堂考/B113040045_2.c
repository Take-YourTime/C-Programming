#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*write in UTF-8, not ANSI*/
int main(){
	int n=0;
	int min=1,max=99;
	srand(time(NULL));
	
	int random = rand()%99+1;
	printf("終極密碼\n");
	
	printf("請輸入猜測，範圍1~99 : ");
	while(scanf("%d",&n)){
		if(n>max||n<min){//偵測輸入數值是否在範圍內
			printf("!!超出範圍，請重新輸入!!\n");
			printf("請輸入猜測，範圍%d~%d : ",min,max);
			continue;
		}
		
		if(n==random){
			printf("恭喜猜對了！\n");
			break;
		}	
		else if(n>random){
			max=n;
			printf("請輸入猜測，範圍%d~%d : ",min,max);
		}
		else{
			min=n;
			printf("請輸入猜測，範圍%d~%d : ",min,max);
		}	
	}
	return 0;
}
