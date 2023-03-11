#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/** All my headers goee here */

/**
* main - entry point
* description: print sum of given numbers
* @argc: argument count
* @argv: argument value
*
* return: always 0
*/

int main(int argc, char *argv[])
{
	int i, j, len, sum;

	char *ptr;

	if (argc == 1)
	{
		prinf("0\n");
		return (1);
	}
	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			ptr = argv[];
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
