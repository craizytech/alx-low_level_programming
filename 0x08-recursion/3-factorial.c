#include "main.h"

/**
 * factorial - prints a factorial of a number
 * @n: number
 *
 * Return: the fact or 0 otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
