#include <stdio.h>
/**
 * main - start program
 * Return: 0(success)
 */
int main(void)
{
int digit = 0;
while (digit < 10)
{
putchar(digit + '0');
digit++;
}
putchar("\n");
return (0);
}
