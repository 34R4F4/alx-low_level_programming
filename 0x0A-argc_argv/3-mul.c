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
	int result;

	if (argc == 3)
	{
		result =atoi( argv[1]) * atoi(argv[2]);
		printf("%d\n", result);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
