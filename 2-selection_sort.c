#include "sort.h"

/**
 * 
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, tmp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (tmp != i)
		{
		tmp = array[min];
		array[min] = array[i];
		array[i] = tmp;
		print_array(array, size);
		}
	}
}
