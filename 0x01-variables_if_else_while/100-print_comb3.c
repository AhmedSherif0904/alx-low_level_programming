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
	int i = '0', j = '0';
	while (i <= '9')
	{
		while (j <= '9')
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
