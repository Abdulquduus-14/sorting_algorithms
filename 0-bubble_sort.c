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
	size_t a, b;
	int temp;

	for (a = 1; a < size; ++a)
	{
		for (b = size - 1; b >= a; --b)
		{
			if (array[b] > array[b + 1])
			{
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;
			}
			print_array(array, size);
		}
	}
}
