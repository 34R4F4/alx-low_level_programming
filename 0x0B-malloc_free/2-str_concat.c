#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function
 *
 * @str: 1
 *
 * Return: return
 */

int len(char *str);

char *str_concat(char *s1, char *s2)
{
	int l1 = len(s1);
	int l2 = len(s2);
	int l = l1 + l2;
	int i = 0;
	char *text;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	text = malloc(l * sizeof(char) + 1);

	if (text == 0)
		return (0);

	for (i = 0; i <= l; i++)
	{
		if (i < l1)
			text[i] = s1[i];
		else if (i == l1)
			text[l1] = s2[0];
		else
			text[i] = s2[i - l1];
	}

	text[i] = '\0';

	return (text);
}

/**
 * len - f
 * @str: 1
 * Return: r
 */

int len(char *str)
{
	int l = 0;

	while (*str)
	{
		str++;
		l++;
	}
	l--;
	return (l);
}
