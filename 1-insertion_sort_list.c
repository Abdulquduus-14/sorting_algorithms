#include "sort.h"
/**
 * insertion_sort_list - function sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: a doubly linked list of integers
 * return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *t, *h;
	bool st = false;

	if (list == NULL || !(*list)->next)
		return;

	t = *list;
	while (t->next)
	{
		if (t->n > (t->next->n))
		{
			t->next->prev = t->prev;
			if (t->next->prev != NULL)
				t->prev->next = t->next;
			else
				*list = t->next;
			t->prev = t->next, t->next = t->next->next;
			t->prev->next = t;
			if (t->next != NULL)
				t->next->prev = t;
			t = t->prev;
			print_list(*list);
			if (t->prev && (t->prev->n) > t->n)
			{
				if (!st)
					h = t->next;
				st = true;
				t = t->preve;
				continue;
			}
		}
		if (!st)
			t = t->next;
		else
		{
			t = h;
			st = true;
		}
	}
}
