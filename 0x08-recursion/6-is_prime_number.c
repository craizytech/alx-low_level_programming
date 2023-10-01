#include "main.h"

int is_div(n, div);
/**
 * is_prime_number - function that checks if n is a prime number
 * @n: the number
 *
 * Return: 1 if n is a primenumber otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_div(n, 2));
}

/**
 * is_div - function that checks for divisibility
 * @n: number to be checked
 * @div: number to divide n with starts at 2
 *
 * Return: 1 if it checks to the sqrt and it doesnt find a divisor
 * 0 if it finds a divisor meaning n is not a prime number
 */
int is_div(n, div)
{
	if ((div * div) > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_div(n, div + 1));
}
