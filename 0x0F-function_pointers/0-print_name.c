#include "function_pointers.h"
/* All my headers goes here */

/**
 * print_name - function that prints the name
 * @name: Given name
 * @f: function name
 * return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
