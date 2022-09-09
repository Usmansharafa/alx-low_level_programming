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
    for (int i = 97; i<123; i++)
    {
        putchar(i);
    }
    putchar('\n');
    return (0);
}
