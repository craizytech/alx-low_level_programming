#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}
