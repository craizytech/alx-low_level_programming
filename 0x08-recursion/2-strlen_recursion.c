#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		sum += 1;
	}
	return (sum);
}
