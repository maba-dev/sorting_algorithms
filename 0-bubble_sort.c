#include "sort.h"
/**
 * @brief 
 * 
 */

void swap(int *array, int idx)
{
    int tmp;

    tmp = array[idx];
    array[idx] = array[idx + 1];
    array[idx + 1] = tmp;
}

void bubble_sort(int *array, size_t size)
{
    int index;
    size_t i ;
    size_t j;


    for (i = 0; i < size; i++)
    {
        j = 0;
        for (index = 0; j < size; index++)
        {
            if (array[index] > array[index + 1] && j + 1 < size)
            {
                /**printf("\navant swap\n");
                print_array(array, size);**/
                swap(array, index);
                
                print_array(array, size);
            }
            j++;
        }
    }

}
