#include <stdio.h>
#include <stdlib.h>
/* All my headers goes here */

/**
* main - Entry point
* description: Print multiplication of 2 numbers
* @argc: argument count
* argv: argument value
* retuurn: 0 always
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1] * atoi(argv[2]));
		printf("%d\n", i);
	}

	return (0);
}
