#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/* All my headers goes here */

/**
 * get_op_func - Function to be ran
 * @s: character
 * return: 0
*/

int *get_op_func(char *s)(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};

	for (i = 0; i < 5; i++)
	{
		if (strcmp(s, ops[i].p) == 0)
			return (ops[i].f);
	}
	return (0);
}
