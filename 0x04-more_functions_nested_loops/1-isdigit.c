/**
 * _isdigit - entry point
 *@c: char
 * description : prints putchar
 *
 * Return: -1
 */

int _isdigit(char c)
{
	int ch, digit = 0;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (c == ch)
		{
			digit = 1;
		}
	}
	return (digit);
}
