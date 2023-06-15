#include"main.h"
#include<stdlib.h>

/**
 * _calloc - allocztes memory for an array
 *@nmemb: array
 *@size: byte size
 *Return: 0(success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *pntr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	pntr = malloc(l);

	if (pntr == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		pntr[i] = 0;
	}
	return (0);
}


