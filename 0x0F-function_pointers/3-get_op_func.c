#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects correct function to perform users operation
 * @s: s is the operator passed as an argument to the program
 * @a: first arg
 * @b: 2nd arg
 * Return: pointer to the func that corresponds to the operator else NULL
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_div},
		{NULL, NULL}
	};
	int i = 0;

	if (s == NULL)
		return (NULL);

	while (ops[i].op != NULL && ops[i].op != *s)
		i++;

	return (ops[i].f);
}
