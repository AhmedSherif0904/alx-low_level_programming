#include <unistd.h>

#include "main.h"

/**
 * times_table - entry point
 *
 *
 * description : prints putchar
 *
 * Return: -1
 */

void times_table(void)
{
	int i, j, mply;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mply = i * j;

			if (mply <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(mply + '0');
			}
			else
			{
				_putchar(mply / 10 + '0');
				_putchar(mply % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
