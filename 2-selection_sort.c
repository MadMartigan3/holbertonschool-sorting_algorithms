#include "sort.h"

/**
 * selection_sort - function that selection sort an array
 *@array: array given
 *@size: size given
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;

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
		if (min != i)
		{
		tmp = array[min];
		array[min] = array[i];
		array[i] = tmp;
		print_array(array, size);
		}
	}
}
