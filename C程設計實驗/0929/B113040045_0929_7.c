#include<stdio.h>

int main(){
	int n=0;
	int ten=0,single=0;
	
	printf("叫块ㄢ计:");
	scanf("%d",&n);
	
	if(n>100||n<10)//计ぃ跋丁ず 
		return 0;
		
	printf("璣ゅ:");
	
	switch(n){ //疭计 
		case 10:
			printf("ten\n");
			goto end;//end is at line 120
		case 11:
			printf("eleven\n");
			goto end;
		case 12:
			printf("twelve\n");
			goto end;
		case 13:
			printf("thirteen\n");
			goto end;
		case 14:
			printf("fourteen\n");
			goto end;
		case 15:
			printf("fifteen\n");
			goto end; 
		case 16:
			printf("sixteen\n");
			goto end; 
		case 17:
			printf("seventeen\n");
			goto end;
		case 18:
			printf("eighteen\n");
			goto end; 
		case 19:
			printf("nineteen\n");
			goto end;
		case 20:
			printf("twenty\n");
			goto end;
		default:
			break; 
	}
		
	ten=n/10;//计计 
	single=n%10;//计计 
	
	switch(ten){ //矪瞶计 
		case 0:
			break;
		case 2:
			printf("twenty");
			break;
		case 3:
			printf("thirty");
			break;
		case 4:
			printf("forty");
			break;
		case 5:
			printf("fifty");
			break;     
		case 6:
			printf("sixty"); 
			break;
		case 7:
			printf("seventy");
			break;
		case 8:
			printf("eighty");
			break;
		case 9:
			printf("ninety"); 
			break; 
		default:
			break;  
	}
	
	switch(single){ //矪瞶计 
		case 0:
			break;
		case 1:
			printf("-one\n");
			break;
		case 2:
			printf("-two\n");
			break;
		case 3:
			printf("-three\n");
			break;
		case 4:
			printf("-four\n");
			break;
		case 5:
			printf("-five\n");
			break;     
		case 6:
			printf("-six\n"); 
			break;
		case 7:
			printf("-seven\n");
			break;
		case 8:
			printf("-eight\n");
			break;
		case 9:
			printf("-nine\n"); 
			break; 
		default:
			break;  
	}
	end:
	return 0;
}

