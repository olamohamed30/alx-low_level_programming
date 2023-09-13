#include "3-calc.h"
#include <string.h>

/**
 *  * get_op_func - selects the correct fun fot op
 *   * @s: operator passed as arg
 *    * Return: point that corresponds to the op
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
	int in = 0;

	while (ops[in].op != NULL)
	{
		if (strcmp(s, ops[in].op) == 0)
			return (ops[in].f);
		in++;
	}
	return (NULL);
}
