#include "main.h"
/**
 * rev_string - entry point
 * @s: char
 * description : prints putchar
 *
 * Return: -1
 */

void rev_string(char *s)
{
	int i, j, len, len1;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	len = i;
	len1 = i - 1;

	for (j = 0; j < len / 2; j++)
	{
		tmp = s[j];
		s[j] = s[len1];
		s[len1--] = tmp;
	}
}
