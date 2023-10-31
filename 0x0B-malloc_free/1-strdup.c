#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 *
 * @str: 1
 *
 * Return: return
 */

char *_strdup(char *str)
{
	int l = 0;
	int i = 0;
	char *text;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		str++;
		l++;
	}

	text = malloc(l * sizeof(char) + 1);

	if (text == 0)
	{
		return (NULL);
	}
	else
	{
		while (*str)
		{
			text[i] = str[i];
			str++;
			i++;
		}
	return (text);
	}
}
