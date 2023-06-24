#include "main.h"

/**
 * wildcmp - Compare strings
 * @sA: pointer to 3rd string
 * @sB: pointer to 2nd string
 * Return: 0
 */

int wildcmp(char *sA, char *sB)
{
	if (*s == '\0')
	{
		if (*sB != '\0' && *sB == '*')
		{
			return (wildcmp(sA, sB + 1));
		}
		return (*sB == '\0');
	}

	if (*sB == '*')
	{
		return (wildcmp(sA + 1, sB) || wildcmp(sA, sB + 1));
	}
	else if (*sA == *sB)
	{
		return (wildcmp(sA + 1, sB + 1));
	}
	return (0);
}

