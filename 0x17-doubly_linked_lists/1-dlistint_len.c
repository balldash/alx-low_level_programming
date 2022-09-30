#include "lists.h"

/**
 * dlistint_len - computes the length of the list
 * @h: the head of the list
 * Return: the length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
