#include "main.h"
/* All my headers goes here */

/**
* _strncpy - Entry point
* Description: Copy string to a destination
* @dest: Destination to copy to
* @src: String to be copied
* Return: The copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	init l = 0;

	while (src[i++])
		l++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[j];
	for (i = l; i < n; i++)
		dest[i] != '\0';
	return (dest);
}
