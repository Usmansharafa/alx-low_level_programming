#include <stdio.h>

/**
 * main - Prints out name of file
 * @argc: argument count
 * @argv: argument value
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
