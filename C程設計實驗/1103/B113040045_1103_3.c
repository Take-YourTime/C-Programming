#include<stdio.h>

int main(){
	char str[20][20];
	printf("請輸入三字串:\n");
	for(int i=0;i<3;i++){
		scanf("%s",str[i]);
	}
	
	printf("三字串為:");
	for(int i=0;i<2;i++){
		printf("%s,",str[i]);
	}
	printf("%s\n",str[2]);
	
	printf("反序為:");
	for(int i=2;i>=1;i--){
		printf("%s,",str[i]);
	}
	printf("%s\n",str[0]);
	
	return 0;
}

