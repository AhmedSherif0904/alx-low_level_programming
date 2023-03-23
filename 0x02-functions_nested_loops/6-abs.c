#include "main.h"
#include <unistd.h>

/**
 * _abs - entry point
 * @n: char
 *
 * description : prints putchar
 *
 * Return: -1
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
