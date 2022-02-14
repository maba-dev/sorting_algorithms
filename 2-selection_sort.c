#include "sort.h"
/**
 * swap - The swap function
 * @array: The array to swap
 * @i: The idx to array
 * @k: The new index to array
 * Return: None
 */

void swap(int *array, int i, int k)
{
	int tmp;

	tmp = array[i];
	array[i] = array[k];
	array[k] = tmp;
}

/**
 * selection_sort - a function that sort an array of integer in ascending order
 * @array: The array to swap
 * @size: The size to array
 * Return: None
 */

void selection_sort(int *array, size_t size)
{
	int indexMin;
	size_t i;
	size_t j;
	size_t k;


	for (i = 0; i < size; i++)
	{
		indexMin = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] <  indexMin)
			{
				indexMin = array[j];
				k = j;
			}
		}
		if (array[i] != indexMin)
		{
			swap(array, i, k);
			print_array(array, size);
		}
	}
}
