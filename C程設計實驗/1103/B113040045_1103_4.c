#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	char str_trans[100];
	
	int length=0;
	
	printf("請輸入字串(輸入0跳出):");
	
	while(scanf("%s",str)){
		if(str[0]=='0' && strlen(str)==1)
			break;
			
		length = strlen(str);
		for(int i=0,j=length-1 ; i<length ; i++,j--){
			str_trans[j] = str[i];
		}
		
		if(strncmp(str,str_trans,length)==0)
			printf("是迴文\n\n");
		else
			printf("不是迴文\n\n");
			
		printf("請輸入字串(輸入0跳出):");
	}
	
	return 0;
}

