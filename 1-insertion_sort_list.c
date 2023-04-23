#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order
 *
 * @list: pointer to doubly-linked list
 * return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;
	listint_t *list_current = *list;
	listint_t *list_next, *p;

	if (list == NULL || (*list)->next == NULL)
		return;
	while (*list != NULL)
	{
		list_current = *list;
		*list = (*list)->next;
		if (head == NULL || list_current->n < head->n)
		{
			list_current->next = head;
			head = list_current;
		}
		else
		{
			p = head;
			while (p != NULL)
			{
				if (p->pNext == NULL || list_current->n < p->next->n)
				{
					list_current->next = p->next;
					p->next = list_current;
					break;
				}
				p = p->next;
			}
		}
	}
}
