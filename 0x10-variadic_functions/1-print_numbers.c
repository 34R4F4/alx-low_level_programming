#include "variadic_functions.h"

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
			printf("%d", va_arg(ptr, int));
		}
		else
		{
			if (separator)
				printf("%s", separator);
			printf("%d", va_arg(ptr, int));
		}
	}
	printf("\n");
	va_end(ptr);
}
