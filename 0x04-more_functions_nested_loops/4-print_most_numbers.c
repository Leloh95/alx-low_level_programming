#include"main.h"
/**
*print_most_numbers - check numbers from 0 to 9
*putchar - print output
*Return: 0(success)
*/

void print_most_numbers(void)
{
int b;

for (b = 0; b <= 9; b++)
{
	if  (b == 2 || b == 4)
	{
	continue;
	}	
	else
	{
	putchar(b + '0');
	}
}
putchar('\n');
}
