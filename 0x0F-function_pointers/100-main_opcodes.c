#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Prints opcodes of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int (*f)(int, char **) = main;
	int i, bytes;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)f;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");
		f++;
	}
	
	printf("\n");
	return (0);
}
