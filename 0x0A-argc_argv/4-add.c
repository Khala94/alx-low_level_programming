#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/* All my headers goes here */

/**
* main - entry point
* @argc: Argument count
* @argv: Name of argument
* return: 0
*/

int main(int argc, char *argv[])
{
	int i, j, len, sum;
	char *ptr;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
