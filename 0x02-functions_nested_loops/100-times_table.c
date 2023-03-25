#include <unistd.h>

#include "main.h"

/**
 * print_times_table - entry point
 *@n: number
 *
 * description : prints putchar
 *
 * Return: -1
 */

void print_times_table(int n)
{
	if (n <= 15 && n > 0)
	{
		int i, j, mply;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mply = i * j;

				if (mply <= 9)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(mply + '0');
				}
				else if (mply < 100)
				{
					_putchar(' ');
					_putchar(mply / 10 + '0');
					_putchar(mply % 10 + '0');
				}
				else
				{
					_putchar(mply / 100 + '0');
					_putchar((mply % 100) / 10 + '0');
					_putchar((mply % 100) % 10 + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
