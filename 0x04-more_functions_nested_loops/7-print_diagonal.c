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
for (a = 0; a < b; a++)
{
_putchar(92);
}
_putchar(92);
_putchar('\n');
}
}
