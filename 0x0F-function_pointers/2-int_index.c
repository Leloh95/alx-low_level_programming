#include<stddef.h>
#include"function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array
 * @size: size of array
 * @cmp:pointer to function
 *Return: 0(success) or -1 fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int check = 0;

if (array != NULL && size > 0 && cmp != NULL)
{
while (check < size)
{
	if (cmp(array[check]))
		return (check);
check++;
}
}
return (-1);
}

