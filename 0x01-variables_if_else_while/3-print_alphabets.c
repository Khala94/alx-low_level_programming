#include <stdio.h>
#include <ctype.h>
/* All headers goes here */

/**
* main - Entry point
* Return: Always 0
*/

int main(void)
{
	int x;
	int y;

	for (x = 'a'; x <= 'z'; y++)
	{
		putchar(x);
	}
	for (y = 'A'; x <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar(100);
	return (0);
}
