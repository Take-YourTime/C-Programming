#include<stdio.h>

int main(){
	char str[100];
	
	FILE *file = fopen("phone.txt","w");
	
	printf("姓名：");
	scanf("%s",str);
	fprintf(file,"姓名：%s\n",str);
	
	printf("電話：");
	fflush(stdin);
	scanf("%s",str);
	fprintf(file,"電話：%s\n",str);
	
	printf("地址：");
	fflush(stdin);
	scanf("%s",str);
	fprintf(file,"地址：%s\n",str);
	
	fclose(file);
	
	return 0;
}
