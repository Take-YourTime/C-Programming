#include<stdio.h>
/*write in UTF-8, not ANSI*/
int main(){
	int n=0;
	printf("請輸入等腰三角形的高度:");
	scanf("%d",&n);
	printf("\n");
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++)
			printf(" ");
		for(int j=0;j<2*i-1;j++)
			printf("*");
		for(int j=0;j<n-i;j++)
			printf(" ");
		printf("\n");
	}
	return 0;
	
}
