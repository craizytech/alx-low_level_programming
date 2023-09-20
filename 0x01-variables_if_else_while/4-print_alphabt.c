#include <stdio.h>

/**
 * main - prints the alphabet lowercase except letters q and e
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		while (i != 'q' || i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
