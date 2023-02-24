#include "main.h"
/* al headers goes here */

/**
* print_diagonal : print a line in a diagonal 
* @n: being the length
* Return: diagonal line
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
