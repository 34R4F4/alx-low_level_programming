#include "main.h"

/**
 * power2 - f
 * @n: 1
 * Return: p
 */
unsigned int power2(unsigned int n)
{
	if (n == 0)
		return (1);
	else
		return (2 * power2(n - 1));
}

/*
 * binary_to_uint - f
 * @b: 1
 * Return: i
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int i = 0;

	if  (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' || *b != '1')
			return (0);

		n += (2 * power2(i)) * (*b);
		i++;
		b++;
	}
	return (n);
}
