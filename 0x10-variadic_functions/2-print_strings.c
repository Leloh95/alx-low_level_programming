#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_numbers - print numbers
 * @n: integer
 * @separator: pointer
 * @...: unknown
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nu;
unsigned int i = 0;

va_start(nu, n);

for (; i < n; i++)
{
printf("%d", va_arg(nu, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nu);
}
