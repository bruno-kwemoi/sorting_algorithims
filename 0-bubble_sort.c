#include "sort.h"
#include <stddef.h>
/**
 * swap - swaps two integers)
 *@xp : pointer to the first integer to be swapped
 *@xp : pointer to the second integer to be swapped
 */
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
/**
 * bubble_sort - performs bubble sort to arrays
 *@array : pointer to array to be sorted
 *@size : size of the array to be sorted
 */
void bubble_sort(int *array, size_t size)
{
	int i, j;
	int n = size;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, n);
			}
		}
	}
}
