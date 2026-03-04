#include<stdio.h>

int time(int n){
	int sum=1;
	while(n>=1){
		sum*=n;
		n--;
	}
	return sum;
}

int main(){
	
	printf("My Chatting Room:\n");
	printf("A:What is the factorial of first of 10 numbers?\n");
	printf("B:%d\n",time(10));
	printf("My Chatting Room:\n");
	printf("A:What is the factorial of first of 11 numbers?\n");
	printf("B:%d\n",time(11));
	
	return 0;
}
