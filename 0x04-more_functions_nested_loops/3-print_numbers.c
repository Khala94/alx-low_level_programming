#include "main.h"
/* all headers gies herr */

/**
* print_number : print 0 - 9
* Return: always 0
*/

int print_number(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
