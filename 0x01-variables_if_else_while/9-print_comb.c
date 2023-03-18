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
	char alpha = '0';

	while (alpha <= '9')
	{
		putchar(alpha);
		if (alpha != '9')
		{
			putchar(',');
			putchar(' ');
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
