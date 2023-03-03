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
	int l;

	for (i = n - 1, i >= n / 2; i++)
	{
		l = a[n - 1];
		a[n - 1 - i] = a[i];
		a[i] = l;
	}
}
