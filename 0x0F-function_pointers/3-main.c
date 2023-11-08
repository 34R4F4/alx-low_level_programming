#include "3-calc.h"

/**
 * main - f
 * @argc : 1
 * @argv: 2
 * Return: r
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int);
	int a, b;
	int result;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	
	op_func = get_op_func(argv[2]);

	if(!op_func)
		printf("Error\n"), exit(99);

	if ( b == 0 && (argv[2] == '/' || argv[2] == '%'))
		printf("Error\n"), exit(100);

	result = op_func(a, b);
	printf("%d\n", result)'
	return (0);
}
