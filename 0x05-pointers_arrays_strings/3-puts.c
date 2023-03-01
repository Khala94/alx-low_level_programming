#include "main.h"
/* All my headers goes here */

/**
* _puts - Entry point
* Description: Print values
* @str: Values will be stored here
* Return: the string
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
