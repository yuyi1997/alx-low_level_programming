#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - A function that checks if a number
 * is prime
 * @n: the input integer
 * Return: 1 if n is prime or 0 otherwise
 */

int is_primenumber(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisble(n, div));
}
