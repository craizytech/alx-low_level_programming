#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i ++)
		putchar(i + '0');
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
