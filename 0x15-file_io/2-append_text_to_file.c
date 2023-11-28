#include "main.h"

/**
 * slen - f
 * @s: 1
 * Return: len
 */
int slen(char *s)
{
	int l = 0;

	if (!s)
		return (l);
	while (*s++)
		l++;
	return (l);
}

/**
 * append_text_to_file - f
 * @filename: 1
 * @text_content: 2
 * Return: 1/-1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo;
	ssize_t text = 0;
	ssize_t len = slen(text_content);

	if (!filename)
		return (-1);

	fo = open(filename, O_WRONLY | O_APPEND);
	if (fo == -1)
		return (-1);

	if (len)
		text = write(fo, text_content, len);

	close(fo);
	return (text == len ? 1 : -1);
}
