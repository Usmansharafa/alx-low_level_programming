#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Argument count
 * @argv: Argument value
 * Return: 1 if no argument is passed or 0 if successful
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc <= 2)
	{
		printf("Ërror\n");
		return (1);
	}

	if ((argv[1] != '0' && atoi(argv[1]) == 0) ||
	(argv[2] != '0' && atoi(argv[2]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);
	return (0);
}
