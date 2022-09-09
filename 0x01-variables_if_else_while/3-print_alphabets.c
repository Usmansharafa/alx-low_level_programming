#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
    for (int i = 97; i < 123; i++)
    {
        putchar(i);
    }
    for (int j = 65; j < 91; j++)
    {
        putchar(j);
    }
    putchar('\n');
    return (0);
}
