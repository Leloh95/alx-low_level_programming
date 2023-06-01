#include"main.h"

/**
 * *_strcat - function that concatenates two integers
 *@dest: a pointer destinations
 *@src: a pointer sorce
 *Return: 0(success)
 */

char *_strcat(char *dest, char *src)
{
	int b = -1, i;

for (i = 0; dest[i] != '\0'; i++)
	do 
	{
		b++;
		dest[i] = src[b];
		i++;
	}
	while (src[b] != '\0');
return (dest);
}

