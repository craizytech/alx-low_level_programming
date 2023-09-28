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
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
