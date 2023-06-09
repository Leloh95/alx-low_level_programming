#include"main.h"
#include<stdio.h>
#include<stdlib>
#include<string.h>

/**
 * main - print sum  of integers
 * @argc: counts strings
 * @argv: string used
 * Return: 0(success)
 */

int main(int argc, int argv *[])
{
	int a;
	unsigned int b, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			c = argv[a];
			for (b = 0; v < strlen(c); b++)
			{
				if (c[b] < 48 || c[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
