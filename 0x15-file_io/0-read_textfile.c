#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - Rds a txt file and prnts to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	char *buffer = malloc((letters + 1) * sizeof(char));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	ssize_t bytesRead = read(fd, buffer, letters);

	if (bytesRead <= 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[bytesRead] = '\0';
	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(fd);

	if (bytesWritten != bytesRead)
		return (0);
	else
		return (bytesRead);
}
