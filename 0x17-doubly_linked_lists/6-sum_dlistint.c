#include "lists.h"

/**
 * sum_dlistint - calculates the sum of elements in the list
 * @head: the pointer ot the head of the list
 * Return: the sum of all the elements in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
