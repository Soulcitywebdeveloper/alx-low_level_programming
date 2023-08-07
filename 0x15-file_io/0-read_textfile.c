#include "main.h"

/**
 * read_textfile - Rds a txt file and prnts to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nd, nr;
	char *b;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	nd = read(f, b, letters);
	nr = write(STDOUT_FILENO, b, nd);

	close(f);

	free(b);

	return (nr);
}
