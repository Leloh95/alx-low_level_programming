#include "main.h"

/*
*times_table - function to print 9 times table
* _putchar - prints out characters
*prodt - product
*/

void times_table(void)
{
	int  num, multi, prodt;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
		prodt = num + multi;
		if (prodt <= 9)
			_putchar(' ');
		else
			_putchar((prodt / 10) + 48);
		_putchar((prodt % 10) + 48);
		}
		_putchar('\n');
	}
}
