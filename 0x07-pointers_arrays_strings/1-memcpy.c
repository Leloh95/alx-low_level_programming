#include"main.h"

/**
* _memcpy - function that copies bytes from memory src to dest
* @src: source
* @dest: destination
* @n: bytes to be copies
* Return: 0(success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
	dest[a] = src;
return (dest);
}
