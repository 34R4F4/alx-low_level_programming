#include "main.h"

/**
 * _sqrt_guess - f
 * @n: 1
 * @guess: 2
 * Return: r
 */
int _sqrt_guess(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (_sqrt_guess(n, guess + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - f
 * @n: 1
 * Return: r
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	else
		return (_sqrt_guess(n, 0));
}
