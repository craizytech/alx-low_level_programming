#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring.
 * @s: string to be compared against
 * @accept: the string to be compared against s
 *
 * Return: the length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				sum++;
				break;
			}
			if (accept[j] == '\0')
				break;
		}
	}
	return (sum);
}
