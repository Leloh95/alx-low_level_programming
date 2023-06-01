#include"main.h"

/**
 * string_toupper - function changes lowercase to uppercase  of strings
 *Return: returns string
 *@s:string
 */

char *string_toupper(char *s)
{

int index = 0;

while (s[index])
{
if (s[index] >= 'a' && s[index] <= 'z')
s[index] -= 32;
index++;
}
return (s);
}

