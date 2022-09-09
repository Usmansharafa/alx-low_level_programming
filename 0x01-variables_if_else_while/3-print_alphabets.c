#include <stdio.h>

/**
 * main - ENtry point
 *
 * Description: Prints alphabets in lowercase and uppercase
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i, j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (j = 65; j < 91; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
