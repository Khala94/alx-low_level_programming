#include "main.h"
#include <unistd.h>
/* All my headers goes here */

/**
* _putchar - writes the character to c to stdout
* @c: The character to print
* Return: on success 1
* On error, -1 ruturned 
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
