#include"lists.h"
#include<stdlib.h>

/**
 * free_listint - frees listint
 * @head: first node
 * Return:0
 */

void free_listint(listint_t *head)
{
	listint_t *headp;

	while (head)
	{
		headp = head->next;
		free(head);
		head = headp;
	}
}
