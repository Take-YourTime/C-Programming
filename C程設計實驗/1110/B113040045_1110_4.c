#include<stdio.h>

int gcd(int x,int y){
	if(x%y==0)
		return y;
	else
		return gcd(y,x%y);
}

int lcm(int x,int y){
	return ( (x*y) / gcd(x,y) );
}

int main(){
	int x=0,y=0;
	printf("請輸入兩個數字:");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("%d %d最大公因數為: %d\n",x,y,gcd(x,y));
	printf("%d %d最小公倍數為: %d\n",x,y,lcm(x,y));
	
	return 0;
}
