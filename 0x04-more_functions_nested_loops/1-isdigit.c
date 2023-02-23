#include "main.h"
/* all headers go here */

/**
* _isdigit - checks for spefic digit
* @c: value to check
* Return: 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
