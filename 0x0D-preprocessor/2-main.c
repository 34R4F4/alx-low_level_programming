#include <stdlib.h>

/**
 * main -f
 * Return: 0
 */

int main(void)
{
	char *path = _FILE_;

	for (int i = 0; path[i] != '\0'; i++)
	{
		_putchar(path[i]);
	}
	return (0);
}
