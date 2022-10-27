#include "main.h"

int check_binary(const char *b);
unsigned int _strlen(const char *b);
unsigned int _pow(unsigned int base, unsigned int index);
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String of 0 and 1 chars
 * Return: The converted number or 0 if b is not a binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, bit_len, i, copy;

	if (check_binary(b) == 0 || b == NULL)
		return (0);
	bit_len = _strlen(b) - 1;
	copy = bit_len;
	for (i = 0; i <= copy; i++, bit_len--)
	{
		if (b[i] == '0')
			num += 0;
		else
			num += _pow(2, bit_len);
	}
	return (num);
}

int check_binary(const char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			continue;
		return (0);
	}
	return (1);
}

unsigned int _strlen(const char *b)
{
	int len;

	for (len = 0; b[len] != '\0'; len++)
		;
	return (len);
}

unsigned int _pow(unsigned int base, unsigned int index)
{
	unsigned int number = 1, i;

	if (index == 0)
		return (1);
	for (i = 0; i < index; i++)
		number *= base;
	return (number);
}
