#include"main.h"
/**
*print_square - print out size
*@n - count
*@size: size of square
*_putchar - print out characters
*/

void print_square(int size)
{
int a, b;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (b = 0; b < size; b++)
{
for (a = 0; a < size; a++)
{
_putchar(65);
}
_putchar('\n');
}
}
}
