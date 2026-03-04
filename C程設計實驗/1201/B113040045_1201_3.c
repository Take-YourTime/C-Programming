#include<stdio.h>

void swap(int *a,int *b){
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int *a,int *b,int *c){
	if(*a>*b)
		swap(a,b);
		
	if(*b>*c)
		swap(b,c);
		
	if(*a>*b)
		swap(a,b);
}


int main(){
	int n1,n2,n3;
	printf("請輸入三變數(eg. 3 1 2):");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	printf("n1 = %d\n",n1);
	printf("n2 = %d\n",n2);
	printf("n3 = %d\n",n3);
	
	printf("\n三數由小排到大:\n");
	
	sort(&n1,&n2,&n3);
	
	printf("n1 = %d\n",n1);
	printf("n2 = %d\n",n2);
	printf("n3 = %d\n",n3);
	
	return 0;
}