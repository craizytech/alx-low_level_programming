#include "main.h"

/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: num
 *
 * Return: result or -1 if num does not have a natural squareroot
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}

/**
 * find_sqrt - Finds the natural sqrt of num
 * @num: the number to find the squareroot of.
 * @root: the root to be tested
 *
 * Return: sqrt: if num has a natural sqrt else -1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
