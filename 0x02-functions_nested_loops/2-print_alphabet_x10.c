#include "main.h"

/**
*_putchar - prints out all alphabets
*Print_alphabet_x10 - prints alphabet x10 times
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
