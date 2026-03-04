#include<stdio.h>

int main(){
	FILE *file = fopen("Exercise2.txt","w");
	char ch;
	
	while(ch=getchar()){
		if(ch==EOF)
			break;
		
		fprintf(file,"%c",ch);
	}
	fclose(file);
	return 0;
}
