#include "3-calc.h"

/**
 * op_add - Adds two numbers
 * @a: First number
 * @b: Second number
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 * @a: First number
 * @b: Second number
 * Return: Difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: First number
 * @b: Second number
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: First number
 * @b: Second number
 * Return: Quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gets the remainder from dividing
 * two numbers
 * @a: First number
 * @b: Second number
 * Return: a modulo b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
