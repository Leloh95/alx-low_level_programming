#include"main.h"
/**
 *print_triangle - prints out triangle
 *@size: input
 *putchar - prints out character
 */

void print_triangle(int size)
{
if (size <= 0)
{
putchar('\n');
}
else
int a, b;

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
