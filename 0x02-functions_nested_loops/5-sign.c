#include "main.h"
#include <unistd.h>

/**
 * print_sign - entry point
 * @n: char
 *
 * description : prints putchar
 *
 * Return: -1
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		r = -1;
		_putchar('-');
	}
	return (r);
}
