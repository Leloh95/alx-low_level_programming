#include"main.h"

/**
 *_strncpy - function that copies a string
 *@dest: pointer string
 *@src: pointer string
 *@n: integer
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int index = 0, c = 0;
while (src[index++])
c++;
for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];
for (index = c; index < n; index++)
dest[index] = '\0';
return (dest);
}
