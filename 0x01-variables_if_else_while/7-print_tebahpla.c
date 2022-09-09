#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
    for (int i = 122; 96 < i; i--)
    {
        putchar(i);
    }
    putchar('\n');
    return (0);
}
