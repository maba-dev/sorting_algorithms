#include "sort.h"
/**
 * swap - The swap function
 * @array: The array to swap
 * @idx: The idx to array
 * Return: None
 */

void swap(int *array, int idx)
{
	int tmp;

	tmp = array[idx];
	array[idx] = array[idx + 1];
	array[idx + 1] = tmp;
}

/**
 * bubble_sort - a function that sorts an array of integers in ascending order
 * @array: The array to swap
 * @size: The size to array
 * Return: None
 */

void bubble_sort(int *array, size_t size)
{
	int index;
	size_t i;
	size_t j;


	for (i = 0; i < size; i++)
	{
		j = 0;
		for (index = 0; j < size; index++)
		{
			if (array[index] > array[index + 1] && j + 1 < size)
			{
				swap(array, index);
				print_array(array, size);
			}
			j++;
		}
	}

}
