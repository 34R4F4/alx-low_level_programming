#include "main.h"

/**
 * slen - f
 * @s: 1
 * Return: len
 */
int slen(char *s)
{
	int l = 0;

	while (*s++)
		l++;

	return (l);
}

/**
 * create_file - f
 * @create_file: 1
 * @text_content: 2
 * Return: 1/-1
 */
int create_file(const char *filename, char *text_content)
{
	int fo;
	ssize_t text = 0;
	ssize_t len = slen(text_content);

	if (!filename)
		return (-1);

	fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fo == -1)
		return (-1);

	if (len)
		text = write(fo, text_content, len);

	close(fo);
	return (text == len ? 1 : -1);
}
