#include"main.h"

/**
 * _strcpy - copy string
 * @dest: destinatin
 * @src: source
 * Return: 0(success)
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}

