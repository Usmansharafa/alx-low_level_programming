#include "main.h"

/**
 * set_string - Set the value of a pointer to a char
 *
 * @s: pointer to be set
 * @to: string to set to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
