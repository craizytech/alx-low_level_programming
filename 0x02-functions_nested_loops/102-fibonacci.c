#include <stdio.h>

/**
 * main - program prints first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long long int num1, num2, num3, i;

	num1 = 1;
	num2 = 2;

	printf("1, 2, ");

	for (i = 0; i < 48; i++)
	{
		num3 = num1 + num2;
		printf("%lld", num3);

		num1 = num2;
		num2 = num3;
		if (i < 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
