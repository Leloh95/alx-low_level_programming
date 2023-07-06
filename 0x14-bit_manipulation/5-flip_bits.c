#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, check = 0;
unsigned long int number;
unsigned long int flipped = n ^ m;

for (k = 63; k >= 0; k--)
{
number = flipped >> k;
if (number & 1)
check++;
}
return (check);
}


