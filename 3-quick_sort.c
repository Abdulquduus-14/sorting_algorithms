#include "sort.h"
/**
 * quick_sort -  a function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 *
 * @array: array of elements to sort
 * @size: number of elements in array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1);
}

/**
 * qs - main quicksort function
 * @items: array of elements to sort
 * @left: leftmost element
 * @right: rightmost element
 *
 * return: nothing
 */
void qs(int *items, size_t left, size_t right)
{
	size_t i, j;
	int x, y;

	i = left;
	j = right;
	x = items[(left + right) / 2];
	do {
		while ((items[i] < x) && (i < right))
			i++;
		while ((x < items[j]) && (j > left))
			j--;
		if (i <= j)
		{
			y = items[i];
			items[i] = items[j];
			items[j] = y;
			i++;
			j--;
		}
		print_array(array, right + 1);
	} while (i <= j);

	if (left < j)
		qs(items, left, j);
	if (i < right)
		 qs(items, i, right);
}
