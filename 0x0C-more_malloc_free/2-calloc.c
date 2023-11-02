#include "main.h"

/**
 * setm - function
 * @s: 1
 * @c: 2
 * @i: 3
 * Return: return
 */

char *setm(char *s, char c, unsigned int i)
{
	char *ptr = s;

	while (i--)
	{
		*s++ = c;
	}
	return (ptr);
}

/**
 * _calloc - function
 * @nmemb: 1
 * @size: 2
 * Return: return
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	setm(m, 0, sizeof(int) * nmemb);

	return (m);

}
