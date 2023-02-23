#include "main.h"
/* all headers goes here */

/**
* print_most_numbers - Program is to print numbers, from 0 - 9
* Return: the most numbers
*/

void print_most_numbers(void)
{
	int i;

	for (i = 47; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar(10);
	

}
