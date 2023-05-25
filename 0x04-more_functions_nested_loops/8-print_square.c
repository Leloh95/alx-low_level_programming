#include"main.h"
/**
*print_square - print out size
*@n - count
*@size: size of square
*putchar - print out characters
*/

void print_square(int size)
{
int a, b;

if (size <= 0)
{
putchar('\n');
}
else
{
for (b = 0; b < size; b++)
{
for (a = 0; a < size; a++)
{
putchar(65);
}
putchar('\n');
}
}
}
