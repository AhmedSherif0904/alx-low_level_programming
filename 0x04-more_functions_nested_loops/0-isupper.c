/**
 * _isupper - entry point
 *@c: char
 * description : prints putchar
 *
 * Return: -1
 */

int _isupper(char c)
{
	int ch, upper = 0;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			upper = 1;
		}
	}
	return (upper);
}
