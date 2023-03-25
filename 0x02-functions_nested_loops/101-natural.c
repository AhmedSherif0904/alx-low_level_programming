#include <stdio.h>
#include <unistd.h>

#include "main.h"

/**
 * main - entry point
 *
 *
 *
 * description : prints putchar
 *
 * Return: -1
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	return (0);
}
