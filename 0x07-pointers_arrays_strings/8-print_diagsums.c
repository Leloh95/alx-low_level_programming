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
int i, sumA = 0, sumB = 0;

for (i = 0; i < size; i++)
{
	sumA = sumA + a[i * size + i];
}
for (i = size - 1; i >= 0; i--)
{
sumB = sumB + a[i * size + (size - i - 1)];
}
printf("%d, %d\n", sumA, sumB);
}
