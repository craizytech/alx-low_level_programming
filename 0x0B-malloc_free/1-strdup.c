#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string
 * @str: pointer to string
 *
 * Return: pointer to newly created array
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *p;

	while (*(str + i))
		i++;

	p = malloc(sizeof(char) * i);
	if (p == NULL)
	{
		return ('\0');
	}
	for (j = 0; j < i; j++)
		*(p + j) = *(str + j);
	free(p);
	return (p);
}
