#include "main.h"
/* All my headers goes here */

/**
* factorial - Entry point
* @n: number to print fictorial of
* Return: if n > 0 - Factorial of n
*/

int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	result *= factorial(n - 1);
	return (result);
}
