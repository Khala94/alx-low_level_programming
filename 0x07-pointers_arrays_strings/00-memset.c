#include "main.h"
/* All my headets goes here */

/**
* _memset - Entry point
* Description: Fill memory with constant bytes
* @s: Pointer
* @b: Fill with a
* @c: variable
* Return: Fill with bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
