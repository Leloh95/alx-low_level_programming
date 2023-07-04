#include"lists.h"
#include<stdlib.h>
/**
 * free_listint2 - free listint
 * @head: first node
 *Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *headp;

if (head == NULL)
return;

while (*head)
{
	headp = (*head)->next;
	free(*head);
	*head = headp;
}
*head = NULL;
}
