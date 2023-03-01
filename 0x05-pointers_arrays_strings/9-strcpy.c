#include "main.h"
/* All my headers goes here */

/**
* _strcpy - Entry point
* Description: Copy a string from a source
* @dest: The destination return value
* Return: Always 0
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
