#include "main.h"

/**
 * _isupper - checks if the character c is uppercase
 * @c: the char to be cheked
 *
 * Return: 1 if upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
