#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1; 1 < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
