#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out the last digit of a number
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    int last_digit = n % 10;
    if (n == 0)
    {
        last_digit = 0;
    }
    if (last_digit > 5)
    {
        printf("Last digit of %d is %i and is greater than 5\n", n, last_digit);
    }
    else if (last_digit < 6 && last_digit != 0)
    {
        printf("Last digit of %d is %i and is less than 6 and not 0\n", n, last_digit);
    }
    else if (last_digit == 0)
    {
        printf("Last digit of %d is %i and is 0\n", n, last_digit);
    }
    return (0);
}
