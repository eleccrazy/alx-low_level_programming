#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: The name of the file to be create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: -1, on fail or if filename is NULL, otherwise it
 * returns 1.
 *
 */

int create_file(const char *filename, char *text_content)
{
	int on, wr, count = 0, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[i]; i++)
			count++;
	}

	on = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(on, text_content, count);

	if (on == -1 || wr == -1)
		return (-1);

	close(on);

	return (1);
}
