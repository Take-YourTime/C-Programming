#include<stdio.h>

int main(){
	int n1=0,n2=0;
	int *p1 = &n1,*p2 = &n2;
	
	printf("n1:");
	scanf("%d",&n1);
	printf("n2:");
	scanf("%d",&n2);
	
	printf("n1的住址：%p\n",p1);
	printf("n2的住址：%p\n",p2);
	printf("%d x %d = %d\n",*p1,*p2,*p1 * *p2);

	return 0;
}
