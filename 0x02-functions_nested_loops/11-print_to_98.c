#include <unistd.h>

#include "main.h"

/**
 * print_to_98 - entry point
 *@n: number
 *
 *
 * description : prints putchar
 *
 * Return: -1
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n <= 9 && n >= 0)
			{
				_putchar(n + '0');
			}
			else if (n < 0 && n > -10)
			{
				_putchar('-');
				_putchar(-n + '0');
			}
			else if (n <= -10)
			{
				_putchar('-');
				_putchar(-n / 10 + '0');
				_putchar(-n % 10 + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
	else if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n >= 100)
			{
			_putchar(n / 100 + '0');
			_putchar((n % 10) / 10 + '0');
			_putchar((n % 10) % 10 + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
