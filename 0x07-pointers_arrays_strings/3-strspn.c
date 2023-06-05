#include"main.h"

/**
 * _strspn - gets string length
 * @s:string
 * @accept:characters
 * Return: 0(success)
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b, integer, check;

integer = 0;

for (a = 0; s[a] != '\0'; a++)
{
check = 0;
for (b = 0; accept[b] != '\0'; b++)
{
if (accept[b] == s[a])
integer++;
check = 1;
}
if (check == 0)
}
}
