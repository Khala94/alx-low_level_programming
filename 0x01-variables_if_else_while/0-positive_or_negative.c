#include <stdio.h>
#include <stdlib.h>

/**
* Main - Start of the program
*
* Return: Always 0
*
*/

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive\n", n);
	}
	if (n<0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero", n);
	}
	reutn (0);
}
