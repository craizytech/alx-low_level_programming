#include <stdio.h>

/**
 * main - prints sizes of various variable types available in x
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)", (int)sizeof(a));
	printf("Size of an int: %d byte(s)", (int)sizeof(b));
	printf("Size of a long int: %d byte(s)", (int)sizeof(c));
	printf("Size of a long long int: %d byte(s)" (int)sizeof(d));
	printf("Size of a float: %d byte(s)", (int)sizeof(e));
	return (0);
}
