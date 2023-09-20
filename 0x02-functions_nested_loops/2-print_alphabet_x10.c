#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i, a;

	for (a = 0; a < 10; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
