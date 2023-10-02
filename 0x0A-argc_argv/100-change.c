#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the change required to be given back in coins
 * @argc: arguments counter
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num = 0;

	if (arg != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 2)
	{
		int total = atoi(argv[1]);

		while (total >= 25)
		{
			total -= 25;
			num++;
		}
		while (total >= 10)
		{
			total -= 10;
			num++;
		}
		while (total >= 5)
		{
			total -= 5;
			num++;
		}
		while (total >= 2)
		{
			total -= 2;
			num++;
		}
		while (total >= 1)
		{
			total -= 1;
			num++;
		}
	}
	printf("%d\n", num);
	return (0)
}
