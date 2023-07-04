#include"lists.h"

/**
 *pop_listint - delets head node
 *@head:pointer of a pointer to first node
 *Return:0 for empty lists
 */
int pop_listint(listint_t **head)
{
	listint_t *headp;
	int count;

	if (!head || !*head)
		return (0);
	count = (*head)->n;
	headp = (*head)->next;
	free(*head);
	*head = headp;
return (count);
}

