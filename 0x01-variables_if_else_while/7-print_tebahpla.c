#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase and reverse order
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 95; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
