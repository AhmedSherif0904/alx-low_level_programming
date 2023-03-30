#include "main.h"
/**
 * _puts - entry point
 * @str: char
 * description : prints putchar
 *
 * Return: -1
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
