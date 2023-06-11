#include "main.h"

/**
* _islower - print lowercase characters
*@c:input for character
*main - start program
*_putchar - print out character
*Return: 0
**/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
