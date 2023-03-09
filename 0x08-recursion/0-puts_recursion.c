#include "main.h"
/* All my headers goes here */

/**
* _puts_recursion - Entry point
* @s: Pointer
* return: Always 0
*/

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
