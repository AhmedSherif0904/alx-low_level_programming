/**
 * swap_int - entry point
 *@a: char
 *@b: char
 * description : prints putchar
 *
 * Return: -1
 */

void swap_int(int *a, int *b)
{
	int x = *a, y = *b;
	*a = y;
	*b = x;
}
