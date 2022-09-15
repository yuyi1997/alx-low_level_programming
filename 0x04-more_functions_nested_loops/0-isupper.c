#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks
 * @c: The input.
 * Return: 1 if input
 */

int _isupper(int c)
{
	int i;

	if (isupper(c) == 0)
		i = 0;
	else
		i = 1;
	return (i);
}
