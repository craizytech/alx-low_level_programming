#include "main.h"

unsigen int binary_to_uint(const char *b)
{
	int len = 0, index, factor;
	unsigned int sum = 1;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' || b[len] != '1')
			return (0);
		len++;
	}

	for (index = len - 1 ; index >= 0; index--)
	{
		if (b[index] = '1')
			sum = (b[index] - '0') * factor;
		factor *= 2;
	}
	return (sum);
}
