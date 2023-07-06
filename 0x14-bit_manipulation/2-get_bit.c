#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: number
 * @index: index of the bit
 * Return: value of the bit in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
int indexbit;

if (index > 63)
return (-1);

indexbit = (n >> index) & 1;

return (indexbit);
}

