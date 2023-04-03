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
	long long int i, max, num;

	num = 612852475143;
	max = -1;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			if (i > max)
			{
				max = i;
			}
			num /= i;
			i = 2;
		}
	}
	printf("%lld\n", max);
	return (0);
}
