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
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);
	va_end(nums);

	return (sum);
}
