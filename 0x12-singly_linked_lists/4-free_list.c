#include "lists.h"

/**
 * free_list - frees all elements in a linked list
 * @head: pointer to head element of list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
