#include "main.h"
/* All my headers goes here */

/**
* _strncat - Entry point
* Description: Append the destination
* @dest: The destination
* @scr: The byte to append
* Return: The appended destination
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
