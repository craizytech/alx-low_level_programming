#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int len = 0, index, factor, sum = 1;

	if (b == NULL)
		return (NULL);

	while(*b)
		len++;

	for (index = 0; index < len - 1; index++)
	{
		if (b[index] != '0' || b[index] != '1')
			return (NULL);
		if (b[index] == '1')
		{
			for (factor = index; factor > 0; factor--)
				sum *= 2;
		}
	}
	return (sum);
}
