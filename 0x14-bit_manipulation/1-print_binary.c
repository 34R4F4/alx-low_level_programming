#include "main.h"

/**
 * print_binary - f
 * @n: 1
 * Return: i
 */
void print_binary(unsigned long int n)
{
	int p = 0;
	int b = sizeof(n) * 8;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			p++;
		}
		else if (p)
			_putchar('0');
	}
	if (!p)
		_putchar('0');
}
