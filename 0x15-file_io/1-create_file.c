#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_len;

	if (filename == NULL)
		return (-1);

    
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1); /* Return -1 on failure to open file */

	if (text_content != NULL)
	{

	while (text_content[len])
		len++;


 	write_len = write(fd, text_content, len);
	if (write_len != len)
	{
		close(fd);
		return (-1);
        }
	}

	close(fd);

	return (1);
}
