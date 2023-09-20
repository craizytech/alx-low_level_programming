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

	lastdigit = n % 10;
	putchar(lastdigit + '0');
	return (lastdigit);
}
