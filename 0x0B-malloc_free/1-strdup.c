#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 *
 * @str: 1
 *
 * Return: return
 */

int len(char *str);

char *_strdup(char *str)
{
	int l = 0;
	int i = 0;
	char *text;

	if (str == NULL)
	{
		return (NULL);
	}

	l = len(str);

	text = malloc(l * sizeof(char) + 2);

	if (text == 0)
	{
		return (NULL);
	}
	else
	{
		while (i <= l)
		{
			text[i] = str[i];
			i++;
		}
	return (text);
	}
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
