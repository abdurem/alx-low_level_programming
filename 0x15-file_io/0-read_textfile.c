#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the text file
 * @letters: how many chars from the text file will be printed
 *
 * Return: actual numbers of letters it could read and print
 *		   0 if filename is NULL or write fails or does not write
 *		   the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	char *buffer;
	int x, i, bytes_printed = 0;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY, letters);

	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	read(fd, buffer, letters);
	buffer[letters - 1] = 0;
	close(fd);

	for (i = 0; buffer[i] != 0; i++)
	{
		x = _putchar(buffer[i]);

		if (x == -1)
		{
			close(fd);
			return (0);
		}

		bytes_printed++;
	}

	free(buffer);
	return (bytes_printed);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
