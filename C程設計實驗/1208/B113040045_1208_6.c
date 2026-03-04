#include<stdio.h>
#include<stdlib.h>

int main(){
	int  *a = (int *)malloc(4 * sizeof(int));
	int n=0;
	if(a != NULL){
		for(int i=0;i<3;i++){
			printf("請輸入第%d個數:",i+1);
			scanf("%d",&a[i]);
		}
	}
	
	for(int i=0;i<3;i++)
		printf("第%d個數為%d\n",i+1,a[i]);
	
	free(a);
	return 0;
}
