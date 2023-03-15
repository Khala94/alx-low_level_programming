#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/* All my headers goes here */

/**
* main - entry point
* @argc: Argument count
* @argv: Name of argument
* return: 0
*/

int main(int argc, char *argv[])
{
	unsigned int sum = 0;
	char *j;
	unsigned int k;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = argv[i];

			for (k = 0; k < strlen(j); k++)
			{
				if (j[k] < 48 || j[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			surm += atoi(j);
			j++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
