#include "main.h"
/* all headers goes here */

/** 
* print_diagonal - function that draws a line diagonally
* @n: Input
* Return: Always 0
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
