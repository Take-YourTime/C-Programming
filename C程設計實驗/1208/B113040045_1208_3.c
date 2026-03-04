#include<stdio.h>

struct list{
	char name[100];
	int math;
};

struct list grade[3];

int main(){
	
	for(int i=0;i<3;i++){
		printf("請輸入學生%d的姓名:",i+1);
		gets(grade[i].name);
		
		printf("請輸入學生%d的數學成績:",i+1);
		scanf("%d",&grade[i].math);
		
		printf("\n");
		fflush(stdin); 
	}
	
	for(int i=0;i<3;i++){
		printf("學生%d的姓名：%s\n",i+1,grade[i].name);
		printf("學生%d的數學成績:%d\n",i+1,grade[i].math);
	}
	
	return 0;
}

