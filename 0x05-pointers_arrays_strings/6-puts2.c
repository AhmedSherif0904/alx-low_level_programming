#include "main.h"
/**
 * _puts2 - entry point
 * @str: char
 * description : prints putchar
 *
 * Return: -1
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
