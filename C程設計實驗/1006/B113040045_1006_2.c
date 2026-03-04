#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*write in UTF-8, not ANSI*/
int main(){
	int n=0;
	int random=0;
	
	srand(time(NULL));
	//撒亂數種子，這樣才不會每一次都抽一樣的數字。
	
	printf("請輸入一個數字(0~100):");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		random = rand() % 500+1;
		printf("第%d個隨機數是%d\n",i,random);
	}
	
	return 0;
}
