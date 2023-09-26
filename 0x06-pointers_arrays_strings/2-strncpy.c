#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @str: source
 * @n: number of bytes to be printed
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0;
	int dest_len = 0;

	while (src[src_len])
		src_len++;
	while ((dest_len < src_len) && (dest_len <= n))
	{
		dest[dest_len] = src[dest_len];
		dest_len++;
		src_len--;
	}
	while (dest_len < n)
	{
		dest[dest_len] = '\0';
		dest_len++;
	}
	return (dest);
}
