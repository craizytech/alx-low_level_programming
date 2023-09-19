#include <stdio.h>

/**
 * main - prints a string without usinf any funcions listed in NAME sec
 * 	of the man(3) printf or man(3) puts
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (1);
}
