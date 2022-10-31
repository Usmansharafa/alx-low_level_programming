#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of file
 * @text_content: String to be appended to file
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t wcount, len_count;

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1 || filename == NULL)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		len_count = len;
		wcount = write(fd, text_content, len);
		if (wcount == -1 || wcount != len_count)
			return (-1);
	}
	close(fd);
	return (1);
}
