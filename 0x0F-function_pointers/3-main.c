#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes in user arguments calls relevant functions
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: 0 on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *operator;
	int arg1 = atoi(argv[1]);
	int arg2 = atoi(argv[3]);

	operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	if ((operator == "/" || operator == "%") && arg2 == 0)
	{
		printf("Error\n");
		exit (100);
	}

	printf("%d\n", get_op_func(operator)(arg1, arg2));

	return (0);
}
