#include <stdio.h>
#include <stdlib.>

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
	if (argc == 2)
	{
		int i, least = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (money >= cents[i])
		{
			least += money / cents[i];
			money = money % cents[i];

			if (money % cents[i] == 0)
			

	return (0);
}
