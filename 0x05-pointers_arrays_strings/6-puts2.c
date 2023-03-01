#include "main.h"
/* All my headers goes here */

/**
* puts2 - Entry point
* Description: Print first character of a string
* @str: The given variable
* Return: The values
*/

void puts2(char *str)
{
	int i, j;

	i = 0;

	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar(10);
}
