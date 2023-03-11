#include <stdio.h>
#include <stdlib.h>
/* All my headers goes here */

/**
* main - Entry point
* description: Print multiplication of 2 numbers
* @argc: argument count
* argv: argument value
*
* return: 0 always
*/

int main(int argc, char *argv[])
{
	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
