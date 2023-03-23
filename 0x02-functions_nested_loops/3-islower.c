#include <unistd.h>
#include "main.h"

/**
 * _islower - entry point
 * @c: char
 *
 * description : prints putchar
 *
 * Return: -1
 */

int _islower(char c)
{
	int ch;
	int r = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			r = 1;
		}
	}
	return (r);
}
