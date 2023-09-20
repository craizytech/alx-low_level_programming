#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: rand number
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		n *= -1;
	lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
