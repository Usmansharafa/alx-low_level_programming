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
	ssize_t rcount = 0, wcount = 0;
	int fd;
	char *buf = NULL;

	fd = open(filename, O_RDONLY, 0400);
	if (fd == -1 || filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	rcount = read(fd, buf, letters);
	if (rcount == -1)
		return (0);
	wcount = write(STDOUT_FILENO, buf, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buf);

	close(fd);
	return (rcount);
}
