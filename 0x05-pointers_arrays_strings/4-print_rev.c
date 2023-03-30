#include "main.h"
/**
 * print_rev - entry point
 * @str: char
 * description : prints putchar
 *
 * Return: -1
 */

void print_rev(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	for (j = i - 1; str[j] != '\0'; j--)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
