#include "main.h"
/* All my headers goes here */

/**
* swap_int -Swap values of given intergers
* @a : Forst interget
* @b : second interger
* Return: swapped values
*/

void swap_int (int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
