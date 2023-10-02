#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds 2 numbers
 * @argc: arguments counter
 * @argv: arguments array
 *
 * Return: 1 if numbers contains non numbers 0 otherwise
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);

	return (0);
}
