#include "main.h"

/**
 * _strpbrk - searhes the string for any set of bytes
 * @s: string that we check the occurences of accept
 * @accept: string 
 *
 * Return: pointer to the first occurence of  a character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				return s;
			}
		}
		if (accept[i] == s[j])
			break;
	}
	return ('\0');
}
