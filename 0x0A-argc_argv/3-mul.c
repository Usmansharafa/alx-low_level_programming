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
	int num1, num2;

	if (argc <= 2)
	{
		printf("Ërror\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
