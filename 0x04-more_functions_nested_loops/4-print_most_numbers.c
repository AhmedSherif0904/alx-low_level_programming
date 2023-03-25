#include "main.h"
/**
 * print_numbers - entry point
 *
 * description : prints putchar
 *
 * Return: -1
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 || i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
