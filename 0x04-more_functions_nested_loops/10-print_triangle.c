#include "main.h"
/**
 * print_triangle - entry point
 * @size : char
 * description : prints putchar
 *
 * Return: -1
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				if (j != 0)
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
