#include "lists.h"

/**
 * sum_listint - returns  sum of all the data in a listint_t list
 * @head: first node 
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int dsum = 0;
	listint_t *headp = head;

	while (headp)
	{
		dsum += headp->n;
		headp = headp->next;
	}

	return (dsum);
}

