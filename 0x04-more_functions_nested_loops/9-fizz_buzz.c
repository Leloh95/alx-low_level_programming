#include<stdio.h>
/**
 * main -start program
 * Return: 0(success)
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
	{
	printf("Fizz");
	}
else if (i % 5 == 0 && 3 != 0)
	{
	printf("Buzz");
	}
else if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz");
	}
else if (i == 1)
	{
	printf("%d", i);
	}
else
	{
	printf("\n");
	}
}
return (0);
}
