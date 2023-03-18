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

	while (alpha < 'z')
	{
		putchar(alpha);
		alpha++;
	}
	return (0);
}
