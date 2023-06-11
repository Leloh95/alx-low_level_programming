#include<stdio.h>
#include"main.h"

/**
 * _strchr - locates character in a string
 * @s: character
 * @c: character
 * Return: 0(success)
 */

char *_strchr(char *s, char c)
{
        int a;
for (a = 0; s[a] >= '\0'; a++)
{
        if (s[a] == c)
                return (s + a);
}
return (NULL);
}
