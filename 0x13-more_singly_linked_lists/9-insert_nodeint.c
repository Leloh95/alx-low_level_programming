#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first node 
 * @idx: index
 * @n: data for node
 * Return: pointer to the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *begin;
	listint_t *headp = *head;

	begin = malloc(sizeof(listint_t));
	if (!begin || !head)
		return (NULL);

	begin->n = n;
	begin->next = NULL;

	if (idx == 0)
	{
		begin->next = *head;
		*head = begin;
		return (begin);
	}

	for (j = 0; headp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			begin->next = headp->next;
			headp->next = begin;
			return (begin);
		}
		else
			headp = headp->next;
	}

	return (NULL);
}

