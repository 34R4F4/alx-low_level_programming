#include "main.h"

/**
 * get_bit - f
 * @n: 1
 * @index: 2
 * Return: i
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	n >>= index;
	n &= 1;
	return (n);
}
