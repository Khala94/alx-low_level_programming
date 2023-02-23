#include "main.h"
/* all heqders goes here */

/**
* more_numbers - print 0 - 14 10 times
* Result: 0
*/

void more_numbers(void)
{
	int i, x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <=14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) * '0');
			}
			_putchar((x % 10) + '0';
		}
		_putchar('\n');	
	}
}
