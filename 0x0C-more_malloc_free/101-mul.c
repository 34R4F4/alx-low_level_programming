#include "main.h"

/**
 * _puts - mzain
 * @s: 1
 * Return: r
 */
void _puts(char *s)
{
	int i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * _atoi - mzain
 * @s: 1
 * Return: r
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned long int res, n1, i;

	for (n1 = 0; !(s[n1] >= 48 && s[n1] <= 57); n1++)
	{
		if (s[n1] == '-')
		{
			x *= -1;
		}
	}

	for (i = n1; s[i] >= 48 && s[i] <= 57; i++)
	{
		res *= 10;
		res += (s[i] - 48);
	}

	return (x * res);
}

/**
 * main - mzain
 * @argc: 1
 * @argv: 2
 * Return: r
 */

int main(int argc, char *argv[])
{
(void)argc;

if (argc !=3)
{
	_puts("Error ");
	exit(98);
}
print_int(_atoi(argv[1]) * atoi(argv[2]));
_putchar('\n');

return (0);

}
