#include "main.h"

/**
 * rev_string - function revereses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int y, tmp;
	int i = 0;

	while (*(s + i))
		i++;
	i--;

	for (y = 0; y < i; y++)
	{
		tmp = s[i];
		s[i] = s[y];
		s[y] = tmp;
		i--;
	}
}
