#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the first node
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *prior = NULL;

	while (*head)
	{
		prior = (*head)->prior;
		(*head)->prior = back;
		back = *head;
		*head = prior;
	}

	*head = back;

	return (*head);
}

