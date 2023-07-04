#include"stdlib.h"
#include"lists.h"

/**
 * add_nodeint - adds new node at beginning
 * @head:pointer to first node
 * @n: integer
 *Return:address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *begin;

begin = malloc(sizeof(listint_t));
if (!begin)
{
return (NULL);
}
begin->n = n;
begin->next = next;
next = begin;
return (begin);
}
