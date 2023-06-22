#include"variadic_functions.h"
#include<stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: integer
 * @...: unknown variable
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
va_list as;
unsigned int i, sum = 0;

  va_start(as, n); 
  for (i = 0; i < n; i++)
    sum = sum + va_arg(as, int);
  va_end(as);
  return (sum);
}

