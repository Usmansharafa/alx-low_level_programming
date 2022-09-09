#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digits separated by a comma and a space
 *
 * Return: 0 (Success)
 */
int main(void)
{
    for (int i = 48; i < 58; i++)
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
