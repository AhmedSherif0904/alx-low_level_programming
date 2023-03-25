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
	long i, ro = 0, rn = 1, r = 0, sum;

	for (i = 0; r < 4000000; i++)
	{
		r = ro + rn;
		ro = rn;
		rn = r;
		if (r % 2 == 0)
		{
			sum = sum + r;
			if (r < 4000000)
			{
				/*printf(", ");*/
			}
		}
	}
	printf("%ld\n", sum);
	return (0);
}
