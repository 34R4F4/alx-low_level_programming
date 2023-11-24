#include "main.h"

/**
 * binary_binary - f
 * @n: 1
 * Return: i
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary(n >> 1);
	_putchar(n & 1 ? '1' : '0');
	return;
}
