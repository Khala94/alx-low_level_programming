#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/* All my headers goes here */

/**
 * main - Entry point
 * @argc: Argument count
 * #argv: Argument value
 */

int main(int argc, char * argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1], atoi(argc[3])));
	return (0);
}
