#include "main.h"
/* All my headers goes here */

/**
* reverse_array - Entry point
* Description: Reverse array element
* @a: Pointer
* @n: Index
* Return: The reversed string
*/

void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
