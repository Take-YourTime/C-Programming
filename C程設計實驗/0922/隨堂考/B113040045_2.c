#include<stdio.h>

int main(){
	float n=0;
	scanf("%f",&n);
	
	printf("      %.1f\n",n);
	printf("%010.2f\n",n);
	printf("%+10.4f\n",n);
	printf("%-7.3f\n",n);
	
	return 0;
}

