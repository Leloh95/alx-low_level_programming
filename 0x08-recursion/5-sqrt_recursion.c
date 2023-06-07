#include "main.h"
#include<stdio.h>

/**
 *_sqrt - print squares
 *_sqrt_recursion - prints squares
 * @n: input
 * Return: 0(success)
 *@i: input
 */
int _sqrt(int n, int i)

/* _sqrt_recursion - prints squares*/

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
int sqrt = i * i;

if (sqrt > n)
return (-1);

if (sqrt == n)
return (i);

return (_sqrt(n, i + 1));
}

