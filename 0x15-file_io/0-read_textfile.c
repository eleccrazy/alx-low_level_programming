#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: The name of the file.
 * @letters: The number of letters the program should read and print
 *
 * Return: 0, if the file cannot be read or opened, or if file name
 * is null, or if write fails or does not write the expected amount
 * of bytes, otherwise it returns the the actual number of letters it
 * could read and print
 *
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t on, wr, rd;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	on = open(filename, O_RDONLY);
	rd = read(on, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (on == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);

	close(on);

	return (wr);
}
