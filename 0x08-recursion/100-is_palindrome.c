#include "main.h"

int check_pdrome(char *s, int i, int length);
int _strlen_string(char *str);

/**
 * is_palindrome - checks for palindrome
 * @s: string
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pdrome(s, 0, _strlen_string(s)));
}

/**
 * _strlen_string - returns the length of a string
 * @str: string
 * Return: length
 */
int _strlen_string(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen_string(str + 1));
}

/**
 * check_pdrome - checks for palindrome
 * @s: string
 * @i: input
 * @length: length
 * Return: 0
 */
int check_pdrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_pdrome(s, i + 1, length - 1));
}

