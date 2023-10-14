#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: strings separator
 * @n: number of srguments
 * @...: indefinate number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	const char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings,const char *);

		printf("%s", str);
		if (i != (n -1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
