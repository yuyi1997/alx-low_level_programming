#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Computes the absolute value of an input
 * @n: the number to be processed
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last = abs(n % 10);

	_putchar(last + '0');
	return (last);
}
