#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the array of strings
 * @c: the character to be located
 *
 * Return: pointer to the character's location
 */
char *_strchr(char *s, char c)
{
	unsigned int n = 0;
	unsigned int i = 0;

	while (s[n])
		n++;

	for (i = 0; i < n; i++)
	{
		if (s[i] == c)
			return ((s + i));
		break;
	}
	return (NULL);
}
