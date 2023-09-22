#include "main.h"

/**
 * _isdigit - checks if c is a num btwn 0 and 9
 * @c: the number to be checked
 *
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
