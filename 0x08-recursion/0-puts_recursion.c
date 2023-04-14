#include "main.h"

/**
 * _puts_recursion - entry point
 *@s: char
 * description : prints putchar
 *
 * Return: -1
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
