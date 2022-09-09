#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
