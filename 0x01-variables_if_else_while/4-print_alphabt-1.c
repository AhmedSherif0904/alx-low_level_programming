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
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' || alpha != 'e')
		{
			putchar(alpha);
			alpha++;
		}
		else
			alpha++;
	}
	putchar('\n');
	return (0);
}
