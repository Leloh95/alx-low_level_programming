#include "main.h"
/**
 * more_numbers - print numbers 10 lines from 0 to 14
 * putchar - prints out characters
 * @j: line count
 */

void more_numbers(void)
{
int i = 0, x;

while (i < 10)
{
x = 0;
while (x > 14)
{
putchar(x);
x++;
}
}
putchar('\n');
i++;
}
