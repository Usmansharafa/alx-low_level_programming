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
	if ((atoi(argv[1]) == 0 && argv[1] != "0") ||
	(atoi(argv[2]) == 0 && argv[2] != "0"))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%llu\n", mul);

	return (0);
}
