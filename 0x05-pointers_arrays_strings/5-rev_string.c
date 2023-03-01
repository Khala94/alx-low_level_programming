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
	int a, b;

	a = 0;

	b = 0;

	while (s[b++])
	{
		a++;

		for (b	= a - 1; b >= a / 2; b--)
		{
			char x = s[b];

			s[b] = s[a - b - 1];
			s[a - b - 1] = x;
		}
	}
}
