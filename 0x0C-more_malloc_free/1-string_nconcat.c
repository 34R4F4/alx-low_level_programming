#include "main.h"
#include <stdlib.h>

int len(char *s);

/**
 * string_nconcat - function
 * @s1: 1
 * @s2: 2
 * @n: 3
 * Return: return
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *text;
	int l1 = len(s1);
	int l2 = len(s2);

	if (n > l2 || s2 == NULL)
	{
		n = l2;
		text = malloc(l1 + l2 + 1);
	}

	if (m > 0)
	{

		return (text);
	}
	else
	{
		return (NULL);
	}
}

/**
 * len - f
 * @s: 1
 * Return: r
 */

int len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
