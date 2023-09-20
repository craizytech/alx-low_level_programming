#include "main.h"

/**
 * _isalpha - returns 1 if c is a letter 0 otherwise
 * @c: character
 *
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
