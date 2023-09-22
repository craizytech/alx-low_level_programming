#include <stdio.h>

/**
 * main - prints the sum of fib num of values not exceeding 4M
 *
 * Return: 0 on success
 */
int main(void)
{
	int num1, num2, num3, sum;
	
	num1 = 1;
	num2 = 2;
	sum = 2;

	while (num2 <= 4000000)
	{
		num3 = num1 + num2;

		if (num3 % 2 == 0)
			sum += num3;
		num1 = num2;
		num2 = num3;
	}
	printf("%lld\n", sum);
	return (0);
}
