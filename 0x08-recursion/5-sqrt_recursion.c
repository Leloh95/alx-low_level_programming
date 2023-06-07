#include "main.h"
#include<stdio.h>

/**
 *_sqrt_recursion - prints squares
 * @n: input
 * Return: 0(success)
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 *_sqrt - prints squares
 *@i:input number
 *@n: input
 * Return: 0(success)
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;

if (sqrt > n)
return (-1);

if (sqrt == n)
return (i);

return (_sqrt(n, i + 1));
}

