#include "calc.h"

/**
  * get_op_func - function to perform the operation.
  * @s: pointer for choose of operations.
  *
  * Return: Always (NULL) for failuer.
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (*s == *(ops + i)->op)
		{
			return (*(ops + i)->op);
			i++;
		}
	}
	return (NULL);
}
