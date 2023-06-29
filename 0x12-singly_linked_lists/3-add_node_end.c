#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at end
 * @head:  pointer to a pointer
 * @str: string
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *N_elem;
	list_t *end = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

N_elem = malloc(sizeof(list_t));
	if (!N_elem)
		return (NULL);

	N_elem->str = strdup(str);
	N_elem->len = len;
	N_elem->next = NULL;

	if (*head == NULL)
	{
		*head = N_elem;
		return (N_elem);
	}

	while (end->next)
		end = end->next;

	end->next = N_elem;

	return (N_elem);
}

