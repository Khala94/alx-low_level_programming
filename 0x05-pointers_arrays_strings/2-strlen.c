#include "main.h"
/* All my headers goes here */

/**
* _strlen: checks the length of a string
* @s: the variable to be checked
* Return: the length
*/

int _strlen(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	
	return (i);
}
