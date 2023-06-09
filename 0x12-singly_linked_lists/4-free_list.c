#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *frees;

	while (head)
	{
		frees = head->next;
		free(head->str);
		free(head);
		head = frees;
	}
}

