#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output
 * @filename: File to be read from
 * @letters: Number of letters to read and print
 * Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	ssize_t i;
	int fd;
	char buf[1024];

	fd = open(filename, O_RDONLY, 0400);
	if (fd == -1 || filename == NULL)
		return (0);
	count = read(fd, buf, letters);
	if (count == -1)
		return (0);
	buf[count] = '\0';
	for (i = 0; buf[i] != '\0'; i++)
		_putchar(buf[i]);
	close(fd);
	return (count);
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
