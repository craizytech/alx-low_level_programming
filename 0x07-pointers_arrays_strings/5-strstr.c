#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack : larger string
 * @needle: substring
 *
 * Return: pointer to the begging of the substring needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, f;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		f = i;
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] != needle[j])
			{
				f = -1;
				break;
			}
			i++;
		}

		if (needle[j] == '\0')
		{
			return &haystack[f];
		}
	}
	return '\0';
}
				
