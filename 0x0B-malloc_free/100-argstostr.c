#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * argstostr - concatenates all arguments of program
 * @ac:arg count
 * @av:arg vector
 * Return: 0(success)
 */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (b < ac)
	{
		while (av[b][c])
		{
			a++;
			c++;
		}
		c = 0;
		b++;
	}
	str = malloc((sizeof(char) * a) + ac + 1);
	b = 0;
	while (av[b])
	{
		while (av[b][c])
		{
			str[d] = av[b][c];
			d++;
			c++;
		}
		str[d] = '\n';
		c = 0;
		d++;
		b++;
	}
	d++;
	str[d] = '\0';
	return (str);
}
