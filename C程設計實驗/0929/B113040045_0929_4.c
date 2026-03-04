#include<stdio.h>

int main(){
	int y=0;
	printf("請輸入年分:");
	scanf("%d",&y);
	
	if(y%4==0)
		printf("%d年是閏年！",y);
	else
		printf("%d年不是閏年",y);
		
	return 0;
}

