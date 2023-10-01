#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: difference btwn the two values
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res = 0;

	if (s1[i] & s2[i])
	{
		while ((s1[i] == s2[i]) && (s1[i] && s2[i]))
			i++;
		res = s1[i] - s2[i];
	}
	return (res);
}
