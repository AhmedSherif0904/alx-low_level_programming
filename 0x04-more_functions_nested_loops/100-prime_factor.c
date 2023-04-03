#include "main.h"
/**
 * main - entry point
 *  : char
 * description : prints putchar
 *
 * Return: -1
 */

int main(void)
{
	long int i, max, num;

	num = 612852475143;
	for (i = 0; i < num; i++)
	{
		if (num % i == 0)
		{
			max = i;
		}
	}
	printf("%ld\n", max);
	return (0);
}
