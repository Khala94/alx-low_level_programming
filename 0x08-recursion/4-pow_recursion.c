#include "main.h"
/* All headers goes here */

/**
* _pow_recursion - Return value of x
* @x: Number to be raised
* @y: The power
* Return: The value of x raised to the power of x
*/

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	result *= _pow_recursion(x, y - 1);
	return (result);
}
