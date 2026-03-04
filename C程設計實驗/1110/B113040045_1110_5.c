#include<stdio.h>
int a,b;

void myswitch(){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main(){
	a=0;
	b=1;
	myswitch();
	
	printf("a=%d, b=%d\n",a,b);
	
	return 0;
}
