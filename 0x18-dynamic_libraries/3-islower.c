#include "main.h"

/**
 * _islower - returns 1 if c is lc and 0 if uc
 * @c: character
 *
 * Return: 1 if lc and 0 if uc
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
