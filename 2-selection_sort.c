#include "sort.h"
/**
 * selection_sort - a function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 *
 * @array: array of elements to sort
 * @size: number of elements in the array
 *
 * return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp, exchange;

	for (i = 0; i < size - 1; i++)
	{
		exchange = 0;
		min = i;
		temp = array[i];

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < temp)
			{
				min = j;
				temp = array[j];
				exchange = 1;
			}
			print_array(array, size);
		}

		if (exchange)
		{
			array[min] = array[i];
			array[i] = temp;
		}

	}
}
