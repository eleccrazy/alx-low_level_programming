#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the file.
 *
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: -1 on fialure, or if filename is NULL, or -1 if the file doesn't
 * exist, otherwise it returns 1 on success and if the file exists.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int on, wr, count = 0, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[i]; i++)
			count++;
	}

	on = open(filename, O_WRONLY | O_APPEND);
	wr = write(on, text_content, count);

	if (wr == -1 || on == -1)
		return (-1);

	close(on);

	return (1);
}
