#include "main.h"
#include <stdlib.h>

unsigned int len(char *s);

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
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int x = 0;

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n > l2)
		n = l2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	text = malloc(sizeof(char) * (l1 + n + 1));

	if (text == 0)
	{

		return (NULL);
	}
	else
	{
		for (x = 0; x <= (l1 + n); x++)
		{
			if (x <= l1)
			{
				text[x] = s1[x];
			}

			if (x > l1 && x <= n)
			{
				text[x] = s2[x - l1 - 1];
			}
		}

		text[l1 + n + 1] = '\0';

		return (text);
	}
}
