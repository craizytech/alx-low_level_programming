#include <stdio.h>

/**
 * main - prints combination of 2 digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if( i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				
				if( i == 8 && j == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
