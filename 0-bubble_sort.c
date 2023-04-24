#include "sort.h"
/**
 * bubble_sort - a function that sorts an array of integers in ascending order
 *
 * @array: array of integers to sort
 * @size: number of elements in the array
 *
 * return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t pass, i;
	int temp;

	for (pass = size - 1; pass >= 0; pass--)
	{
		for (i = 0; i <= pass - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
