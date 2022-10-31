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
	int fd;
	char buf[1024];

	fd = open(filename, O_RDONLY, 0400);
	if (fd == -1 || filename == NULL)
		return (0);
	count = read(fd, buf, letters);
	buf[letters] = '\0';
	printf("%s", buf);
	close(fd);
	return (count);
}
