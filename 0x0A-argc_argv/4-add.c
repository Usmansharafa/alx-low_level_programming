#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 * @argc: argument count
 * @argv: argument value
 * Return: 1 if failure or 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] != '0' && atoi(argv[i]) == 0))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);
	return (0);
}
