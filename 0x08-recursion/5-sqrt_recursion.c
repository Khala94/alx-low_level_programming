#include "main.h"
/* All my headers goes here */

/**
* find_sqrt - Finds the natral square on inputed number
* @num: Finding square of this variable
* @root: The root
* Return: 1 if the number has natural squares and 0 if it doesnt
*/

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	else if (root == num / 2)
	{
		return (-1);
	}
	return (find_sqrt(num, root + 1));
}

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, root));
}
