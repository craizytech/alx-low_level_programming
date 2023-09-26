#include "main.h"

/**
 * function revereses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, y, tmp;

	while (*(s + i))
		i++;
	i -= i;

	for (y = 0; y < i; y++)
	{
		while (i >= 0)
		{
			tmp = s[i];
			s[i] = s[y];
			s[y] = tmp;
			i--;
		}
	}
}
