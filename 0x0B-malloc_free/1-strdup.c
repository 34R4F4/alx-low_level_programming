#include "main.h"

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

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			text[i] = str[i];
		}
	return (m);
	}
}
