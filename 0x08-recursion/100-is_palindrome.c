#include "main.h"
int palindrome_helper(char *start, char *end);

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string
 *
 * Return: 1 if the string is a palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (palindrome_helper(s, s));
}

/**
 * palindrome_helper - recursive palindrome cheker
 * @start: start of the substring to check
 * @end: end of the substring
 *
 * Return: 1 if substring is a palindrome 0 otherwise
 */
int palindrome_helper(char *start, char *end)
{
	/* Base case: if substring is empty or has a single char */
	if (start >= end)
		return (1);

	/*checks if the characters at start and end are the same */
	if (*start != *end)
		return (0);

	return (palindrome_helper(start + 1, end - 1));
}
