#include<stdio.h>
/**
 * main - start program
 * Return: 0(success)
 */

int main(void)
{
	int b;
	b = 'z';

	while (b >= 'a')
	{
		putchar(b);
		b--;
	}
	putchar('\n');
	return (0);
}
