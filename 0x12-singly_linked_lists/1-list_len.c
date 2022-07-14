#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of count in a linked list_t list.
 * @h: header pointer.
 *
 * Return: number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h -> next;
		node++;
	}
	return (node);
}
