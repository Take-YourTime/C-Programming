#include<stdio.h>
#include<stdlib.h>

#define length 16
#define read_times 3
int main(){
		
	FILE *file;
	char mode;
	
	while(1){
		file = fopen("Exercise1.txt","r");
		
		char ch=NULL;
		char str[100];
	
		printf("==========\n請選擇讀檔方式：\n");
		printf("1.用getc()讀檔案\n");
		printf("2.用fscanf()讀取檔案\n");
		printf("3.用fgets()讀取檔案\n");
		printf("4.用fread()讀取檔案\n");
		printf("0.離開\n\n");
	
		scanf("%c",&mode);
		fflush(stdin);
	
		switch(mode){
			case '1':
				printf("用getc()讀檔案\n");
				do{
					ch = getc(file);
					printf("%c",ch);
				}while(ch != EOF);
				printf("\n");
				break;
			
			case '2':
				printf("用fscanf()讀取檔案\n");
				do{
					for(int i=0;i<4;i++){
						fscanf(file,"%s",&str);
						printf("%s ",str);
					}
					printf("\n");
				}while(!feof(file));
				break;
				
			case '3':
				printf("用fgets()讀取檔案\n");
				do{
					fgets(str,length,file);
					printf("%s\n",str);
				}while(fgets(str,length,file) != NULL);
				break;;
			
			case '4':
				printf("用fread()讀取檔案\n");
				do{
					fread(str,length,read_times,file);
						printf("%s",str);
				}while(!feof(file));
				printf("\n");
				break;
				
			case '0':
				goto end;
				
			default:
				printf("輸入錯誤\n");
				printf("請重新輸入\n");
				break;
		}
		
		printf("\n");
		fclose(file);
	}
	
	end:
	
	return 0;
}
