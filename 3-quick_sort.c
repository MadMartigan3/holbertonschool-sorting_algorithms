#include "sort.h"

/**
 * partition - Partition the array and return the index of the pivot element
 * @array: The array to be sorted
 * @start: The starting index of the partition
 * @end: The ending index of the partition
 * @size: Size of the array
 * Return: Index of the pivot element
 */

int partition(int array[], int start, int end, size_t size)
{
    int j, tmp;

    int pivot = array[end];
    int i = (start - 1);

    for (j = start; j <= end - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;

            if (i != j)
            {
            	tmp = array[i];
            	array[i] = array[j];
            	array[j] = tmp;
           		print_array(array, size);
			}
        }
    }
	if (pivot < array[i + 1])
	{
    	tmp = array[i + 1];
    	array[i + 1] = array[end];
    	array[end] = tmp;
    	print_array(array, size);
	}
    return (i + 1);
}

/**
 * quick_sort_recursive - Recursive helper function for quick_sort
 * @array: The array to be sorted
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * @size: Size of the array
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int pi = partition(array, low, high, size);

        quick_sort_recursive(array, low, pi - 1, size);
        quick_sort_recursive(array, pi + 1, high, size);
    }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using the Quick sort algorithm
 * @array: The array to be sorted
 * @size: Size of the array
 */

void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quick_sort_recursive(array, 0, size - 1, size);
}
