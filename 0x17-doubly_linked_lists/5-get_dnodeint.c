#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at index
 * @head: pointer to head node
 * @index: the index of node to find
 * Return: pointer to node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			break;
		head = head->next;
	}
	return (head);
}
