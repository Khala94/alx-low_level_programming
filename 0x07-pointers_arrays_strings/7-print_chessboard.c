#include "main.h"

/**
* _print_chessboard - Entry point
* @a: input
* Return: void
*/

void print_chessboard(char (8a)[8])
{
	unsigned int i, x = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			x = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - x]);
	}
}
