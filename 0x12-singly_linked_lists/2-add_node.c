#include "lists.h"

/**
 * add_node - adds a node to the head of the linked list
 * @head: pointer to the head of the list
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL or failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}

/**
 * _strlen - get the length of the string
 * @str: the string
 * Return: the length
 */

int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
