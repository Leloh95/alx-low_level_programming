#include "main.h"

/**
* _putchar - prints out all alphabets
* print_alphabet_X10 - prints alphabets in lowercase 10 times
 */

void print_alphabet_x10(void)
{
char L;
int b = 0;

while (b <= 9)
{
for (L = 'a'; L <= 'z'; L++)
{
_putchar(L);
}
_putchar('\n');
b++;
}
}
