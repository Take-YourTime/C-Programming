#include "stdio.h"
#include "stdlib.h"
#include "time.h"

struct Student{
	//學號、成績陣列、平均成績（double） 
	int id;
	double scores[3];
	double average;
};


void calculate(struct Student *student){
	// 計算平均成績
	student->average = (student->scores[0] + student->scores[1] + student->scores[2])/3;
}


int main(void){
	srand(time(NULL));
	
	struct Student array[10];
	
	for(int index=0;index<10;index++){//初始化 
		array[index].id = index+100;
		
		for(int scoreIndex=0;scoreIndex<3;scoreIndex++){
			array[index].scores[scoreIndex] = rand()%100;
		}
		
		array[index].average = 0;
	}

	for(int index=0;index<10;index++){
		calculate(&array[index]);
	}
	
	for(int index=0;index<10;index++){
		// 印出平均成績 
		printf("學號 %d 的平均成績為 %.2lf\n",array[index].id,array[index].average);
	}
	
	puts("");
}
