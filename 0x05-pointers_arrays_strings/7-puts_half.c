#include "main.h"
/* All my headers goes here */

/**
* puts_half - Entry point
* Description: Print half the characters of a string
* @str: The variable to print
* Return: Half the characters of the variable
*/

void puts_half(char *str)
{
	int i = 0;
	int k;

	while (str[i] != '\0')
	{
		i++;

		if (i % 2 == 1)
		{
			k = (i - 1) / 2;
			k += 1;
		}
		else
		{
			k = i / 2;
			for (; k < i; k++)
			{
				_putchar(str[k]);
			}
		}
		_putchar(10);
	}
}
