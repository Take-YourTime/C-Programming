#include<stdio.h>

struct mystruct{
	int n;
	struct mystruct *next;
};


struct mystruct node1,node2,node3;

int main(){
	
	node1.n = 1;
	node2.n = 2;
	node3.n = 3;
	
	node1.next = &node2;
	node2.next = &node3;
	
	printf("以（node1.next->next->n）取出node3的值：%d\n",node1.next->next->n);

	return 0;
}

