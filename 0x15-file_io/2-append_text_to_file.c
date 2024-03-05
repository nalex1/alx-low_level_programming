#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function
 * @filename: associated file
 * @text_content: content to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len, writter;
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	writter = write(fd, text_content, len);
	if (writter == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
