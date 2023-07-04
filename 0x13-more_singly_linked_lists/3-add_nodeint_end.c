#include"stdlib.h"
#include"lists.h"

/**
 * add_nodeint_end - adds new node at end
 * @head:pointer to first node
 * @n: integer
 *Return:address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *begin;
listint_t *headp = *head;

begin = malloc(sizeof(listint_t));
if (!begin)
{
return (NULL);
}
begin->n = n;
begin->next = NULL;
if (*head == NULL)
{
	*head = begin;
	return (begin);
}
while (headp->next)
	headp = headp->next;
headp->next = begin;
return (begin);
}
