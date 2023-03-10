#include "stdio.h"
/* All my headers goes here */

/**
* main - Entry point
* description: Program should print it's own name
* @agrc: argument
* @argc: count
* return: the name of the program
*/

int main(char *argv[], int argc)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
