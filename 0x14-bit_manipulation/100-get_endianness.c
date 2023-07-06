#include "main.h"

/**
 * get_endianness - checks indianness
 * Return: 0 big indian, 1 little indian
 */
int get_endianness(void)
{
	unsigned int k = 1;
	unsigned char *indian = (unsigned char *) &k;

	if (*indian == 0)
	return (0);

	else
	return (1);
}

