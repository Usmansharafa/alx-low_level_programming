#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combination of two
 * two-digit numbers
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
					continue;
				}
				continue;
			}
			continue;
		}
		putchar('\n');
		return (0);
	}

