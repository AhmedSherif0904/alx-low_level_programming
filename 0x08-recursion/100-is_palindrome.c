#include <string.h>

#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i;

	if (len <
		2) /* base case: a string of length 0 or 1 is always a palindrome */
		return (1);

	if (s[0] != s[len - 1]) /* if the first and last characters don't match, s
							   is not a palindrome */
		return (0);

	/* recursively check if the substring without the first and last characters
	 * is a palindrome */
	s[len - 1] = '\0'; /* temporarily remove the last character */
	i = is_palindrome(s + 1);
	s[len - 1] = s[0]; /* restore the last character */
	return (i);
}
