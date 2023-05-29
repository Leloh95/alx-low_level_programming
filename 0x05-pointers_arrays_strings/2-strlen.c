#include"main.h"
#include <string.h>

/**
 * _strlen - prints out string length
 * strlen - print out string length
 * @s: string
 * Return: returns length of string
 */

size_t _strlen(const char *s)
{

size_t length = 0;

while (*s++)
length++;
return (length);
}

