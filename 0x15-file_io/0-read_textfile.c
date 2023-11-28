#include "main.h"

/**
 * read_textfile - f
 * @filename: 1
 * @letters: 2
 * Return: t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_state;
	char buf[R_BUF * 8];
	ssize_t re_turn;

	if (filename == NULL)
		return (0);
	if (!filename || !letters)
		return (0);

	f_state = open(filename, O_RDONLY);
	if (f_state == -1)
		return (0);

	re_turn = read(f_state, &buf[0], letters);
	re_turn = write(STDOUT_FILENO, &buf[0], re_turn);

	close(f_state);
	return (re_turn);
}
