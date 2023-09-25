#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char a[];
	int i = 0;
	int y = 0;

	while (*(s + i) != 0)
	{
		*(a + 0) = *(s + i);
		i++;
	}
	while (i >= 0)
	{
		*(s + i) = *(s + 0);
		i--;
		y++;
	}
	*(s + (y + 1)) = '\0';
}

