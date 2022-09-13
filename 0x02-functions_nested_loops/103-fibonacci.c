#include <stdio.h>

/**
 * main - point of entry
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, j;
	long int fibonacci[5000];
	long int sum = 0;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 5000; i++)
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

	for (j = 0; j < 5000; j++)
	{
		if (fibonacci[j] > 4000000)
			break;
		if (fibonacci[j] % 2 == 0)
		       sum = sum + fibonacci[j];
	};
	printf("%ld\n", sum);
	return (0);
}
