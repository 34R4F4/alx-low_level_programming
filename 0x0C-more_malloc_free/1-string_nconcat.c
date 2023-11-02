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
	unsigned int l1;
	unsigned int l2;
	unsigned int x;
	unsigned int i;

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n > l2)
		n = l2;

	text = malloc(l1 + n + 1);

	if (text == NULL)
	{

		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		text[i] = s1[i];
	}

	for (x = 0; x < n; x++)
	{
		text[i] = s2[x];
		i++;
	}

	text[i] = '\0';

	return (text);

}
