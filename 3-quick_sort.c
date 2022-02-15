#include "sort.h"

/**
 * swap - The swap function
 * @array: The array to swap
 * @i: The idx to array
 * @k: The new index to array
 * Return: None
 */

/**
  * swap - swaps two given indexes
  * @array: the array
  * @left: left pointer
  * @right: right pointer
  * Return: void
  */

void swap(int *array, int left, int right)
{
	array[left] += array[right];
	array[right] = array[left] - array[right];
	array[left] -= array[right];
}

/**
 * partition - function the Lomuto partition scheme.
 * @array: The array of arrays
 * @low: The low to array index
 * @high: the high to array index
 * @size: the size of the array
 * Return: the pivot array
 */

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

/**
 * quick - quick function
 * @array: The array of arrays
 * @low: The low to array index
 * @high: the high to array index
 * @size: the size of the array
 * Return: None
 */

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
/**
 * quick_sort - function to sort array
 * @array: array of arrays
 * @size: size of array
 * Return: None
 */

void quick_sort(int *array, size_t size)
{

	if (size <= 1)
		return;

	quick(array, 0, size - 1, size);
}
