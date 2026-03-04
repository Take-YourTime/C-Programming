#include<stdio.h>

int main(){
	char ch[5];
	char *pointer = ch;
	
	for(int i=0;i<5;i++)
		ch[i] = 'a'+i;
		
	for(int i=0;i<5;i++){
		printf("陣列%d的值: %c\n",i+1,ch[i]);
		printf("陣列%d的位址為: %p\n",i+1,&ch[i]);
		printf("*指標指向的位址為: %p\n",pointer+i);
	}
	
	return 0;
}
