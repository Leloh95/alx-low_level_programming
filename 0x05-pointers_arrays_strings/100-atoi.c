#include"main.h"

/**
 * _atoi - converts strings to integers
 * @s: string
 * Return: integer
 *
 */

int _atoi(char *s)
{
	int b = 0;
	unsigned int ni = 0;
	int mint = 1;
	int ist = 0;

	while (s[b])
	{
		if (s[b] == 45)
	{
		min *= -1;
	}
	while (s[b] >= 48 && s[b] <= 57)
	{
		ist = 1;
	mi = (mi * 10) + (s[b] - '0');
	b++;
	}
	if (ist == 1)
	{
		break;
	}
	b++;
	}
	mi *= min;
	return (mi);
}

