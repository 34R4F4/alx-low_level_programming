#include <stdlib.h>
#include "main.h"

int len(*str);

/**
 * argstostr - function
 * @ac: 1
 * @av: 2
 * Return: return
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int x;
	char *text;

	if (av > 0 && ac > 0 && av != NULL)
	{
		text = malloc(ac * sizeof(char) + 1);
		for (i = 0; i <= ac; i++)
		{
			x = len(av[i]);
			for (j = 0; j <= x; j++)
			{
				text[i][j] = av[i][j];
			}
			text[i][j] = '\n';
		}
		return (text);
	}
	else
	{
		return (NULL);
	}
}

/**
 * len - f
 * @str: 1
 * Return: i
 */

int len(*str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;
	return (i);
}
