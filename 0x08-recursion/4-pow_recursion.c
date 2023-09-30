#include "main.h"

/**
 * _pow_recursion - prints the result of x raised to y
 * @x: base number
 * @y: power
 *
 * Return: result or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
