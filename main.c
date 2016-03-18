#include "stdio.h"
#include <stdlib.h>

void selectionSort(int * number, int number_count);

int main()
{
	int number_count = 10;
	int number[10];
	for (int i = 0; i < number_count; i ++)
	{
		number[i] = rand();
	}
	selectionSort(number, number_count);
}
