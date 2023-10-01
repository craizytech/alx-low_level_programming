#include <stdio.h>

/**
 * main - prints the name of the argv[0]
 * @argc: arguments count
 * @argv: array of arguments passed into the main function
 *
 * Return: 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
