#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - print sums
 * @a: input
 * @size: input
 * Return: 0 (success)
 */

void print_diagsums(int *a, int size)
{
int i, n, sumA = 0, sumB = 0;

for (i = 0; i <= (size * size); i = i + size + 1)
sumA = sumA + a[i];

for (n = size - 1; n <= (size * size); n = n + size - 1)
sumB = sumB + a[n];
printf("%d, %d\n", sumA, sumB);
}
