#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: arbitrary value
 *
 * Return: the result
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
