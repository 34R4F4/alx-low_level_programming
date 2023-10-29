#include "main.h"

/**
 * _strlen_recursion - function return string length using recursion
 *
 * @s : the string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l += _strlen_recursion(s + 1) + 1;
	}
}
