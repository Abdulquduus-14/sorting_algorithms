#include "sort.h"
/**
 * shell_sort - a function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 *
 * @array: array of integers to sort
 * @size: number of elements in the array
 *
 * return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, n, v;
	
	for (n = 1; n < size / 9; n = n * 3 + 1)
	{
		;
	}
	for (; n > 0; n = n / 3)
	{
		for (i = n + 1; i < size; i += 1)
		{
			v = array[i];
			j = i;
			while (j > n && array[j - n] > v)
			{
				arrray[j] = array[j - n];
				j -= h;
			}
			array[j] = v;
		}
	}
}
