#include"main.h"
#include<stdlib.h>

/**
 * string_nconcat - print two strings
 * @s1: first string
 * @s2: second string
 * @n:nymber of bytes
 * Return: 0(success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a/i = 0, b/j = 0, c/k = 0, d/l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[c])
		c++;
	if (n >= c)
		l = a + c;
	else
		l = a + n;
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	c = 0;
	while (b < l)
	{
		if (b <= a)
			s[b] = s1[b];
		if (b >= a)
		{
			s[b] = s2[c];


