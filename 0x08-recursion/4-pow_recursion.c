#include "main.h"
/**
 * _pow_recursion - f
 * @x: 1
 * @y: 2
 * Return: r
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
