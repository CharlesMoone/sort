#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void selectionSort(int * number, int number_count)

{
	clock_t start, finish;
	double duration;
	int min;
	start = clock();
	for (int i = 0; i < number_count - 1; i ++)
	{
		min = i;
		for (int j = i + 1; j < number_count; j ++)
		{
			if (number[min] > number[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int temp = number[min];
			number[min] = number[i];
			number[i] = temp;
		}
	}
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%.0f 毫秒\n", duration*1000);
}
