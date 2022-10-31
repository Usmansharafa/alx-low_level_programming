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
	size_t len;
	ssize_t wcount, lencount;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1 || filename == NULL)
		return (-1);
	for (len = 0; text_content[len] != '\0'; len++)
		;
	lencount = len;

	wcount = write(fd, text_content, len);
	if (wcount == -1 || wcount != lencount)
		return (-1);
	
	close(fd);
	return (1);
}
