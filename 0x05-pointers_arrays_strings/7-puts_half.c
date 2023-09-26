#include "main.h"

/**
 * puts_half - prints half of a line
 * @str: the string
 */
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i))
		i++;
	if (i % 2 != 0)
		i = (i - 1) / 2;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
