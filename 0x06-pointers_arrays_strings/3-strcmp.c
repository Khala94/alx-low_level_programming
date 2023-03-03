#include "main.h"
#include <string.h>
/* All my headers goes here */

/**
* _strcmp - Entry point
* Description: Compare two string
* @s1: First character
* @s2: Second character
* Return: values
*/

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
