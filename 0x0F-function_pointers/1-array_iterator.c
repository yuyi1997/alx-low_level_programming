#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * given as apeameter on each element
 * @array: a pointer to array
 * @size: size of the array
 * @action: function to iterate over array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
