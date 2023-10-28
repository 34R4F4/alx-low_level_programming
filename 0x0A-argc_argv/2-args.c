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
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
