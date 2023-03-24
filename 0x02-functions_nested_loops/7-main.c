#include "main.h"

/**
 * main - entry point
 *
 * description : prints putchar
 *
 * Return: -1
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
