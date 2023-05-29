#include"main.h"

/**
 * print_rev - print string in reverse
 *_puts - function print out strings in reverse
 * _putchar - outputs strings
 * @str: string
 * Return: returns 0
 */

void print_rev(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
print_rev(str);
}
_putchar('\n');

}
