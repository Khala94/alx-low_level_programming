#include "main.h"
/* All my headers goes gere */

/**
* print_rev - Print string in reverse
* @s: string to be reversed
* Return: Reversed string
*/

void print_rev(char *s)
{
	int x, i;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
		for (i = x - 1; i >= 0; i--)
		{
			_putchar(i);
			_putchar(10);
		}
	}
}
