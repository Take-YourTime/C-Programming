#include<stdio.h>
 
int main(){
	char ch;
	printf("請輸入一個字元:");
 
	while(scanf(" %c",&ch)){
		fflush(stdin);
		switch(ch){
			case 'A':
			case 'a':
				printf("進入新增功能\n");
				printf("請輸入一個字元:");
				continue;
			case 'D':
			case 'd':
				printf("進入修改功能\n");
				printf("請輸入一個字元:");
				continue;
			case 'U':
			case 'u':
				printf("進入刪除功能\n");
				printf("請輸入一個字元:");
				continue;
			case 'Q':
			case 'q':
				printf("離開系統\n");
				break;
			default:
				printf("沒有這個選項\n");
				printf("請輸入一個字元:");
				continue;
		}
		break;
	}
 
	return 0;
}
