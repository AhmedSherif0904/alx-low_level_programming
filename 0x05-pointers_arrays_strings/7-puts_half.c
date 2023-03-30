#include "main.h"
/**
 * puts_half - entry point
 * @str: char
 * description : prints putchar
 *
 * Return: -1
 */

void puts_half(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 1)
	{
		len--;
	}
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
