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
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if ((argv[i][j] < '0' || argv[i][j] > 9))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);
	return (0);
}
