#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct list{
	char name[100];
	int age;
	int money;
	int debt;
};

void input(struct list *);

int main(){
	struct list character;
	
	srand(time(NULL));
	
	input(&character);
	
	printf("\n姓名:%s\n",character.name);
	printf("年齡:%d歲\n",character.age);
	printf("存款:%d萬\n",character.money);
	printf("債務:%d萬\n",character.debt);
	
	return 0;
}


void input(struct list *ptr){
	printf("請輸入姓名:");
	scanf("%s",ptr->name);
	
	ptr->age = rand()%51+10;
	ptr->money = rand()%16+15;
	ptr->debt = rand()%6+5;
}
