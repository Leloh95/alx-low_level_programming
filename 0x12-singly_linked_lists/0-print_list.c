#include<stdio.h>
#include"lists.h"

/**
 * print_list - prints elements of list
 * @h:pointer
 * Return: 0
 */
size_t print_list(const list_t *h)
{
size_t c = 0;

while (h != NULL)
{
	if (h->str != NULL)
		printf("[%u] %s\n", h->len, h->str);
	else
	{
	printf("[0] (nil)\n");
	}
	c++;
	h = h->next;
}
return (c);
}



