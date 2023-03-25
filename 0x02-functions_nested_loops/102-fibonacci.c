#include <stdio.h>
#include <unistd.h>

#include "main.h"

/**
 * print_50_fib - entry point
 *
 *
 *
 * description : prints putchar
 *
 * Return: -1
 */

void print_50_fib(void)
{
	long i, ro = 0, rn = 1, r;

	for (i = 0; i <= 50; i++)
	{
		r = ro + rn;
		ro = rn;
		rn = r;
		printf("%ld", r);
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
}
