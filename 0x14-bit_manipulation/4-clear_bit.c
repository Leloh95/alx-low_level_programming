#include "main.h"

/**
 * clear_bit - sets index bit to 0
 * @n: pointer
 * @index: index of the bit to set to 0
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = (~(1UL << index) & *n);
return (1);
}

