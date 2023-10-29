#include "main.h"

/**
 * _print_rev_recursion - function print string using recursion
 *
 * @s : the string to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_puts_recursion(s + 1);
		 _putchar(*s);
	}
}
