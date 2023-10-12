#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print - prints the name
 * @name: name
 */
void print(char *name)
{
	print("%s\n", name);
}
