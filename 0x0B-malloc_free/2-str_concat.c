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
void emps(char *dst, char *src);

char *str_concat(char *s1, char *s2)
{
	int l1 = len(s1);
	int l2 = len(s2);
	int l = l1 + l2;
	int i = 0;
	char *text;

	if (s1 == NULL || l1 == 0)
	{
		text = malloc(l2 * sizeof(char));
		emps(text, s2);
		return (text);
	}
	if (s2 == NULL || l2 == 0)
	{
		text = malloc(l1 * sizeof(char));
		emps(text, s1);
		return (text);
	}

	text = malloc(l * sizeof(char) + 3);

	if (text == 0)
		return (0);

	for (i = 0; i <= l; i++)
	{
		if (i < l1)
			text[i] = s1[i];
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

/**
 * emps - f
 * @dst: 1
 * @src: 2
 * Return: r
 */

void emps(char *dst, char *src)
{
	int i = 0;
	int l = len(src);

	while (i <= l)
	{
		dst[i] = src[i];
		i++;
	}
}
