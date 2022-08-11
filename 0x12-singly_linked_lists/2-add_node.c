#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node to the head of the linked list
 * @head: pointer to the head of the list
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL or failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
