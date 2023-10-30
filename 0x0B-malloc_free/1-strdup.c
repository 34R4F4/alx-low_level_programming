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

	m = malloc(i * sizeof(char) + 1);

	if ( m == 0)
	{
		return (NULL);
	}
	else
	{
		while (*str)
		{
			*m = *str;
			m++;
			str++;
		}
	}
	return (m);
}	
