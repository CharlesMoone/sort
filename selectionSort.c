#include "stdio.h"
#include "stdlib.h"

void selectionSort(int * number, int number_count)

{
	int min;
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
	for (int i = 0; i < number_count; i ++)
	{
		printf("%d\n", number[i]);
	}
}
