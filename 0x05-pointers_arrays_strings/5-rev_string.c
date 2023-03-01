#include "main.h"
/* All my headers goes here */

/**
* rev_string - Entry Point
* Description: Program should print variable in reverse
* @s: variable to be printed
* return: reversed variable
*/

void rev_string(char *s)
{
	int a = 0, e, f;
	char g;

	while (s[a] != '\0')
	{
		a++;
	}
	f = a - 1;
	for (e = 0; f >= 0 && e < f; e++)
	{
		g = s[e];
		s[e] = s[f];
		s[f] = g;
	}
}
