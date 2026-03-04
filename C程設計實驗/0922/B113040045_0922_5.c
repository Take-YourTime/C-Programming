#include<stdio.h>

int main(){
	int n=0;
	char word;
	
	printf("請輸入一個數字：");
	scanf("%d",&n);
	printf("請輸入一個字母：");
	
	fflush(stdin);//清除暫存，否則第二個scanf()不會執行到 
	
	scanf("%c",&word);
	printf("我有%d個%c\n",n,word);
	
	return 0;
}

