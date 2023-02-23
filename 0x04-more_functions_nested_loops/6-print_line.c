#include "main.h"
/* all headers go here */

/** 
* print_line - should draw a line on the terminal
* Return: 0
*/

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
