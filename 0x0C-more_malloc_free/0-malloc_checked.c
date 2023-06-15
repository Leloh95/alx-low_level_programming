#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 *malloc_checked - allocates memory
 *@b: size to be allocated
 * Return: 0(success)
 */


void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
	{
		exit(98);
	}
	return (pntr);

}
