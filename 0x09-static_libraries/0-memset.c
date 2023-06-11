nclude"main.h"
/**
 *_memset - fills memory with a constant byte
 *@s: pointer variable
 *@b: constant value
 *@n: integer value
 *Return: 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
