#include <unistd.h>

#include "main.h"

/**
 * print_last_digit - entry point
 * @n: char
 *
 * description : prints putchar
 *
 * Return: -1
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (n < 0)
		ld = ld * -1;
	
	_putchar('0' + ld);
	return (ld);
}
