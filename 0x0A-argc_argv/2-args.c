#include <stdio.h>
/* All my headers goes here */

/**
* main - Entry point
* description: count number of arguments passed
* @argc: count number of argumennnnnnts
* @argv; ;value of arguuments
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
