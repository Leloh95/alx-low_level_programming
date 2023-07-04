#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer to the first node
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *headp = *head;
	listint_t *newn = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(headp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!headp || !(headp->next))
			return (-1);
		headp = headp->next;
		j++;
	}


	newn = headp->next;
	headp->next = newn->next;
	free(newn);

	return (1);
}

