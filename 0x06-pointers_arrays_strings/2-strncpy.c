#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @str: source
 * @n: number of bytes to be printed
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i])
		i++;
	while ((j <= i) && (j <= n))
	{
		dest[j] = src[j];
		j++;
		i--;
	}
	while (j <= n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

