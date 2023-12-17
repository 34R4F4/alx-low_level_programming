#include "main.h"

/**
 * _prime_guess - f
 * @n: 1
 * @guess: 2
 * Return: r
 */
int _prime_guess(int n, int guess)
{
	if (n % guess == 0)
		return (1);
	else if (guess > n)
		return (0);
	else
		return (_prime_guess(n, guess + 1));
}

/**
 * is_prime_number - f
 * @n: 1
 * Return: r
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (_prime_guess(n, 2));
}
