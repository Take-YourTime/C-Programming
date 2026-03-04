#include<stdio.h>
#include<math.h>//使用pow()
#define PI 3.1415926

int main(){
	int r=0;
	float f=0;
	double d=0;
	
	scanf("%d",&r);
	f=(4/3)*PI*pow(r,3);//pow(r,3)為r的3次方 
	d=(4/3)*PI*pow(r,3);
	
	printf("體積f：%.12f\n",f);
	printf("體積d：%.12f\n",d);
	 
	return 0;
}

