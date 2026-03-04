#include<stdio.h>

int mypow(int x,int y){
	if(y>1)
		return mypow(x,y-1)*x;
	else
		return x;
}

int main(){
	int a,b;
	
	printf("請輸入兩數：");
	scanf("%d %d",&a,&b);
	printf("%d^%d = %d\n",a,b,mypow(a,b));
	
	return 0;
}
