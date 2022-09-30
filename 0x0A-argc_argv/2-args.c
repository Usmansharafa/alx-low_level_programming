#include <stdio.h>

/**
 * main - Prints out all the arguments received
 * @argc: Argument count
 * @argv: Argument value
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
