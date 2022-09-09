#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digits separated by a comma and space
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

