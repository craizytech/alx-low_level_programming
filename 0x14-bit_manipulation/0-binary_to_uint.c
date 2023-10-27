#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int len = 0, index, factor;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while(b[len] != '\0')
		len++;

	for (index = 0; index < len; index++)
	{
		if (b[index] != '0' || b[index] != '1')
			return (0);

		if (b[index] == '1')
		{
			for (factor = index; factor < len - 1; factor++)
				sum (sum << 1) | 1;
		}
	}
	return (sum);
}
