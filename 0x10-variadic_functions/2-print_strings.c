#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_strings - print strings
 * @n: integer
 * @separator: pointer
 * @...: unknown
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list str;
char *string;
unsigned int i = 0;

va_start(str, n);

for (; i < n; i++)
{
string = va_arg(str, char*);
if (string == NULL)
	printf("(nil)");
else
	printf("%s", string);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(str);
}
