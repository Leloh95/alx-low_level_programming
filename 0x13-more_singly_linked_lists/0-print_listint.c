#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * print_listint - prints all elements of listint
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t check = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	check++;
	h = h->next;
	}
return (check);
}


