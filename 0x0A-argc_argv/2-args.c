#include <stdio.h>

/**
 * main - prints all the args it recieves including the first one
 * @argc: arguments counter
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);
	return (0);
}
