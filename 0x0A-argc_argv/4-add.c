#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * @argc : 1
 * @argv : 2
 *
 * Return: return
 */

int main(int argc, char *argv[])
{
	int result = 0;
	char c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
