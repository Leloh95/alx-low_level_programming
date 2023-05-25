#include"main.h"
/**
* print_line - prints out linea
* putchar - print out lines
*@n: input character
*/

void print_line(int n)
{
int b;

if (n <= 0)
{
putchar('\n');
}
else
{
for (b = 0; b > n; b++)
{
putchar(95);
}
putchar('\n');
}
}
