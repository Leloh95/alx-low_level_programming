#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabet in lowercase x10 times
 *_putchar - print put alphabet
 *Return: 0
 */

void print_alphabet_x10(void)
{
	char l;
	int b = 0;

	while (b <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		b++;
	}
}



