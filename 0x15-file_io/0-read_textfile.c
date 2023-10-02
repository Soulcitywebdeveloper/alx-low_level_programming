#include "main.h"

/**
 * read_textfile - reads a file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. If fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t b, c;
	char *buf;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	b = read(a, buf, letters);
	c = write(STDOUT_FILENO, buf, b);

	close(a);

	free(buf);

	return (c);
}
