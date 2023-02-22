#include <stdio.h>
/* All my hwaders goes here */

/**
* main - Entry point
* Return: void
*/

int main(void)
{
	int print_alphabet(void)
	{
		char c;
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar(10);
	}
}
