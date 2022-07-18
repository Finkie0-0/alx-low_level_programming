#include "lists.h"
#include <stdio.h>

/**
 * print_listint - this function prints all the elements of the listint_t list
 * @h: linked list pointer.
 *
 *Return: The number of the nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	if(h == NULL)
		return (0);

	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
