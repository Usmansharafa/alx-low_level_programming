#include "main.h"
/**
 * main - Entry point
 * Description: Multiplies two cmdline arguments
 * @argc: Number of cmdline arguments
 * @argv: argument vector
 * Return: Product of two cmdline arguments
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (check(argv[1]) == 1 || check(argv[2]) == 1)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%u\n", mul);

	return (0);
}

/**
 * check - Checks whether a string can be converted to
 * a valid number
 * @str: string to be checked
 * Return: 0 if it can or 1 if not
 */
int check(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] < 48 || str[i] > 57)
			return (1);
	}

	return (0);
}
