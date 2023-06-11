#include"main.h"

/**
 * _strcat - function that concatenates two integers
 *@dest: a pointer destinations
 *@src: a pointer sorce
 *Return: 0(success)
 */

char *_strcat(char *dest, char *src)
{
int b = 0, i;

while (dest[b])
{
b++;
}
for (i = 0; src[i] != 0; i++)
{
dest[b] = src[i];
b++;
}
dest[b] = '\0';
return (dest);
}
