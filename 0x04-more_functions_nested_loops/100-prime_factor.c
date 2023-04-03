#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long long int i, num, max;

	num = 612852475143;
	max = -1;

	for (i = 2; i <= num; i++)
	{
		while (num % i == 0)
		{
			max = i;
			num /= i;
		}
	}

	printf("%lld\n", max);
	return (0);
}
