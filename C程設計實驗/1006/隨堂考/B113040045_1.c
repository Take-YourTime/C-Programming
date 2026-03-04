#include<stdio.h>
/*write in UTF-8, not ANSI*/
int main(){
	int n=0,sum=1;
	printf("請輸入一個數字:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
		sum=sum*i;
	
	printf("%d! = %d\n",n,sum);
	return 0;
}
