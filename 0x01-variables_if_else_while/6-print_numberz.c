#include <stdio.h>
/**
 * main - start program
 * Return: 0(success)
 */
int main(void)
{
int b;
b = 0;
while (b < 10)
{
putchar(b + '0');
b++;
}
putchar('\n');
return (0);
}
