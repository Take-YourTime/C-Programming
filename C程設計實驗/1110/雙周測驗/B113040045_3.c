#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
	int x=0,y=0;
	int a[5],b[5];//a[]:x座標、b[]:y座標
	for(int i=0;i<5;i++){
		a[i]=0;
		b[i]=0;
	}
	
	printf("請輸入座標：");
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("正方形角座標為(%d,%d) (%d,%d) (%d,%d) (%d,%d)\n",x-2,y-2,x-2,y+2,x+2,y+2,x+2,y-2);
	
	printf("產生座標：\n");
	
	srand(time(NULL));
	
	for(int i=0;i<5;i++){
		a[i]=rand()%21;
		b[i]=rand()%21;
		
		if(abs(a[i]-x)>2 || abs(b[i]-y)>2)
			printf("(%d,%d)在正方形外\n",a[i],b[i]);
			
		else if(abs(a[i]-x)==2 || abs(b[i]-y)==2)
			printf("(%d,%d)在正方形邊上\n",a[i],b[i]);
			
		else
			printf("(%d,%d)在正方形內\n",a[i],b[i]);
	}
	
	return 0;
}