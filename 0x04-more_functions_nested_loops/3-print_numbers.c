#include "main.h"
/* all headers gies herr */

/**
* print_number : print 0 - 9
* Return: 0 -9
*/

int print_number(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
