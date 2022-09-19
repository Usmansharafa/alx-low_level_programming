#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Generates a random password
 *
 * Return: 0 (Success) or 1 (Failure)
 */
int main(void)
{
	int i, pass_len, digit_len, lowers_len;
	int uppers_len, symbols_len;
	char *digits, *lowers, *uppers, *symbols;
	char *password;
	int char_type;

	srand(time(NULL));

	pass_len = rand() % 50;
	if (pass_len == 0)
		return (1);

	password = malloc(pass_len + 1);

	digits = "0123456789";
	digit_len = strlen(digits);
	lowers = "abcdefghijklmnopqrstuvwxyz";
	lowers_len = strlen(lowers);
	uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	uppers_len = strlen(uppers);
	symbols = "!@#$%^&*()";
	symbols_len = strlen(symbols);

	srand(time(NULL));

	for (i = 0; i < pass_len; i++)
	{
		char_type = rand() % 4;
	
		if (char_type == 0)
			password[i] = digits[rand() % digit_len];
		else if (char_type == 1)
			password[i] = lowers[rand() % lowers_len];
		else if (char_type == 2)
			password[i] = uppers[rand() % uppers_len];
		else
			password[i] = symbols[rand() % symbols_len];
	}
	password[pass_len] = '\0';

	printf("%s\n", password);

	free(password);

	return (0);
}
