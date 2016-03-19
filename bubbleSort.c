#include "stdio.h"
#include <stdlib.h>
#include "time.h"

double bubbleSort(int * number, int number_count)
{
	clock_t start, finish;
	double duration;
	start = clock();
	for (int i = 0; i < number_count - 1; i ++)
	{
		for (int j = 0; j < number_count - i - 1; j ++)
		{
			if (number[j+1] < number[j])
			{
				int temp = number[j];
				number[j] = number[j+1];
				number[j+1] = temp;
			}
		}
	}
	finish = clock();
	return duration = (double)(finish - start) / CLOCKS_PER_SEC;
}
