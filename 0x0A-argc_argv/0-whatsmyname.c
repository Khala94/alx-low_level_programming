#include <stdio.h>
/* All my headers goes here */

/**
* main - Entry point
* description: Program should print it's own name
* @agrv: argument
* return: the name of the program
*/

int main(int argc,   char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
