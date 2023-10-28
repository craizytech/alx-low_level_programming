#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int len = 0, index, factor = 1;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (index = len - 1 ; index >= 0; index--)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		if (b[index] == '1')
			sum += factor;
		factor *= 2;
	}
	return (sum);
}
