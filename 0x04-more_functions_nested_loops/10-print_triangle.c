#include"main.h"
/**
 *print_triangle - prints out triangle
 *@size: input
 *putchar - prints out character
 */

void print_triangle(int size)
{
int a, b;

if (size <= 0)
{
putchar('\n');
}
else
{
for (a = 1; a <= size; a++)
{
for (b = a; b <= size; b++)
{
putchar(' ');
}
for (b = 1; b <= a; b++)
{
putchar('#');
}
putchar('\n');
}
}
}
