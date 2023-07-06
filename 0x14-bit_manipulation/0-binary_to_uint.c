#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of 1 and 0
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
int k;
unsigned int integer = 0;

if (!b)
return (0);

for (k = 0; b[k]; k++)
{
if (b[k] < '0' || b[k] > '1')
return (0);
integer = 2 * integer + (b[k] - '0');
}

return (integer);
}

