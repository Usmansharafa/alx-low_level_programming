#include <stdio.h>

/**
 * main - Prints out number of arguments passed to main
 * @argc - Argument count
 * @argv - Argument value
 * Return: 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%i\n", argc - 1);

	return (0);
}
