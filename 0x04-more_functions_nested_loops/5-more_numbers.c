#include "main.h"
/**
 * more_numbers - entry point
 *
 * description : prints putchar
 *
 * Return: -1
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
				_putchar('0' + i);
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
		}
		_putchar('\n');
	}
}
