#include "main.h"

/**
 * print_binary - prints the binary representation  of a  number
 * @n: binary number
 */
void print_binary(unsigned long int n)
{
int k, check = 0;
unsigned long int manip;

for (k = 63; k >= 0; k--)
{
manip = n >> k;

if (manip & 1)
{
_putchar('1');
check++;
}
else if (check)
_putchar('0');
}
if (!check)
_putchar('0');
}


