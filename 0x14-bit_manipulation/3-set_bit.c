#include "main.h"

/**
 * set_bit - f
 * @n: 1
 * @index: 2
 * Return: i
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	n |= (1 << index);
	return (n);
}
