#include "main.h"
/* All my headers goes here */

/**
* string_toupper - entry point
* Description: String to uppercase
* @x: variable
* Return: string
*/

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] = x[i] - 32;
		}
	}
	return (x);
}
