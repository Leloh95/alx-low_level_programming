#include<stdio.h>
#include"main.h"

/**
 * _strstr - locates substring
 * @haystack:input
 * @needle:input
 * Return: 0(success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *frst = haystack;
		char *scnd = needle;

		while (*frst == *scnd && *scnd != '\0')
		{
			frst++;
			scnd++;
		}
		if (*scnd == '\0')
			return (haystack);
	}
	return (NULL);
}
