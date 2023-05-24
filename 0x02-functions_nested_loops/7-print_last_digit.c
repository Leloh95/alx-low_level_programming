#include "main.h"

/**
*print_last_digit - functions that prints last digit
*Return: lastN
*@n: takes input numbers
*/
int print_last_digit(int n)
{
int lastN;

if (n < 0)
	lastN = -1 * (n % 10);
else
lastN = n % 10;
_putchar(lastN + '0');
return (lastN);
}
