#include"main.h"

/**
 * _pow_recursion - print power x to power y
 * @x: input
 * @y: input
 * Return: 0 (successs)
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
