#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if char is lowercase or upper case
 * @c: The input char
 *
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	int checks;

	if (islower(c) == 0)
		check = 0;
	else
		check = 1;
	return (check);
}
