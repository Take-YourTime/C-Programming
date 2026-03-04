#include<stdio.h>

int calculate(char mode,int *n1,int *n2){
	int sum = 0;
	
	switch(mode){
		case '+':
			printf("執行兩數相加函式\n");
			sum = *n1 + *n2;
			break;
		case '-':
			printf("執行兩數相減函式\n");
			sum = *n1 - *n2;
			break;
		
		case '/':
			printf("執行兩數相除函式\n");
			sum = *n1 / *n2;
			break;
			
		case '*':
			printf("執行兩數相乘函式\n");
			sum = *n1 * *n2;
			break;
			
		default:
			printf("Wrong mode\n");
			break;
	}
	
	return sum;
}


int main(){
	char mode;
	int n1 = 0,n2 = 0;
	int result = 0;
	
	printf("請輸入要執行的運算:");
	scanf("%c",&mode);
	
	printf("請輸入要運算的數字:");
	scanf("%d %d",&n1,&n2);
	
	result = calculate(mode,&n1,&n2);
	printf("計算結果:%d\n",result);

	return 0;
}

