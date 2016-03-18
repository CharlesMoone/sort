#include "stdio.h"
#include <stdlib.h>

double selectionSort(int * number, int number_count);

int main()
{
	int number_count = 10000;
	int number[10000];
	for (int i = 0; i < number_count; i ++)
	{
		number[i] = rand();
	}
	double selectionTime = selectionSort(number, number_count);
	printf("%.0f 毫秒\n", selectionTime * 1000);
}
