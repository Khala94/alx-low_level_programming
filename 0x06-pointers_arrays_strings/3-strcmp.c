#include "main.h"
/* All my headers goes here */

/**
* _strcmp - Entry point
* Description: Compare two string
* @s1: First character
* @s2: Second character
* Return: values
*/

int _strcmp(char *s11, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			break;
			i++;
		}
	}

	if (s1[i] < s2[i])
	{
		return (-15);
	}
	else if (s1[i] > s2[i])
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
