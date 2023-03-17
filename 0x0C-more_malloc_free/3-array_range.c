#include <stdlib.h>
#include "main.h"
/* All my headers goes here */

/**
* *array_range - creates an array
* @min: minimum range of values stored
* @max: maximum range of values stored
* return: pointer to the new array
*/

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min + 1);
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}
	return (arr);
}
