#include "main.h"

/**
 * print_alphabet - prints all alphabet in lowercase
*/

void print_alphabet(void)
{
	char alphaL = 'a';

	while (alphaL <= 'z')
		{
	_putchar(alphaL);
		alphaL++;
		}
	_putchar('\n');
}
