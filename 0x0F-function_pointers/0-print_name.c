#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f = print;
	f(*name);
}

/**
 * print - prints the actual string
 * @name - name to be printed
 */
void print(*name)
{
	printf("%s\n", name);
}
