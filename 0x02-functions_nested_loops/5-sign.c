#include "main.h"

/**
* print_sign - start program
*@n: checks input of function
*_putchar - prints characters
*Return: 0 (success)
*Return: 1
*Return: -1
*/

int print_sign(int n)
{
if (n > 0)
{
	_putchar(43);
	return (1);
}
else if (n == 0)
{
	_putchar(48);
	return (0);
}
else
{
	_putchar(45);
	return (-1);
}
}
