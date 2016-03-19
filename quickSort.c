#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void quickSort(int * number, int left, int right);

double quickTime(int *number, int number_count)
{
	clock_t start, finish;
	double duration;
	start = clock();
	quickSort(number, 0, number_count - 1);
	finish = clock();
	return duration = (double)(finish - start) / CLOCKS_PER_SEC;
}

void quickSort(int * number, int left, int right)
{
	if (left >= right)
	{
		return ;
	}
	int i = left;
	int j = right;
	int k = number[left];

	while(i < j)
	{
		while(i < j && k <= number[j])
		{
			j --;
		}
		number[i] = number[j];

		while(i < j && k >= number[i])
		{
			i ++;
		}
		number[j] = number[i];
	}

	number[i] = k;
	quickSort(number, left, i - 1);
	quickSort(number, i + 1, right);
}
