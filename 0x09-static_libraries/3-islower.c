#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character passed to be cheked
 *
 * Return: 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
