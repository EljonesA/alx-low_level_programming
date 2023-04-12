#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: file to append to
 * @text_content: text to append
 *
 * Return: 1(success), -1(failure).
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	char *counter_ptr = text_content;
	int nwritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (*counter_ptr != '\0')
	{
		len++;
		counter_ptr++;
	}

	nwritten = write(fd, text_content, len);
	if (nwritten < 0)
		return (-1);

	close(fd);
	return (1);
}
