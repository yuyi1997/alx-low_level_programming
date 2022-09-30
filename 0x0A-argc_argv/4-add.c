#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - iterate through each argv to if it's a number
 * @argvv: a argv
 * Return: true if all are numbers, else false
 */

bool is_num(char *argvv)
{
	int j = 0;

	for (j = 0; argvv[j]; j++)
	{
		if (!(argvv[j] >= '0' && argvv[j] <= '9'))
			return (0);
	}
	return (1);
}
