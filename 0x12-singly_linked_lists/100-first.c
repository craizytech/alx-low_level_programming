#include "lists.h"

/**
 * print_first - prints a given statement before the main funtion
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
