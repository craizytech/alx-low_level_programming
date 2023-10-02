#include <stdio.h>

/**
 * main - multiplies 2 numbers 
 * @argc: argument counter
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%d\n", argv[1] * argv[2]);
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
