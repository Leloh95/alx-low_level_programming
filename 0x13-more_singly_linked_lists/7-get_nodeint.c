#include "lists.h"

/**
 * get_nodeint_at_index - returns the node
 * @head:first node
 * @index: index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *headp = head;

	while (headp && i < index)
	{
		headp = headp->next;
		j++;
	}
return (temp ? headp : NULL);
}
