#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULl)
		return;
	f(name);
}
