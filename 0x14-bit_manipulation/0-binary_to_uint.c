#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string
 * Return: base 10 int | 0 on failure
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, weight = 1, string_length;
	int i;

	if (b == NULL)
		return (0);

	string_length = strlen(b);
	for (i = string_length - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			decimal += 0;
			weight *= 2;
		}
		else if (b[i] == '1')
		{
			decimal += weight;
			weight *= 2;
		}
		else
			return (0);
	}

	return (decimal);
}
