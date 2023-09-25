#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;
	int b = 0;
	
	while (*(str + i) && (*(str + b) != '\0'))
	{
		_putchar(*(str + i));
		i += 2;
		b =i - 1;
	}
	_putchar('\n');
}
