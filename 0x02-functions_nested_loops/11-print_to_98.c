#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - entry point
 *@n: number
 *
 *
 * description : prints putchar
 *
 * Return: -1
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}

