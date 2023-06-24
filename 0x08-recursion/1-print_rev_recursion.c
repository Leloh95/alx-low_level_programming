#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 * Return: returns string
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
