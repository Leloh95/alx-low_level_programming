#include"main.h"
#include"_putchar.c"

/**
 * print_chessboard - prints chess board
 * @a: array
 * Return: 0(success)
 */

void print_chessboard(char (*a)[8])
{
int c, b;

for (c = 0; c < 8; c++)
{
	for (b = 0; b < 8; b++)
		_putchar(a[c][b]);
_putchar('\n');
}
}