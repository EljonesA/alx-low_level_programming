#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: pointer to the file to be read
 * @letters: number of letters that should be read & printed
 *
 * Return: actual number of letters read & printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[letters];
	ssize_t nread;
	ssize_t nwritten;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		close(fd);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buffer, letters);
	if ((nwritten == -1) | (nwritten != nread))
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (nwritten);
}
