#include "main.h"
/* All my headers goes here */

/**
* is_divisible - Entry point
* description: Check if the number is divisible
* @num: Variable to check
* @div: The divisor
* Return: 0 is its devisible and 1 if it isn't
*/

int is_divisible(int num, int div);
int is_prime_number(int n);

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	else if (div == num / 2)
	{
		return (1);
	}
	return (is_divisible(num, div + 1));
}

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}
