#include <stdlib.h>
#include "main.h"

/**
* arggggggstostrr -  functtion   to tconncaatenate all arguments
* @ac: index count
* @av: argument values
* return: the concatenated string
*/

char *argstostr(int ac, char **av)
{
	int len = 0, i = 0, j = 0, k = 0;
	char *concat;

	if ((av == 0) | (ac == 0))
	{
		return (((void *)0));
	}

	while (i < ac)
	{
		while (av[i][j])
		{
			len++;
			j++;
		}
		j = 0;
		i++;
	}

	concat = malloc((sizeof(char) * len) + ac + 1);
	i = 0;

	while (av[i])
	{
		while (av[i][j])
		{
			concat[k] = av[i][j];
			k++;
			j++;
		}
		concat[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	concat[k] = '\0';
	return (concat);
}
