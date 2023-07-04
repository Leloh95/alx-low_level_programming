#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to the first node
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int cur;
	listint_t *headp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		cur = *h - (*h)->next;
		if (cur > 0)
		{
			headp = (*h)->next;
			free(*h);
			*h = headp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}


