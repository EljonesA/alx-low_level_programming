#include "main.h"

int safe_close(int);
/**
 * main - copies files
 * @argc: arguerment count
 * @argv: arguemrnt vector
 *
 * Return: 1(success), exit(failure).
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int b_read = 0, _EOF = 1, from_fd = -1, to_fd = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_close(from_fd);
		exit(98);
	}

	while (_EOF)
	{
		_EOF = read(from_fd, buffer, 1024);
		if (_EOF < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			safe_close(from_fd);
			safe_close(to_fd);
			exit(98);
		}
		else if (_EOF == 0)
			break;
		b_read += _EOF;
		error = write(to_fd, buffer, _EOF);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			safe_close(from_fd);
			safe_close(to_fd);
			exit(99);
		}
	}
	error = safe_close(to_fd);
	if (error < 0)
	{
		safe_close(from_fd);
		exit(100);
	}
	error = safe_close(from_fd);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * safe_close - closes a file, prints error msg
 * @Description: description for closed file
 * Return: 1(success), -1(failure).
 */

int safe_close(int Description)
{
	int error;

	error = close(Description);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", Description);
	return (error);
}
