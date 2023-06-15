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
	int *array, count, m = max - min;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * m + sizeof(int));
	if (array == NULL)
		return (NULL);

	for (count = 0; count < m; count++)
	{
		array[count] = min;
		min++;
	}
	return (array);
}
