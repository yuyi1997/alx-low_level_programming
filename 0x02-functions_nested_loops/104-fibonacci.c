#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int j = 1, k = 2, m = j + k, n = m;

	printf("%lu, %lu, ", j, k);

	for (i = 1; i < 97; i++)
	{
		if (i == 97)
			printf("%lu\n", n);
		else
			printf("%lu, ", n);
		n = m + k;
		k = m;
		m = n;
	}
	return (0);
}
