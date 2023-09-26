#include "main.h"

/**
 * _atoi - converts numbers in a string to integers
 * @s: array of characters (string)
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int num = 0;
	int sum = 0;

	while (s[i])
		i++;
	i--;
	while (j <= i)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			num = (int)s[j];
			sum = sum + num;
		}
		j++;
	}
		if ( s[j-1] == '-')
			sum -= sum;
	return (sum);
}
