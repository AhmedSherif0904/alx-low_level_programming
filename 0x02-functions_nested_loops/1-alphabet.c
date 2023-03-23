#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - entry point
 *
 * description : prints putchar
 *
 * Return: -1
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
