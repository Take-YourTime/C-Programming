#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int length=0;
	
	printf("輸入字串: ");
	
	gets(str);//How are you today?
	
	length = strlen(str);
	
	char (*str_pointer)[length] = &str;
	
	
	printf("反轉字串: ");
	for(int i=0;i<length;i++)
		printf("%c",*( (str_pointer)[0]+length-1-i) );
		
	return 0;
}
