#include <stdio.h>

/**
 * main - prints the number of arguments passed into the main function
 * @argc: counts the number of arguments including the prog name
 * @argv: array vector containing the args passed as strings
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
