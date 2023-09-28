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
	unsigned int i = 0;

	while(s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((s + i));
			break;
		}
		i++;
	}
	return (NULL);
}
