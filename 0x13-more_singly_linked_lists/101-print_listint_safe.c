#include "lists.h"
#include <stdio.h>

size_t looped_listint_length(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_length - Counts the number of nodes
 * @head: A pointer to the head of the list
 * Return: If the list is not looped - 0.
 */
size_t looped_listint_length(const listint_t *head)
{
const listint_t *big, *same;
size_t node = 1;

if (head == NULL || head->next == NULL)
return (0);

big = head->next;
same = (head->next)->next;

while (same)
{
if (big == same)
{
big = head;
while (big != same)
{
node++;
big = big->next;
same = same->next;
}

big = big->next;
while (big != same)
{
node++;
big = big->next;
}
return (node);
}

big = big->next;
same = (same->next)->next;
}
return (0);
}


/**
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t node, idx = 0;

node = looped_listint_length(head);

if (node == 0)
{
for (; head != NULL; node++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (idx = 0; idx < node; idx++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (node);
}
