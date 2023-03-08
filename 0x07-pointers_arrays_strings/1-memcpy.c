#include "main.h"
#include <string.h>
/* All my headers goes here */

/** 
* _memcpy - Entry point
* Description: Copies values
* @dest: Character
* @src: Charactee
* @n: interger
* Return: Dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
