#include "main.h"

/**
 * create_file - function that creates a new file
 * @filename: newly created file name
 * @text_content: contents of the newly created file
 *
 * Return: 1(success), -1(failure).
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	char *counter_ptr = text_content; /* duplicate pointer to count len */
	int nwritten;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL) /* use empty string incase pointer is null */
		text_content = "";

	/* get text_content length */
	while (*counter_ptr != '\0')
	{
		len++;
		counter_ptr++;
	}

	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	nwritten = write(fd, text_content, len);
	if (nwritten < len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (-1);
}
