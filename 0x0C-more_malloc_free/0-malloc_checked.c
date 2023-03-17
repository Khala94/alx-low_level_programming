#include <stdlib.h>
#include "main.h"
/* All my headers goes here */

/**
* *malloc_checked - allocates memory using malloc
* @b: number of bytes to allocate
* return: a pointer to allocate memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
