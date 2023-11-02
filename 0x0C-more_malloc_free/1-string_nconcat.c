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
	unsigned int l2 = len(s2);
	int x = 0;
	unsigned int i = 0;

	if ((n > l2) || (s2 == NULL))
	{
		n = l2;
		text = malloc(l1 + l2 + 1);
	}
	else
	{
		text = malloc(l1 + n + 1);
	}

	if (text == 0)
	{

		return (NULL);
	}
	else
	{
		for (x = 0; x <= l1; x++)
		{
			text[x] = s1[x];
		}
		for (i = 0; i <=  n; i++, x++)
		{
			text[x] = s2[i];
		}
		text[x] = '\0';

		return (text);
	}
}

/**
 * len - f
 * @s: 1
 * Return: r
 */

int len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
