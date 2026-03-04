#include<stdio.h>

int main() {
	int price = 0,n = 0,money = 0;
	printf("== 找錢系統 ==\n\n");
	printf("歡迎來到找錢系統：\n\n");
	printf("1.單價：");
	scanf("%d", &price);

	printf("\n2.數量：");
	scanf("%d", &n);

	printf("\n3.金額：%d",price*n);
	
	printf("元\n\n4.實收：");
	scanf("%d", &money);

	printf("=====================\n");

	printf("找零：%d\n\n", money - price * n);

	int re = money - price * n;

	printf("*** 應找鈔票如下： \n\n");

	printf("1.500元：%d 張\n\n",re/500);
	re = re % 500;

	printf("2.100元：%d 張\n\n", re / 100);
	re = re % 100;

	printf("3.50元：%d 枚\n\n", re / 50);
	re = re % 50;

	printf("4.10元：%d 枚\n\n", re / 10);
	re = re % 10;

	printf("5.5元：%d 枚\n\n", re / 5);
	re = re % 5;

	printf("6.1元：%d 枚\n\n", re / 1);
	
	return 0;
}
