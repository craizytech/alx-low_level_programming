#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @src: src string
 * @n: number of bytes to be copied
 *
 * Return: pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
