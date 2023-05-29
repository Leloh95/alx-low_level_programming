#include"main.h"


/**
 * _puts - outputs strings
 * @s: string
 * Return: returns 0
 */

void _puts(char *s)
{
	for (; *s != '\0'; *s++)
	{
	_putchar(*s);
	}
	_putchar('\n');

}
