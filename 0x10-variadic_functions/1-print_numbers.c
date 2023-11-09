#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - check the code
 * @n: args no.
 * @separator: ", "
 * @...: etc
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", va_arg(ptr, int));

		if (i == (n - 1))
		{
			if (separator)
				printf("%s", separator);

			printf("%d\n", va_arg(ptr, int));
		}
		if (i > 0 && i < n)
		{
		if (!separator)
		{
			printf("%d", va_arg(ptr, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(ptr, int));
		}
		}

	}
	va_end(ptr);
}
