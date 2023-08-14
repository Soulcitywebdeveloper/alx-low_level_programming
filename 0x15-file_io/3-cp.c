#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "main.h"

#define BUF_SIZE 1024

/**
 * main - check the code for ALX students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", "", 97);
	}
	else
	{
		int result = copy_file(argv[1], argv[2]);

		if (result == 98)
		{
			print_error("Error: Can't read from file ", argv[1], result);
		}
		else if (result == 99)
		{
			print_error("Error: Can't write to ", argv[2], result);
		}
		else if (result == 100)
		{
			print_error("Error: Can't close fd ", "", result);
		}
	}

	return (0);
}

/**
 * print_error - checks if files can be opened.
 * @msg: deplay
 * @file_name: name of the file
 * @code: read the code
 * Return: no return.
 */
void print_error(char *msg, char *file_name, int code)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, file_name);
	exit(code);
}

/**
 * copy_file - checks if files can be opened.
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Return: no return.
 */
int copy_file(char *file_from, char *file_to)
{
	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		return (98);
	}

	int fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);

	if (fd_to == -1)
	{
		close(fd_from);
		return (99);
	}

	char buffer[BUF_SIZE];
	ssize_t bytes_read;

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		ssize_t bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		return (98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		return (100);
	}

	return (0);
}
