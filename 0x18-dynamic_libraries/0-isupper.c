#include "main.h"

/**
 * _isupper - returns 1 if c is uc and 0 otherwise
 * @c: the character to be checked
 *
 * Return: 1 if c is uc and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
