#include"main.h"
/**
* print_diagonal - prints out \ linea
*_putchar - print out lines
*@n: input character
*/
void print_diagonal(int n)
{
int b, a;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (b = 0; b < n; b++)
{
for (a = 0; a < n; a++)
{
if (j == i)
_putchar('\\');
else if (j < i)
_putchar(' ');
}
_putchar('\n');
}
}
}
