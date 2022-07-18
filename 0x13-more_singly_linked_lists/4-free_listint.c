#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *empty;
	
	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		empty = head->next;
		free(head);
		head = empty;
	}
	free(head);
}
