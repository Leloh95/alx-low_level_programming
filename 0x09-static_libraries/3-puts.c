#include"main.h"


/**
 *_puts - function print out strings in reverse
 * _putchar - outputs strings
 * @str: string
 * Return: returns 0
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');

}
