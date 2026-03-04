#include<stdio.h>
/*write in UTF-8, not ANSI*/
int main(){
	int n=0;
	printf("請輸入一個數字(1~100):");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
