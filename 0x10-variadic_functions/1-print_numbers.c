#include "variadic_pointers"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between the numbrs
 * @n: number of arguments to be passed
 * @...: indefinate number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	int i;

	va_start(list, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (s != NULL)
			printf("%s", *separator);
		else
			printf(" ");
	}
	printf("\n");
}
