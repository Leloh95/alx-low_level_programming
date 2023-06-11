#include"main.h"

/**
 * _strncat - function that concatenates two strings
 *@dest: string to be appended
 *@src: string to be appended
 *@n:integer
 *Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0, b = 0;

while (dest[index++])
        b++;
for (index = 0; src[index] && index < n; index++)
dest[b++] = src[index];
return (dest);
}
