#include"main.h"

/**
 * _strspn - gets string length
 * @s:string
 * @accept:characters
 * Return: 0(success)
 */

unsigned int _strspn(char *s, char *accept)
{
int i, valu = 0;

while (*s)
{
	for (i = 0; accept[i]; i++)
	{
		if (accept[i] == *s)
		{
			valu++;
			break;
		}
		else if ((accept[i + 1]) == "\0")
			return (valu);
	}
	s++;
}
return (valu);
}
