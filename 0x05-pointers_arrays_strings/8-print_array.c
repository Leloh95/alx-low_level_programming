#include"main.h"

/**
 * print_array - function prints out arrays
 *@a: integer array
 *@n:elements to be printed
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
