#include "variadic_functions.h"

/**
 * check - f
 * @s: 1
 *
 * Return: str
 */
char *check(char *s)
{
	if (s)
	{
		return (s);
	}
	else
	{
		return ("nil");
	}
}

/**
 * print_strings - check the code
 * @n: args no.
 * @separator: ", "
 * @...: etc
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%s", check(va_arg(ptr, char *)));
		}
		else
		{
			if (separator)
				printf("%s", separator);
			printf("%s", check(va_arg(ptr, char *)));
		}
	}
	printf("\n");
	va_end(ptr);
}
