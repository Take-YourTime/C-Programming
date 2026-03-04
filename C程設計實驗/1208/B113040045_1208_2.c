#include<stdio.h>

struct list{
	char name[100];
	int math;
};

struct list mygrade;

int main(){
	
	printf("請輸入您的姓名:");
	gets(mygrade.name);
	
	printf("請輸入數學成績:");
	scanf("%d",&mygrade.math); 
	
	printf("\n姓名：%s\n",mygrade.name);
	printf("數學成績:%d\n",mygrade.math);
	
	return 0;
}

