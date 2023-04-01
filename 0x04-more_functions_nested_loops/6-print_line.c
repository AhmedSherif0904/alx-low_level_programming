#include "main.h"
/**
 * print_line - entry point
 * @n : char
 * description : prints putchar
 *
 * Return: -1
 */

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
