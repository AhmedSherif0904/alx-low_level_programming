#include <stdio.h>
#include <unistd.h>

#include "main.h"

/**
 * print_35_multiples - entry point
 *
 *
 *
 * description : prints putchar
 *
 * Return: -1
 */

int print_35_multiples(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}

	return (sum);
}
