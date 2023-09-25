#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
}
