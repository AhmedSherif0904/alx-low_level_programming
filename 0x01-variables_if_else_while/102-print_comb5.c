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
		for (j = '0'; j <= '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				for (l = j + 1; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					if (i != '9' || 9 != '8')
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
				}
			}
		}
		
	}
	putchar('\n');
	return (0);
}
