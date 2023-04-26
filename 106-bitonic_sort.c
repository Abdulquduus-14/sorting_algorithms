#include "sort.h"
/**
 * bitonic_sort - a function that sorts an array of integers in
 * ascending order using the Bitonic sort algorithm
 *
 * @array: array of elements to sort
 * @size: number of elements to sort
 *
 * return: void
 */
void bitonic_sort(int *array, size_t size)
{
	size_t k, j, i, l;
	int temp;

	for (k = 2; k <= size; k *= 2)
		for (j = k / 2; j > 0; j /= 2)
			for (i = 0; i < size; i++)
			{
				l = i ^ j;
				if (l > i)
				{
					if (((i & k) == 0 && array[i] > array[l])
					|| ((i & k) != 0 && array[i] < array[l]))
					{
						temp = array[i];
						array[i] = array[l];
						array[l] = temp;
					}
					printf("Merging [%d/%d] (UP)\n", array[i], array[i]);
					print_array(array, size);
				}
			}
}
