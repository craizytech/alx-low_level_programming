#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: arguments counter
 * @argv: arguments vector
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += argv[i];
		}
		printf("%d\n", sum);
	}
	return (0);
}
