#include "main.h"
#include <unistd.h>

/**
 * _isalpha - entry point
 * @c: char
 *
 * description : prints putchar
 *
 * Return: -1
 */

int _isalpha(char c)
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
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			r = 1;
		}
	}
	return (r);
}
