#include<stdio.h>

int main(){
	int n=0;
	printf("輸入一個數字 : \n");
	scanf("%d",&n);
	
	switch(n){
		case 99:
			printf("輸入了99");
			break;
		default:
			printf("輸入了例外數字 : %d",n);
	
	return 0;
	}
}

