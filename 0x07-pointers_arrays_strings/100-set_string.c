#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: string to overwrite
 */
void set_string(char **s, char *to)
{
	int i = 0;

	while (*(to + i))
	{
		**(s + i) = to[i];
		i++;
	}
	**(s + i) = '\0';
}

