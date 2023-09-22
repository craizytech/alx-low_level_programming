#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
	int i, num1, num2, num3;

	num1 = 1;
	num2 = 2;

	for (i = 0; i < 50; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%d", num3);
		if (i < 50)
			printf(", ");
	}
	return (0);
}
