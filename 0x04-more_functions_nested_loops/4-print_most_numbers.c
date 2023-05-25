#include"main.h"
/**
 * print_numbers - check numbers from 0 to 9
 * putchar - prints output
 * Return: 0(success)
 */
void print_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		while (b != 2 && b != 4)
		{
		putchar(b + '0');
		}
	}
	putchar('\n');
}
