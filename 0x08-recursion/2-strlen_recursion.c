#include "main.h"
/* All my headers goes here */

/**
* _strlen_recursion - Entry point
* @s: String to be measured
* Return: The length of string
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len+= _strlen_recursion(s + 1);
	}
	return (len);
}
