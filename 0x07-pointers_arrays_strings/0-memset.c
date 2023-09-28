#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: the memory area to be filled
 * @b: the constant byte
 * @n: first number of bytes of the memory
 *
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
