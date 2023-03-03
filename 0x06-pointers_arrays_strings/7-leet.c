#include "main.h"
/* All my headers goes here */

/**
* leet - entry point
* Description: Encodes a string
* @s: String
* Return: address of s
*/

char *leet(char *s)
{
	int i;
	int j;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[i])
				s[i] = b[j];
		}
	}
	return (s);
}
