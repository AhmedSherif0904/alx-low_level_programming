#include "main.h"
/**
 * print_array - entry point
 * @a: char
 * @n: char
 * description : prints putchar
 *
 * Return: -1
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
