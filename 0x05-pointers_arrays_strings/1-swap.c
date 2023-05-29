#include"main.h"

/**
 * swap_int - function that swap two integers
 * @a: integer one
 * @b: integer two
 * swap - swap out two integers
 */

void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}
