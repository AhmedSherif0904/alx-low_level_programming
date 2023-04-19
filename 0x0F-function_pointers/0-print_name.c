#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - calls a function to print a name
 * @name: the name to print
 * @f: pointer to a function that prints a string
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;	
	f(name);
}
