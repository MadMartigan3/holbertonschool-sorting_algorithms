#include "sort.h"

/**
 * 
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, small, tmp;

	for (i = 0; i < size - 1; i++)
	{
		small = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[small])
			{
				small = j;
			}
			tmp = array[small];
			array[small] = array[i];
			array[i] = tmp;
		}
		print_array(array, size);
	}
}
