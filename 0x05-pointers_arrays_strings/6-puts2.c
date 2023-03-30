#include "main.h"
/**
 * puts2 - entry point
 * @str: char
 * description : prints putchar
 *
 * Return: -1
 */

void puts2(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
