#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of file to be created
 * @text_content: COntent to write into new file
 * Return: 1 on successelse -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char ch = '\n';
	size_t len;
	ssize_t wcount, lencount;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1 || filename == NULL)
		return (-1);
	for (len = 0; text_content[len] != '\0'; len++)
		;
	lencount = len;
	if (text_content == NULL)
	{
		wcount = write(fd, &ch, 1);
		if (wcount == -1)
			return (-1);
	}
	else
	{
		wcount = write(fd, text_content, len);
		if (wcount == -1 || wcount != lencount)
			return (-1);
	}
	return (1);
}
