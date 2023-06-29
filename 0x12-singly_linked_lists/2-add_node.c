#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: pointer to a pointer
 * @str: string
 *
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *N_elem;
	unsigned int length = 0;

	while (str[length])
		length++;

	N_elem = malloc(sizeof(list_t));
	if (!N_elem)
		return (NULL);

	N_elem->str = strdup(str);
	N_elem->len = length;
	N_elem->next = (*head);
	(*head) = N_elem;

	return (*head);
}

