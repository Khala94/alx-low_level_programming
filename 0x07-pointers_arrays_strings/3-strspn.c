#include "main.h"
/* All my headers goes here */

/**
* _strspn - Entry point
* @s: Input
* @accept: Input
* Return: Always 0
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			n++;
			break;
		}
		else if (accept[k + 1] == '\0')
		{
			return (n);
		}
		s++;
	}
	return (n);
}
