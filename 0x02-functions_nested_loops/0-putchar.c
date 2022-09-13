#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints out _putchar
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i;
	char word[9] = "_putchar\n";

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}
	return (0);
}
