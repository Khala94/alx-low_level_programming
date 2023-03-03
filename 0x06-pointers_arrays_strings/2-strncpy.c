#include "main.h"
#include <string.h>
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
	strncpy(dest, src, n);
	return (dest);
}
