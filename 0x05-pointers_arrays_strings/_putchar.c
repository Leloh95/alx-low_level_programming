#include "main.h"
#include <unistd.h>
/**
 * _putchar - input the character c to stdout
 * @c: the character to print
 * @n: the input character
 * @a: first input integer
 * @b: second input integer
 * Return: (success)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
