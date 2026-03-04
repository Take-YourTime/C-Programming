#include<stdio.h>
/*write in UTF-8, not ANSI*/
int main(){
	int n=0;
	printf("請輸入一個數字（0~100）:");
	scanf("%d",&n);
	for(int i=0;i<n;i+=2){
		printf("%d是偶數\n",i);
	}
	
	return 0;
}
