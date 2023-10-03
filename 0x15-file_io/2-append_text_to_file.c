#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int success = -1;
	size_t text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}

	file = fopen(filename, "a");
	if (file != NULL)
	{
		if (text_content == NULL || fprintf(file, "%s", text_content) >= 0)
			success = 1;

		fclose(file);
	}

	return (success);
}
