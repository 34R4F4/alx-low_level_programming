#include "main.h"

/**
 * clear_bit - f
 * @n: 1
 * @index: 2
 * Return: i
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1 << index)
		*n ^= (1 << index);
	return (1);
}
