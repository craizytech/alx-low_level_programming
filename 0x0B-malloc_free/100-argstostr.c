#include <stdlib.h>
#include "main.h"

/**
 * argstostr - func that concatenates all the args of your prog
 * @ac: arguments counter
 * @av: double pointer to the array of arguments
 *
 * Return: NULL if it fails else return a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	ptr = malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[index++] = av[i][j];
		}
		ptr[index++] = '\n';
	}
	ptr[index] = '\0';

	return (ptr);
}
