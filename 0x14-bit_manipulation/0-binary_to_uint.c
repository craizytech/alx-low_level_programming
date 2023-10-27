#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int len = 0, index, factor;
	unsigned int sum = 1;

	if (b == NULL)
		return (0);

	while(*b)
		len++;

	for (index = 0; index < len -1; index++)
	{
		if (b[index] != '0' || b[index] != '1')
			return (0);
		if (b[index] == '1')
		{
			for (factor = index; factor > 0; factor--)
				sum *= 2;
		}
	}
	return (sum);
}
