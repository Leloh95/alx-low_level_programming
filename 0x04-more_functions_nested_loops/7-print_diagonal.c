#include"main.h"
/**
* print_diagonal - prints out \ linea
*putchar - print out lines
*@n: input character
*/
void print_diagonal(int n)
{
int a, b;
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
putchar(92);
}
putchar(92);
putchar('\n');
}
}
