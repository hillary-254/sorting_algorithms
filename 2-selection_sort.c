#include "sort.h"

/**
 * selection_sort - Sorts an array of integers
 * in ascending order using Selection sort
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		/*Find the index of the minimum element in the unsorted subarray*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		/*Swap the found minimum element with the*/
		/*first element of the unsorted subarray*/
		if (min_idx != i)
		{
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;

			/*Print the array after each swap*/
			print_array(array, size);
		}
	}
}
