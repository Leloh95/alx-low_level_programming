#include<stdlib.h>
#include"lists.h"

/**
 *size_t - prints number of elements
 *@h: pointer
 *Return:0
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h);
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
