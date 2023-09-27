#include "main.h"

/**
 * string_toupper - changes all lc letters of a string to uupercase
 * @str: pointer to the string
 *
 * Return: pointer
 */
char *string_touppper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
