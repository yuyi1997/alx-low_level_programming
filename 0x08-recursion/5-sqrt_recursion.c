#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - a function that returns the value
 * of square root of n.
 * @n: the input integer
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - a function that finds the square root
 * @prev: the previous value
 * @root: the square rot value
 * Return: the square root
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
