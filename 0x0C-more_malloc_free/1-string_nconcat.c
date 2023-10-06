#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: first number of bytes from s2
 *
 * Return: pointer to the new mem location that has new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	char *ptr;

	while(s1[i])
		i++;

	ptr = malloc(i + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
