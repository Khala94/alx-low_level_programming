#include "function_pointers.h"
/* All my headers goes here */

/**
 * int_index - function to be ran
 * description: Funcion to search for an interger in an array
 * @array: array to be searched
 * @size: size of the array
 * return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
