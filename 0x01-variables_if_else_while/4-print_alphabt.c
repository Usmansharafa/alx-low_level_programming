#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase excluding q and e
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
