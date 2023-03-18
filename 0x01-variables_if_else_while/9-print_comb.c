#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry
 *
 * Description: printing alphabet
 *
 * Return: 0
 */

int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
