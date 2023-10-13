#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the variables passed on to a function
 * @n: number of arguments to be added
 * @...: undefined number of arguments
 * Return: the result of the addition
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, total = 0;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}
