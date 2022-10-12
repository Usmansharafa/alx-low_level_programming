#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name to be printed
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
