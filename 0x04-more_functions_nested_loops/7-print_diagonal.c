#include"main.h"
/**
* print_diagonal - prints out \ linea
*putchar - print out lines
*@n: input character
*/
void print_diagonal(int n)
{
int b, a;

if (n <= 0)
{
putchar('\n');
}
else
{
for (b = 0; b < n; b++)
{
for (a = 0; a < n; a++)
{
if (a == b)
putchar('\\');
else if (a < b)
putchar(' ');
}
putchar('\n');
}
}
}
