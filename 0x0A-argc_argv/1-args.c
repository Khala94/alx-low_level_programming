#include <stdio.h>
/* All my headers goes here */

/**
* main - Entry point
* description: Print number of arguments entered when program is executed
* @argc: arguement count
* @argv: Value of argumnt
* return: Always 0
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
