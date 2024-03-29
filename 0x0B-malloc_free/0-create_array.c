#include "main.h"
#include <stdlib.h>

/**
 * create_array - To create an array
 * @size: size of array
 * @c: Character to initialize array
 * return: 0
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (((void *)0));
	}

	array = (char *)malloc(size * sizeof(char));
	if (array == ((void *)0))
	{
		return (((void *)0));
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
