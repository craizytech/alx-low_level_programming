#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
