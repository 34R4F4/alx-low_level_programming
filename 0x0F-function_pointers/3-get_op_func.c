#include "3-calc.h"

/**
 * get_op_func - f
 * @s: 1
 * Return: r
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
int i = 0;

while (i < 5)
{
	if (strcmp(s, ops[i][0]) == 0)
		return (ops[i][1]);
	i++;
}

return (NULL);

}
