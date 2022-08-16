#include "lists.h"

/**
 * sum_listint - returns the sum of all dat in list
 * @head: pointer to head of list
 * Return: sum, or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
