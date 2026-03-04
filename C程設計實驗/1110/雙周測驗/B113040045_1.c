#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int det=1;
	
	printf("請輸入要判斷的字串：");
	scanf("%s",str);
	
	
	int length = (int)strlen(str);
	
	if(length%2==0){//判斷字串長度是偶數或奇數
		for(int i=0;i<strlen(str)-1;i++){
			if(str[i] != str[strlen(str)-1]){
				det=0;
				break;
			}
		}
	}
	else{
		for(int i=0 ; i <= (strlen(str)-1)/2 ; i++){
			if(str[i] != str[ strlen(str)-1-i ]){
				det=0;
				break;
			}
		}
	}
		
	if(det==1)
		printf("此字串是迴文\n");
	else
		printf("此字串不是迴文\n");
		
	return 0;	
}
