#include<stdio.h>

int main(){
	int min=0,max=10;
	int n=37,det=0;
	int list[11]={2,5,8,12,13,18,21,29,37,49,97};
	
	printf("计");
	for(int i=0;i<11;i++)
		printf("%d ",list[i]);
	printf("\n");
	printf("穓碝计%d\n",n);
	
	while(n!=list[det]){
		printf("计");
		for(int i=min;i<=max;i++)
			printf("%d ",list[i]);
		
		det=(min+max)/2;
		printf("い计:%d竚:%d\n",list[det],det+1);
		
		if(list[det]>n)
			max=det-1;
		else
			min=det+1;
	}
	printf("\n穓碝戈材%d竚\n",det+1);
	
	return 0;
}

