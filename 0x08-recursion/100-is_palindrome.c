#include "main.h"
/* All my headers goes here */

/**
 * find_strlen - Entry point
 * description: Find length of a string variable
 * @s: String to be measured
 * return: The length of the string
 */

int find_strlen(char *s);
int check_palindrome(char *s, int len, int  index);
int is_palindrome(char *s);

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
	{
		return (1);
	}
	else if (s[index] == s[len - index - 1])
	{
		return (check_palindromes(s, len, index + 1));
	}
	return (0);
}

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
	{
		return (1);
	}
	return (check_palindrome(s, len, index));
}
