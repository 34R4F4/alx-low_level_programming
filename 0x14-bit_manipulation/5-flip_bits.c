#include "main.h"

/**
 * flip_bits - f
 * @n: 1
 * @m: 2
 * Return: i
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nxm = n ^ m;
	unsigned long int i = 0;

	while (nxm)
	{
		if (nxm & 1)
			i++;
		nxm = nxm >> 1;
	}

	return (i);
}
