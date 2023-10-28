#include <stdio.h>

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
	int c = 0;

	while (argc--)
	{
		printf("%s\n", argv[c]);
		c++;
	}

	return (0);
}
