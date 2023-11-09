#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - f
 * @argc: 1
 * @argv: 2
 * Rrturn: r
 */

int main(int argc, char **argv)
{
	char *f = (char *)main;
	int n;

	if (argc != 2)
		printf("Error\n"), exit(1);

	n = atoi(argv[1]);
	if (n < 0)
		printf("Error\n"), exit(2);

	while (n--)
		printf("%02hhx%s", *f++, n ? " " : "\n");

	return (0);
}
