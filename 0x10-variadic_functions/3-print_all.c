#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_all - prints anything
 * @...: unknown
 * @format: types of arguments passed
 * Return: 0
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *string, *sepa = "";

va_list types;

va_start(types, format);

if (format)
{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s %c", sepa, va_arg(types, int));
				break;
			case 'i':
				printf("%s %d", sepa, va_arg(types, int));
				break;
			case 'f':
				printf("%s %f", sepa, va_arg(types, double));
				break;
			case 's':
				string = va_arg(types, char*);
				if (!string)
				string = "(nil)";
				printf("%s %s", sepa, string);
					break;
			default:
				i++;
				continue;
		}
		sepa = ",";
		i++;
	}
}
printf("\n");
va_end(types);
}
