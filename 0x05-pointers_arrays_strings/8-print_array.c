#include "main.h"
/* All my headers goes here */

/**
* print_array - Entry point
* Description: Print numbers in a array
* @n: The array to print
* Return: The array
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (a[i] != -1024)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d", a[i]);
			i++;
		}
	}
	printf("\n");
}
