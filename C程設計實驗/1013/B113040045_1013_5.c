#include<stdio.h>

int main(){
	int arr[2][3];
	int arr_t[3][2];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("arr[%d][%d] = ",i,j); 
			scanf("%d",&arr[i][j]);
			arr_t[j][i]=arr[i][j];
		}
	}
	
	
	printf("­ì¯x°}\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nÂà¸m¯x°}\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			printf("%d ",arr_t[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

