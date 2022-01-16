#include <stddef.h>
#include "sort.h"
/**
 * swap - swaps two integers
 *@xp : pointer to the first integer to be swapped
 *@yp : pointer to the second integer to be swapped
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 * selection_sort - sorts an array using selection sort
 *@array : pointer to array to be sorted
 *@size : size of the array
 */
void selection_sort(int *array, size_t size)
{
	int i, j, min_idx;
	int n = size;

	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < n; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		swap(&array[min_idx], &array[i]);
		if (i != min_idx)
			print_array(array, n);
	}
}
