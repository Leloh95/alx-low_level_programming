#include"main.h"
#include<stdlib.h>

/**
 *array_range - creates arrays
 *@min: minimum integer
 *@max: maximum integer
 *Return: 0(sucess)
 */

int *array_range(int min, int max)
{
	int *array, byte, count;
	int m = max - min + 1;

	if (min > max)
		return (NULL);
	array= malloc(m);
	if (array == NULL)
		return (NULL);

	for (count = 0; count < byte; count++)
	{
		array[count] = min + 1;
	}
	return (array);
}
