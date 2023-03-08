#include "main.h"
/* All my headers goes here */

/**
* _strchr - Entry point
* description: Locates a char inside a string
* @c: Character
* @s: String
* Return: Always 0
*/

char *_strchr(char *s, char c)
{
	int a = 0;
	int b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
