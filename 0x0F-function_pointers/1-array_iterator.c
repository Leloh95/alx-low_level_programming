#include<stddef.h>
#include"function_pointers.h"

/**
 * array_iterator - function given as parameter
 * @action:act
 * @array:elements
 * @size:size of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int check = 0;

if (array != NULL && size > 0 && action != NULL)
{
for (; check < size; check++)
{
action(array[check]);
}
}
}

