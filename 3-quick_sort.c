#include "sort.h"


void swap(int *array, int i, int k)
{
	int tmp;

	tmp = array[i];
	array[i] = array[k];
	array[k] = tmp;
}


int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i, j;

	j = low;
	for (i = low; i < high; i++)
	{
		if (array[i] < pivot)
		{
			if (j != i)
			{
				swap(array, i, j);
				print_array(array, size);
			}
			j++;
		}
	}
	if (j != high)
	{
		swap(array, j, high);
		print_array(array, size);
	}
	return (j);
}


void quick(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick(array, low, pivot - 1, size);
		quick(array, pivot + 1, high, size);
	}
}

void quick_sort(int *array, size_t size)
{

	if (size <= 1)
		return;

	quick(array, 0, size - 1, size);
}
