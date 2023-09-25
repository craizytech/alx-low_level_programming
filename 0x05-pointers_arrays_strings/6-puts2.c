#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(i);
		i += 2;
	}
}
