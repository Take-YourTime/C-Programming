#include<stdio.h>
#define Area r*r*pi

int main(){
	int r=0;
	double pi=3.141592;
	
	printf("請輸入圓的半徑：");
	scanf("%d",&r);
	
	printf("面積為：%lf",Area);
	
	return 0;
}
