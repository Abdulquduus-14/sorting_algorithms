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
	int i, j, min, temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		temp = array[min];
		array[min] = array[i];
		array[i] = temp;
	}
}
