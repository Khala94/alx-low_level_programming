#include "main.h"
/* all headers gies herr */

/**
* print_number : print 0 - 9
* Return: always 0
*/

int print_number(void)
{
	int a;

	while ( a <= 9)
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
