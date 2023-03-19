#include <stdio.h>

/**
 * main - entry
 *
 * Description: printing alphabet
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k = '0', l = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				l = '0';
				while (l <= '9')
				{
					if (k == i && l == '0')
					{
						l = j + 1;
					}
					putchar(i);
					putchar(j);
					if (i != '9' || j != '9')
					{
						putchar(' ');
					}
					putchar(k);
					putchar(l);
					if (!(k == '9' && l == '9' && i == '9' && j == '8'))
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
