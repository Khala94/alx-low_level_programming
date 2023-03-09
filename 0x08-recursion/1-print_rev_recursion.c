#include "main.h"
/* All my headers goes here */

/**
* _print_rev_recursion - Entry point
* @s: Pointer
* return: Always 0
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_rexursion(s + 1);
		_putchar(*s);
	}
}
