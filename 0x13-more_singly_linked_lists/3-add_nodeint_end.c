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
listint_t *end;
listint_t *headp = *head;

end = malloc(sizeof(listint_t));
if (!end)
{
return (NULL);
}
end->n = n;
end->next = NULL;
if (*head == NULL)
{
	*head = end;
	return (end);
}
while (headp->next)
	headp = headp->next;
headp->next = end;
return (end);
}
