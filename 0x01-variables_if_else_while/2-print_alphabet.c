#include <stdio.h>

/**
 * main - ENtry point
 *
 * Description: Prints alphabet in lowercase
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
