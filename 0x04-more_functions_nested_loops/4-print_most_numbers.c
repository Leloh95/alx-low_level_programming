#include"main.h"
/**
 * print_numbers - check numbers from 0 to 9
 *_putchar - prints output
 * Return: 0(success)
 */
void print_numbers(void)
{
	int b = 0;

	for (; b <= 9; b++)
	{
		if  (b != 2 && b != 4)
		{
		continue;
		}
		else
		{
		_putchar(b + '0');
		}
	}
	_putchar('\n');
}
