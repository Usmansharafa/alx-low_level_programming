#include "3-calc.h"
#include <stdio.h>

/**
 * main - Check the code
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	f = get_op_func(op);
	if (f == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '%' && num2 == 0) || (*op == '/' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(num1, num2));
	return (0);
}
