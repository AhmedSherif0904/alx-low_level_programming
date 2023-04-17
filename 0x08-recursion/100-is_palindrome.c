#include <string.h>

#include "main.h"

/**
 * check_palindrome - helper function that checks if a string is a palindrome
 * @s: pointer to the string to check
 * @start: starting index of the string
 * @end: ending index of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}
