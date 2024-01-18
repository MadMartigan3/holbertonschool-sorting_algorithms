#include "sort.h"

/**
 *
*/

int partition(int array[], int start, int end, size_t size)
{
	int j, tmp;

	int pivot = array[end];
	int i = (start - 1);

	for (j = start; j < end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
		}
	}
	tmp = array[i+1];
	array[i + 1] = array[end];
	array[end] = tmp;
	print_array(array, size);

	return (i + 1);
}

/**
 *
*/

void quick_sort(int *array, size_t size)
{
	size_t low, high;

	if (low < high)
	{
		int pi = partition(array, low, high);

		quick_sort(array, low, pi - 1);
		quick_sort(array, pi + 1, high);
	}
}
