#include "stdio.h"
#include <stdlib.h>

double selectionSort(int * number, int number_count);
double bubbleSort(int * number, int number_count);

int main()
{
	int number_count = 10000;
	int number[10000];
	for (int i = 0; i < number_count; i ++)
	{
		number[i] = rand();
	}
	double sortTime = selectionSort(number, number_count);
	printf("选择排序算法使用时间：%.0f 毫秒\n", sortTime * 1000);
	sortTime = bubbleSort(number, number_count);
	printf("冒泡排序算法使用时间：%.0f 毫秒\n", sortTime * 1000);
}
